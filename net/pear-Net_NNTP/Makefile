PORTNAME=	Net_NNTP
PORTVERSION=	1.5.2
PORTEPOCH=	1
CATEGORIES=	net news pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR implementation of the NNTP protocol
WWW=		https://pear.php.net/package/Net_NNTP

LICENSE=	W3C
LICENSE_NAME=	W3C IPR SOFTWARE NOTICE
LICENSE_FILE=	${WRKSRC}/LICENSE.md
LICENSE_PERMS=	auto-accept dist-mirror dist-sell pkg-mirror pkg-sell

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:net/pear-Net_Socket@${PHP_FLAVOR}

NO_ARCH=	yes

USES=		pear

.include <bsd.port.mk>
