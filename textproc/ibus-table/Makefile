PORTNAME=	ibus-table
DISTVERSION=	1.17.11
CATEGORIES=	textproc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Table-based input method framework for IBus
WWW=		https://github.com/kaio/ibus-table

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Depends on expired textproc/docbook-utils
EXPIRATION_DATE=2025-06-21

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${PY_FLAVOR} \
		docbook2man:textproc/docbook-utils \
		docbook-sgml>0:textproc/docbook-sgml
LIB_DEPENDS=	libibus-1.0.so:textproc/ibus
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${PY_FLAVOR}

USES=		autoreconf gettext-tools gmake gnome pkgconfig python shebangfix

USE_GITHUB=	yes
GH_ACCOUNT=	kaio

SHEBANG_GLOB=	*.py

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share

GLIB_SCHEMAS=	org.freedesktop.ibus.engine.table.gschema.xml

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

post-patch:
	@${REINPLACE_CMD} -e "s|/usr/share|${PREFIX}/share|g" ${WRKSRC}/engine/*.py

post-install:
	@${RM} -r ${STAGEDIR}${DATADIR}/*/__pycache__

.include <bsd.port.mk>
