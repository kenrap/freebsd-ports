PORTNAME=	1password-client2-beta
DISTVERSION=	2.31.1-beta.01
CATEGORIES=	security
MASTER_SITES=	https://cache.agilebits.com/dist/1P/op2/pkg/v${DISTVERSION}/

MAINTAINER=	ler@FreeBSD.org
COMMENT=	1Password CLI client (BETA)
WWW=		https://developer.1password.com/docs/cli/upgrade

ONLY_FOR_ARCHS=	aarch64 amd64 armv6 armv7 i386

USES=		zip

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

PLIST_FILES=		bin/op
CONFLICTS_INSTALL=	security/1password-client security/op security/1password-client2

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/op \
		${STAGEDIR}${PREFIX}/bin

.include <bsd.port.pre.mk>

.if ${ARCH} == amd64
DISTNAME=	op_freebsd_amd64_v${DISTVERSION}
.elif ${ARCH} == armv6 || ${ARCH} == armv7
DISTNAME=	op_freebsd_arm_v${DISTVERSION}
.elif ${ARCH} == aarch64
DISTNAME=	op_freebsd_arm64_v${DISTVERSION}
.elif ${ARCH} == i386
DISTNAME=	op_freebsd_386_v${DISTVERSION}
.endif

.if ${.TARGETS} == "makesum"
DISTFILES=	op_freebsd_386_v${DISTVERSION}${EXTRACT_SUFX} \
		op_freebsd_amd64_v${DISTVERSION}${EXTRACT_SUFX} \
		op_freebsd_arm64_v${DISTVERSION}${EXTRACT_SUFX} \
		op_freebsd_arm_v${DISTVERSION}${EXTRACT_SUFX}
.endif

.include <bsd.port.post.mk>
