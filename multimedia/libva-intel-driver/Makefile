PORTNAME=	libva-intel-driver
DISTVERSION=	2.4.1
PORTREVISION=	3
CATEGORIES=	multimedia

PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/
PATCHFILES+=	4206d0e15363.patch:-p1 # https://github.com/intel/intel-vaapi-driver/pull/566

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	VAAPI legacy driver for Intel GMA 4500 (Gen4) to UHD 630 (Gen9.5)
WWW=		https://01.org/linuxmedia

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	only Intel GPUs on x86 are supported
DEPRECATED=	Project discontinued

BUILD_DEPENDS=	libva>=2.4.0:multimedia/libva
LIB_DEPENDS=	libdrm_intel.so:graphics/libdrm \
		libva.so:multimedia/libva

USES=		compiler:c11 meson pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	intel
GH_PROJECT=	intel-vaapi-driver
PLIST_FILES=	lib/dri/i965_drv_video.so

OPTIONS_DEFINE=	HYBRID WAYLAND X11
OPTIONS_DEFAULT=HYBRID WAYLAND X11

HYBRID_DESC=	Hybrid VP8 encoding on Gen7/8 and VP9 decoding on Gen7/8/9
HYBRID_RUN_DEPENDS=	${LOCALBASE}/lib/dri/hybrid_drv_video.so:multimedia/libva-intel-hybrid-driver
HYBRID_MESON_TRUE=	enable_hybrid_codec

WAYLAND_LIB_DEPENDS=	libva-wayland.so:multimedia/libva
WAYLAND_MESON_YES=	with_wayland

X11_LIB_DEPENDS=	libva-x11.so:multimedia/libva
X11_MESON_YES=		with_x11

.include <bsd.port.mk>
