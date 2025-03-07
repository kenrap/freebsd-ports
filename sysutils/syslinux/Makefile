PORTNAME=	syslinux
PORTVERSION=	6.03
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	KERNEL_ORG/linux/utils/boot/syslinux

MAINTAINER=	beastieboy@beastieboy.net
COMMENT=	Boot loader for the Linux operating system
WWW=		https://www.syslinux.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	nasm:devel/nasm
RUN_DEPENDS=	mtools:filesystems/mtools

USES=		perl5 gmake tar:xz
USE_PERL5=	build
MAKE_ARGS=	CC="${CC}"
ALL_TARGET=	bios

PLIST_FILES=	bin/syslinux \
		share/man/man1/syslinux.1.gz
PORTDATA=	*

pre-patch:
	@(cd ${WRKSRC};							\
	${FIND} . -type f -exec ${GREP} -le 'elf_i386' \{\} \; |	\
		${XARGS} ${REINPLACE_CMD} -e 's/elf_i386/elf_i386_fbsd/g;' )

post-patch:
	@${REINPLACE_CMD} -e \
		's|^UMAKEDEPS|#UMAKEDEPS|' ${WRKSRC}/mk/syslinux.mk

do-install:
	${STRIP_CMD} ${WRKSRC}/bios/mtools/syslinux
	${INSTALL_PROGRAM} ${WRKSRC}/bios/mtools/syslinux ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/man/syslinux.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${FIND} -d ${WRKSRC} -type d -empty -delete
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} "bios efi32 efi64" ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
