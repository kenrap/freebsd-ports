PORTNAME=	tailwindcss-rails
PORTVERSION=	1.0.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails71

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Integrate Tailwind CSS with the asset pipeline in Rails
WWW=		https://github.com/rails/tailwindcss-rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-railties71>=6.0.0:www/rubygem-railties71

USES=		gem

NO_ARCH=	yes

# tailwindcss-rails 2.x uses pre-built Tailwind CSS CLI
PORTSCOUT=	limit:^1\.

.include <bsd.port.mk>
