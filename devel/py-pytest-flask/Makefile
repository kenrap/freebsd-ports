PORTNAME=	pytest-flask
DISTVERSION=	1.3.0
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	meka@tilda.center
COMMENT=	Set of py.test fixtures to test Flask applications
WWW=		https://github.com/pytest-dev/pytest-flask

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools-scm>0:devel/py-setuptools-scm@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flask>=0:www/py-flask@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}werkzeug>=0.7:www/py-werkzeug@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest>=3.6:devel/py-pytest@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

TEST_ENV=	PYTHONPATH=${WRKSRC}/src

NO_ARCH=	yes

do-test:
	cd ${WRKSRC} && ${SETENV} ${TEST_ENV} ${PYTHON_CMD} -m pytest -v -rs -o addopts=

.include <bsd.port.mk>
