PORTNAME=	Elixir
PORTVERSION=	0.7.1
PORTREVISION=	4
CATEGORIES=	databases python
MASTER_SITES=	PYPI \
		http://nivi.interfree.it/distfiles/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Declarative Mapper for SQLAlchemy
WWW=		http://elixir.ematia.de/

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlalchemy10>=0.4.0:databases/py-sqlalchemy10@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
