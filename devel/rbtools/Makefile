PORTNAME=	${ORIGNAME:tl}
DISTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	http://downloads.reviewboard.org/releases/${ORIGNAME}/${DISTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${ORIGNAME}-${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Set of client tools to use with Review Board
WWW=		https://www.reviewboard.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}colorama>0:devel/py-colorama@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.8.0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}texttable>0:textproc/py-texttable@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tqdm>0:misc/py-tqdm@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

ORIGNAME=	RBTools

.include <bsd.port.mk>
