PORTNAME=	qmapshack
PORTVERSION=	1.17.1
DISTVERSIONPREFIX=	V_
PORTREVISION=	6
CATEGORIES=	astro

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Ultimate outdoor aficionado's tool
WWW=		https://github.com/Maproom/qmapshack/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgdal.so:graphics/gdal \
		libproj.so:graphics/proj \
		libquazip1-qt5.so:archivers/quazip@qt5 \
		libroutino.so:astro/routino
RUN_DEPENDS=	${LOCALBASE}/bin/bsdisks:sysutils/bsdisks

USES=		cmake compiler:c++11-lib desktop-file-utils gl jpeg \
		pkgconfig qt:5 xorg
USE_GITHUB=	yes
USE_GL=		gl
USE_QT=		buildtools core dbus declarative gui help linguisttools location network \
		printsupport qmake sql sql-sqlite3 uitools \
		webchannel webengine widgets xml

GH_ACCOUNT=	Maproom

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
