PORTNAME=	grub2-efi
PORTVERSION=	2.02
PORTREVISION=	21
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/kevlo
DISTNAME=	grub-${PORTVERSION}_7

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multiboot EFI boot loader
WWW=		https://www.gnu.org/software/grub/

LICENSE=	GPLv3+

RUN_DEPENDS=	${LOCALBASE}/bin/mformat:filesystems/mtools \
		${LOCALBASE}/bin/grub-mkrescue:sysutils/grub2-pcbsd
BUILD_DEPENDS=	${LOCALBASE}/bin/flex:textproc/flex \
		${LOCALBASE}/bin/bash:shells/bash \
		help2man:misc/help2man

ONLY_FOR_ARCHS=	amd64
USES=		autoreconf:build bison cpe gettext gmake python tar:xz

WRKSRC=		${WRKDIR}/grub-${PORTVERSION}
INSTALL_WRKSRC=	${WRKSRC}/grub-core
SSP_UNSAFE=	yes
USE_GCC=	yes:build
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes

CPE_PRODUCT=	grub
CPE_VENDOR=	gnu

CONFIGURE_ARGS=	--with-platform=efi --disable-werror \
		--localedir=${PREFIX}/share/locale
CONFIGURE_ENV=	CPP="${CC} -E" \
		LEX=${LOCALBASE}/bin/flex

post-patch:
	@${LN} -s ${LOCALBASE}/share/fonts/dejavu/DejaVuSans.ttf ${WRKSRC}
	@${TOUCH} -t 200001010000 ${WRKSRC}/Makefile.util.def

pre-configure:
	@${REINPLACE_CMD} -e 's|python|${PYTHON_CMD}|g' ${WRKSRC}/autogen.sh
	cd ${WRKSRC} && ./autogen.sh

post-configure:
	@${LN} -sfh /usr/include/machine /usr/include/sys /usr/include/x86 \
		${WRKSRC}/grub-core

.include <bsd.port.mk>
