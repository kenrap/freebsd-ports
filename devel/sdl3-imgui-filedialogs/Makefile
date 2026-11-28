PORTNAME=	sdl3-imgui-filedialogs
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.0.3
CATEGORIES=	devel

MAINTAINER=	josephvenable@verizon.net
COMMENT=	SDL3 ImGui File Dialogs Library
WWW=		https://github.com/samuelvenable/SDL3-ImGui-FileDialogs

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig

USES=		cmake compiler:c++20-lang pkgconfig sdl xorg

USE_GITHUB=	yes
GH_ACCOUNT=	samuelvenable
GH_PROJECT=	SDL3-ImGui-FileDialogs

USE_SDL=	sdl3
USE_XORG=	x11

post-install:
	${RM} ${STAGEDIR}${PREFIX}/include/*.hpp

.include <bsd.port.mk>
