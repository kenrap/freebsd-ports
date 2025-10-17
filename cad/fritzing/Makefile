PORTNAME=	fritzing
PORTVERSION=	1.0.6.g20250402
CATEGORIES=	cad

MAINTAINER=	lenzi.sergio@gmail.com
COMMENT=	CAD for printed circuit boards
WWW=		https://fritzing.org/

LICENSE=	GPLv2+

BUILD_DEPENDS=	boost-libs>1.52:devel/boost-libs \
		svgpp>0:graphics/svgpp

LIB_DEPENDS=	libgit2.so:devel/libgit2 \
		libngspice.so:cad/ngspice_rework@shlib \
		libpolyclipping.so:graphics/polyclipping \
		libquazip1-qt6.so:archivers/quazip@qt6

USES=		compiler:c++11-lang desktop-file-utils gl gmake pkgconfig \
		qmake qt:6 shared-mime-info ssl xorg

USE_GITHUB=	yes
GH_PROJECT=	fritzing-app \
		fritzing-parts:parts
GH_TAGNAME=	b9add9eaa7c426963de20c8514a69d3f15e83bdf \
		1513f04aa3d553d1877e5fb8b84e77d895c77d62:parts

USE_CXXSTD=	c++17
USE_GL=		egl gl opengl
USE_QT=		base serialport svg tools
USE_XORG=	x11 xau xcb xdmcp

post-extract:
	${SED} -i '' -e 's|QT_MOST=.*|QT_MOST=${QT6_VERSION}|' ${WRKSRC}/phoenix.pro
	${SED} -e 's|%%LOCALBASE%%|${LOCALBASE}|' ${PATCHDIR}/pri_quazipdetect.pri > ${WRKSRC}/pri/quazipdetect.pri
	${SED} -e 's|%%LOCALBASE%%|${LOCALBASE}|' ${PATCHDIR}/pri_spicedetect.pri > ${WRKSRC}/pri/spicedetect.pri
	${SED} -e 's|%%LOCALBASE%%|${LOCALBASE}|' ${PATCHDIR}/pri_clipper1detect.pri > ${WRKSRC}/pri/clipper1detect.pri
	${CP} ${FILESDIR}/pri_gitversion.pri ${WRKSRC}/pri/gitversion.pri
	cd ${WRKSRC_parts};\
		${MKDIR} parts;${MV} -f * parts 2> /dev/null || true;\


post-install:
	cd ${WRKSRC_parts}; ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}
	${STAGEDIR}${PREFIX}/bin/Fritzing \
		-db ${STAGEDIR}${DATADIR}/parts/parts.db \
		-pp ${STAGEDIR}${DATADIR}/parts \
		-f  ${STAGEDIR}${DATADIR} \
		-platform offscreen

.include <bsd.port.mk>
