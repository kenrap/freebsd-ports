PORTNAME=	Crypt-RHash
PORTVERSION=	1.05
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Compute hash sums and magnet links
WWW=		https://metacpan.org/release/Crypt-RHash

LICENSE=	BSD0CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_mips64=	Fails to build: error Cannot detect CPU architechture

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/Rhash/Rhash.so

.include <bsd.port.mk>
