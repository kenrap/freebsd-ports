PORTNAME=	freedink-dfarc
PORTVERSION=	3.14
PORTREVISION=	5
CATEGORIES=	games
MASTER_SITES=	GNU/freedink
DISTNAME=	dfarc-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Frontend and .dmod installer for GNU FreeDink

USES=		compiler:c++11-lib desktop-file-utils gettext gmake gnome \
		shared-mime-info
USE_CXXSTD=	c++11
USE_WX=		3.0
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
USE_GNOME=	intltool
CONFIGURE_ARGS=	--with-wx-config=${WX_CONFIG} --disable-upx --disable-static
CONFIGURE_ENV+=	ac_cv_path_XDG_DESKTOP_MENU= ac_cv_path_XDG_ICON_RESOURCE= \
		ac_cv_path_XDG_MIME=

.include <bsd.port.mk>
