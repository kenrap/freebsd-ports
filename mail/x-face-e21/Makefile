PORTNAME=	x-face-e21
PORTVERSION=	20070306
PORTREVISION=	33
CATEGORIES=	mail elisp
MASTER_SITES=	http://www.jpl.org/elips/
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}
DISTNAME=	${PORTNAME}.el
EXTRACT_SUFX=	.gz

MAINTAINER=	ume@FreeBSD.org
COMMENT=	X-Face utilities for Emacs
WWW=		https://www.jpl.org/elips/

RUN_DEPENDS=	uncompface:mail/faces

USES=		emacs

NO_WRKSUBDIR=	yes
EXTRACT_CMD=	${GZCAT}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	> ${DISTNAME}

PLIST_FILES=	${EMACS_VERSION_SITE_LISPDIR}/${DISTNAME} \
		${EMACS_VERSION_SITE_LISPDIR}/${DISTNAME}c

do-build:
	@(cd ${WRKSRC} && ${EMACS_CMD} -batch -q -no-site-file -no-init-file \
		-f batch-byte-compile ${DISTNAME})

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}
	${INSTALL_DATA} ${WRKSRC}/${DISTNAME} \
		${STAGEDIR}${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}
	${INSTALL_DATA} ${WRKSRC}/${DISTNAME}c \
		${STAGEDIR}${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}

.include <bsd.port.mk>
