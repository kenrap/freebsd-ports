PORTNAME=	pathos
PORTVERSION=	0.3.4
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Parallel graph management and execution in heterogeneous computing
WWW=		https://pathos.readthedocs.io/en/latest/ \
		https://github.com/uqfoundation/pathos

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=42:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dill>=0.3.9:devel/py-dill@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}multiprocess>=0.70.17:devel/py-multiprocess@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pox>=0.3.6:devel/py-pox@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ppft>=1.7.7:devel/py-ppft@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

.include <bsd.port.mk>
