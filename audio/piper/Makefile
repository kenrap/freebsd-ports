PORTNAME=	piper
DISTVERSION=	1.4.0g20250831
CATEGORIES=	audio

MAINTAINER=	kenrap@kennethraplee.com
COMMENT=	Fast, local text to speech system
WWW=		https://rhasspy.github.io/piper-samples/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scikit-build>0:devel/py-scikit-build@${PY_FLAVOR}

LIB_DEPENDS=	libespeak-ng.so:audio/espeak-ng \
		libonnxruntime.so:misc/onnxruntime

USES=		cmake compiler:c++17-lang localbase pkgconfig python tar:xz
USE_PYTHON=	pep517

USE_GITHUB=	yes
GH_ACCOUNT=	OHF-Voice
GH_PROJECT=	piper1-gpl
GH_TAGNAME=	8fe1fcd46d81e184e8c080c1537f067846efb353

PLIST_FILES=	bin/piper

.include <bsd.port.mk>
