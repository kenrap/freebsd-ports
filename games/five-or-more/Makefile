PORTNAME=	five-or-more
PORTVERSION=	48.1
CATEGORIES=	games gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Form a line of 5 or more colored balls
WWW=		https://gitlab.gnome.org/GNOME/five-or-more

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	itstool:textproc/itstool
LIB_DEPENDS=	libgnome-games-support-1.so:games/libgnome-games-support \
		libgee-0.8.so:devel/libgee

USES=		gettext gnome meson pkgconfig tar:xz vala:build
USE_GNOME=	cairo gtk30 librsvg2

GLIB_SCHEMAS=	org.gnome.five-or-more.gschema.xml

.include <bsd.port.mk>
