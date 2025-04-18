PORTNAME=	xmltooling
PORTVERSION=	3.3.0
CATEGORIES=	devel security
MASTER_SITES=	http://shibboleth.net/downloads/c++-opensaml/latest/

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	Low level XML support for SAML
WWW=		https://wiki.shibboleth.net/confluence/display/OpenSAML/XMLTooling-C

LICENSE=	APACHE20

BUILD_DEPENDS=	boost-libs>=0:devel/boost-libs
LIB_DEPENDS=	libcurl.so:ftp/curl \
		liblog4shib.so:devel/log4shib \
		libxml-security-c.so:security/apache-xml-security-c

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--disable-dependency-tracking --disable-doxygen-doc --with-xmlsec
USES=		cpe gmake libtool pkgconfig tar:bzip2 ssl autoreconf
CPE_VENDOR=	${PORTNAME}_project
USE_LDCONFIG=	yes
CONFIGURE_ENV+=	openssl_LIBS="-L${OPENSSLLIB} -lcrypto"  openssl_CFLAGS=-I${OPENSSLBASE}
USE_CXXSTD=	c++14

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's,^pkgdocdir.*=.*,pkgdocdir = ${DOCSDIR},' \
		${WRKSRC}/doc/Makefile.am

post-patch-DOCS-off:
	@${REINPLACE_CMD} -e '/^SUBDIRS/s,doc ,,' ${WRKSRC}/Makefile.am

.include <bsd.port.mk>
