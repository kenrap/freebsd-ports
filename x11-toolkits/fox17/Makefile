PORTNAME=	fox
PORTVERSION=	1.7.85
CATEGORIES=	x11-toolkits
MASTER_SITES=	http://fox-toolkit.org/ftp/ \
		ftp://ftp.fox-toolkit.org/pub/
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Fast and extensive C++ GUI toolkit (development version)
WWW=		http://www.fox-toolkit.org/

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig

USES=		compiler:c++11-lib gl libtool localbase pathfix pkgconfig xorg
USE_GL=		gl
USE_LDCONFIG=	yes
USE_XORG=	ice sm x11 xcursor xext xfixes xft xi xrandr xrender

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-freetype-include="`pkg-config freetype2 --cflags | ${SED} -e 's|^-I||'`" \
		--with-freetype-library="`pkg-config freetype2 --libs | ${SED} -e 's|^-L||'`" \
		--with-opengl=yes \
		--with-xim \
		--bindir=${PREFIX}/bin/${PORTNAME}-${MAJORVER}
INSTALL_TARGET=	install-strip

CPPFLAGS+=	-D__BSD_VISIBLE -D__EXT1_VISIBLE -D_XOPEN_SOURCE=700

DOCSDIR=	${PREFIX}/share/doc/${PORTNAME}-${MAJORVER}

MAJORVER=	${PORTVERSION:R}
PLIST_SUB=	MAJORVER=${MAJORVER}
PORTDOCS=	*

OPTIONS_DEFINE=		CUPS DEBUG DOCS EXAMPLES OPTIMIZED_CFLAGS PROFILE TEST
OPTIONS_DEFAULT=	JPEG OPENJPEG TIFF WEBP
OPTIONS_GROUP=		IMGFMTS
OPTIONS_GROUP_IMGFMTS=	JPEG OPENJPEG TIFF WEBP

IMGFMTS_DESC=		Image formats

CUPS_LIB_DEPENDS=	libcups.so:print/cups
CUPS_CONFIGURE_ENABLE=	cups

DEBUG_CONFIGURE_ENABLE=	debug
DEBUG_CXXFLAGS_OFF=	-DNDEBUG

JPEG_USES=		jpeg
JPEG_CONFIGURE_ENABLE=	jpeg

OPENJPEG_LIB_DEPENDS=		libopenjpeg.so:graphics/openjpeg15
OPENJPEG_CONFIGURE_ENABLE=	jp2
OPENJPEG_CPPFLAGS=		-I${LOCALBASE}/include/openjpeg-1.5

PROFILE_CONFIGURE_ON=	--with-profiling=gprof

# USES=gl/USE_GL only support LIB_DEPENDS. We just need GLU at
# build time to compile the glviewer test program. FOX itself doesn't
# link to it. Tests are run manually out of the ${WRKSRC}/tests dir.
TEST_BUILD_DEPENDS=	${LOCALBASE}/include/GL/glu.h:graphics/libGLU

TIFF_LIB_DEPENDS=	libtiff.so:graphics/tiff
TIFF_CONFIGURE_ENABLE=	tiff

WEBP_LIB_DEPENDS=	libwebp.so:graphics/webp
WEBP_CONFIGURE_ENABLE=	webp

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MOPTIMIZED_CFLAGS}
CXXFLAGS+=	-O2 -ffast-math
.  if !${PORT_OPTIONS:MPROFILE}
CXXFLAGS+=	-fomit-frame-pointer
.  endif
.  if ${CHOSEN_COMPILER_TYPE} == gcc
CXXFLAGS+=	-fexpensive-optimizations -finline-functions
.  endif
.endif

post-patch:
# Rename man pages as in manpage.1 --> manpage-17.1 to avoid
# conflicts with fox16
	@files=$$(${FIND} ${WRKSRC} -name *.1); \
	for f in $$files; do \
		${MV} $$f `${ECHO_CMD} $$f | ${SED} -e 's|\.1|-17.1|'`; \
	done;
	@${FIND} ${WRKSRC} -name "Makefile.in" | ${XARGS} ${REINPLACE_CMD} -e \
		'/man_MANS/s|\.1|-17.1|g'
	@${REINPLACE_CMD} -e '/^Libs:/s|$$| -pthread|; s|"||g' ${WRKSRC}/fox17.pc.in
# CXXFLAGS safeness
	@${REINPLACE_CMD} -e \
		's|^\(CXXFLAGS=""\)|#\1|' \
		${CONFIGURE_WRKSRC}/${CONFIGURE_SCRIPT}

post-patch-EXAMPLES-off:
	@${REINPLACE_CMD} -e \
		's|^\(SUBDIRS.*\)adie|\1|; \
		 s|^\(SUBDIRS.*\)pathfinder|\1|; \
		 s|^\(SUBDIRS.*\)shutterbug|\1|; \
		 s|^\(SUBDIRS.*\)calculator|\1|' \
		${WRKSRC}/Makefile.in

post-patch-TEST-off:
	@${REINPLACE_CMD} -e \
		's|^\(SUBDIRS.*\)glviewer|\1|; \
		 s|^\(SUBDIRS.*\)tests|\1|' \
		${WRKSRC}/Makefile.in

.include <bsd.port.post.mk>
