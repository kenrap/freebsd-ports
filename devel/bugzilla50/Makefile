PORTNAME=	bugzilla
PORTVERSION=	5.0.4.1
CATEGORIES=	devel
MASTER_SITES=	MOZILLA/webtools/bugzilla/5.0-branch

MAINTAINER=	bz-ports@FreeBSD.org
COMMENT=	Bug-tracking system developed by Mozilla Project
WWW=		https://www.bugzilla.org/

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

# see Bugzilla/Install/Requirements.pm
# FreeBSD PR 194782: silence Module::Pluggable deprecated warnings
# FreeBSD PR 196060,196100: explicitly depend on textproc/p5-Text-Tabv
RUN_DEPENDS=	\
		p5-CGI>=3.51:www/p5-CGI \
		p5-Class-XSAccessor>0:devel/p5-Class-XSAccessor \
		p5-DBI>=1.614:databases/p5-DBI \
		p5-DateTime-TimeZone>=1.64:devel/p5-DateTime-TimeZone \
		p5-DateTime>=0.75:devel/p5-DateTime \
		p5-Digest-SHA>=0:security/p5-Digest-SHA \
		p5-Email-MIME>=1.904:mail/p5-Email-MIME \
		p5-Email-Sender>=1.300011:mail/p5-Email-Sender \
		p5-Encode-Detect>=0:converters/p5-Encode-Detect \
		p5-JSON-XS>=2.01:converters/p5-JSON-XS \
		p5-List-MoreUtils>=0.32:lang/p5-List-MoreUtils \
		p5-Math-Random-ISAAC>=1.001:math/p5-Math-Random-ISAAC \
		p5-Module-Pluggable>=5.1:devel/p5-Module-Pluggable \
		p5-Template-Toolkit>=3.008:www/p5-Template-Toolkit \
		p5-Text-Tabs+Wrap>=2013.0523:textproc/p5-Text-Tabs+Wrap \
		p5-TimeDate>=2.23:devel/p5-TimeDate \
		p5-URI>=1.55:net/p5-URI

USES=		cpe perl5
USE_PERL5=	run

CPE_VENDOR=	mozilla

SUB_FILES=	pkg-message

DATA_DIRS_LIST=	images js skins

# checksetup will fail if these directories are not present!
EMPTY_DIRS_LIST=data graphs contrib lib t xt

.include "${.CURDIR}/Makefile.common"
.include "${.CURDIR}/Makefile.options"

MODPERL_USES=		apache:run
MYSQL_USES=		mysql
MYSQL_RUN_DEPENDS=	${DBD_MYSQL}
PGSQL_USES=		pgsql:11+
PGSQL_RUN_DEPENDS=	p5-DBD-Pg>=3.4.2:databases/p5-DBD-Pg
SQLITE_USES=		sqlite
SQLITE_RUN_DEPENDS=	p5-DBD-SQLite>=1.29:databases/p5-DBD-SQLite \
			sqlite3>=3:databases/sqlite3
GRAPH_REPORTS_RUN_DEPENDS=	p5-GD>=1.20:graphics/p5-GD \
				p5-GD-Graph>=0:graphics/p5-GD-Graph \
				p5-GD-TextUtil>=0:graphics/p5-GD-TextUtil \
				p5-Template-GD>=0:www/p5-Template-GD
CHARTING_MODULES_RUN_DEPENDS=	p5-Chart>=2.4.10:graphics/p5-Chart
PATCH_VIEWER_RUN_DEPENDS=	p5-PatchReader>=0.9.6:devel/p5-PatchReader \
				interdiff:misc/patchutils
MORE_HTML_RUN_DEPENDS=	p5-HTML-Parser>=3.67:www/p5-HTML-Parser \
			p5-HTML-Scrubber>=0:www/p5-HTML-Scrubber
INBOUND_EMAIL_RUN_DEPENDS=	p5-Email-MIME-Attachment-Stripper>=0:mail/p5-Email-MIME-Attachment-Stripper \
				p5-Email-Reply>=0:mail/p5-Email-Reply \
				p5-HTML-FormatText-WithLinks>=0.13:textproc/p5-HTML-FormatText-WithLinks
MAIL_QUEUEING_RUN_DEPENDS=	p5-TheSchwartz>=1.10:devel/p5-TheSchwartz \
				p5-Daemon-Generic>=0:net/p5-Daemon-Generic
MOVE_BUGZ_RUN_DEPENDS=	p5-MIME-Tools>=5.406:mail/p5-MIME-Tools \
			p5-XML-Twig>=0:textproc/p5-XML-Twig
BMP2PNG_USES=		magick:6,run
# Note: XML-RPC and JSON-RPC are deprecated in favor of REST
# and will likely be removed in the Bugzilla 7.0 release.
# XXX SOAP::Lite can be removed if upstream officially depends on
# XMLRPC::Lite>=0.717, see Bugzilla/Install/Requirements.pm
XMLRPC_RUN_DEPENDS=	p5-Test-Taint>=1.06:devel/p5-Test-Taint \
			p5-XMLRPC-Lite>=0.712:net/p5-XMLRPC-Lite \
			p5-SOAP-Lite>=0.712:net/p5-SOAP-Lite
JSONRPC_RUN_DEPENDS=	p5-Test-Taint>=1.06:devel/p5-Test-Taint \
			p5-JSON-RPC>=0:devel/p5-JSON-RPC
REST_RUN_DEPENDS=	p5-Test-Taint>=1.06:devel/p5-Test-Taint \
			p5-JSON-RPC>=0:devel/p5-JSON-RPC
MODPERL_BROKEN=		${PORTVERSION} now requires Apache::SizeLimit, which \
			has not yet been ported to FreeBSD
MODPERL_RUN_DEPENDS=	${APACHE_PKGNAMEPREFIX}mod_perl2>=0:www/mod_perl2 \
			p5-Apache-DBI>=0:www/p5-Apache-DBI
GRAPHVIZ_RUN_DEPENDS=	dot:graphics/graphviz
EXPORT_IMPORT_RUN_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser \
				p5-XML-Twig>=0:textproc/p5-XML-Twig
LDAP_RUN_DEPENDS=	p5-perl-ldap>=0:net/p5-perl-ldap
RADIUS_RUN_DEPENDS=	p5-Authen-Radius>=0:security/p5-Authen-Radius
SMTP_AUTH_BROKEN=	${PORTVERSION} now requires Net::SMTP, which \
			has not yet been ported to FreeBSD
SMTP_AUTH_RUN_DEPENDS=	p5-Authen-SASL>=2.16:security/p5-Authen-SASL
MIME_SNIFF_RUN_DEPENDS=	p5-File-MimeInfo>=0.16:devel/p5-File-MimeInfo \
			p5-IO-Stringy>=2.110:devel/p5-IO-Stringy
MEMCACHED_RUN_DEPENDS=	p5-Cache-Memcached>=1.30:databases/p5-Cache-Memcached

.include <bsd.port.options.mk>

post-extract:
# The docs_urlbase parameter has been removed. If documentation has not been
# compiled locally, the "Help" links and other documentation links will
# redirect to bugzilla.readthedocs.org automatically.
	${RM} -r ${WRKSRC}/docs
	${RM} -r ${WRKSRC}/.git
	${RM} ${WRKSRC}/.bzrignore ${WRKSRC}/.gitignore ${WRKSRC}/.gitrev \
		${WRKSRC}/.travis.yml ${WRKSRC}/Build.PL ${WRKSRC}/MANIFEST.SKIP

post-patch:
	${REINPLACE_CMD} -e 's/apache/www/' ${WRKSRC}/Bugzilla/Install/Localconfig.pm
	${REINPLACE_CMD} -e 's|/opt/bugzilla|${WWWDIR}|' ${WRKSRC}/importxml.pl
	${FIND} ${WRKSRC} -type f \( -name \*.cgi -o -name \*.pl -o -name \*.pm -o -name \*.t \) \
		-exec ${SED} -i '' -e "s=/usr/bin/perl=${PERL}=g; \
			s!/usr/lib/sendmail!/usr/sbin/sendmail!g;" {} \+

.if ${PORT_OPTIONS:MPGSQL} && ! ${PORT_OPTIONS:MMYSQL}
	${REINPLACE_CMD} -e "s/'mysql'/'Pg'/" ${WRKSRC}/Bugzilla/Install/Localconfig.pm
.endif

pre-install:
	${FIND} ${WRKSRC} -type f \( -name "*.orig" -or -name "*.bak" \) -delete

do-install:	.SILENT
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	${FIND} ${WRKSRC} \! -type d -maxdepth 1 \! -name "UPGRADING*" -exec \
		${INSTALL_SCRIPT} {} ${STAGEDIR}${WWWDIR} \;
	@${MKDIR} ${DATA_DIRS_LIST:S!^!${STAGEDIR}${WWWDIR}/!}
.for D in ${DATA_DIRS_LIST}
	(cd ${WRKSRC}/${D} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}/${D})
.endfor
	${TAR} -C ${WRKSRC} -cf - Bugzilla template | ${TAR} --unlink -C ${STAGEDIR}${WWWDIR} -xf -
	@${MKDIR} ${EMPTY_DIRS_LIST:S!^!${STAGEDIR}${WWWDIR}/!}

do-install-CONTRIB-on:
	@${MKDIR} ${STAGEDIR}${WWWDIR}/contrib
	(cd ${WRKSRC}/contrib && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}/contrib)

do-install-MOREBUGURL-on:
	@${MKDIR} ${STAGEDIR}${WWWDIR}/extensions/MoreBugUrl
	(cd ${WRKSRC}/extensions/MoreBugUrl && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}/extensions/MoreBugUrl)

do-install-VOTING-on:
	@${MKDIR} ${STAGEDIR}${WWWDIR}/extensions/Voting
	(cd ${WRKSRC}/extensions/Voting && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}/extensions/Voting)

.include <bsd.port.mk>
