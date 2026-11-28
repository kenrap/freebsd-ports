PORTNAME=	sigu
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.0.3
CATEGORIES=	sysutils

MAINTAINER=	josephvenable@verizon.net
COMMENT=	The System Information Graphical Utility
WWW=		https://github.com/samuelvenable/sigu

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	filedialogs:devel/sdl3-imgui-filedialogs

USES=		cmake gl pkgconfig sdl xorg

USE_GITHUB=	yes
GH_ACCOUNT=	samuelvenable
GH_TUPLE=	samuelvenable:SDL3-ImGui-FileDialogs:eac5d80:sdl3imguifiledialogs/libfiledialogs

USE_GL=		gl
USE_SDL=	sdl3
USE_XORG=	x11

CMAKE_ARGS=	-DIFD_USE_CATALOG_PACKAGES=OFF

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
