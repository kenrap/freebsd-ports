PORTNAME=	keras-applications
DISTVERSION=	1.0.8
PORTREVISION=	2
CATEGORIES=	math python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Reference implementations of popular deep learning models
WWW=		https://github.com/keras-team/keras-applications

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}h5py>=0:science/py-h5py@${PY_FLAVOR}

USES=		python
USE_GITHUB=	yes
GH_ACCOUNT=	keras-team
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
