PORTNAME=	httpstat
PORTVERSION=	1.3.0
PORTREVISION=	1
CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Curl statistics made simple
WWW=		https://github.com/reorx/httpstat

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	curl:ftp/curl

USES=		python

USE_GITHUB=	yes
GH_ACCOUNT=	reorx

USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
