PORTNAME=	e-antic
DISTVERSION=	2.1.0
PORTREVISION=	1
#MASTER_SITES=	https://www.labri.fr/perso/vdelecro/e-antic/
CATEGORIES=	math

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Real Embedded Algebraic Number Theory In C
WWW=		https://flatsurf.github.io/e-antic/

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	dual

BUILD_DEPENDS=	${PY_SETUPTOOLS}
LIB_DEPENDS=	libarb.so:math/arb		\
		libgmp.so:math/gmp		\
		libmpfr.so:math/mpfr		\
		libantic.so:math/antic		\
		libflint.so:math/flint2		\
		libboost_thread.so:devel/boost-libs

USES=		autoreconf compiler:c++11-lang gmake libtool localbase	\
		python

USE_GITHUB=	yes
ANTIC_TAG=	f4e8a60
CATCH_TAG=	62fd660
CEREAL_TAG=	ebef1e9
FLINT_TAG=	ae7ec89
GH_ACCOUNT=	flatsurf catchorg:c1 USCiLab:c2 wbhart:f
GH_PROJECT=	${PORTNAME} antic:a Catch2:c1 cereal:c2 flint2:f
GH_TAGNAME=	${ANTIC_TAG}:a ${CATCH_TAG}:c1 ${CEREAL_TAG}:c2 ${FLINT_TAG}:f
GH_SUBDIR=	libeantic/upstream/antic:a	\
		libeantic/upstream/flint:f	\
		libeantic/test/external/catch2:c1	\
		libeantic/test/external/cereal:c2

LIBS+=		"-lm"
GNU_CONFIGURE=	yes
# pytest requires cppyy, doc requires standardese
CONFIGURE_ARGS=	--without-byexample	\
		--without-benchmark	\
		--without-pytest	\
		--without-doc
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

PLIST_SUB=	VER=${DISTVERSION}

pre-extract:
	${MKDIR} ${WRKDIR}/flint-${FLINT_TAG}
	${LN} -sf ${WRKDIR}/flint-${FLINT_TAG} ${WRKDIR}/flint2-${FLINT_TAG}
	${RMDIR} ${WRKDIR}/flint-${FLINT_TAG}

post-install:
	${REINPLACE_CMD} -e 's|${STAGEDIR}||'	\
		${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/pyeantic/install_files.txt
	${RM} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/pyeantic/install_files.txt.bak
	${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py -d \
		${PYTHONPREFIX_SITELIBDIR} -f ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}
	${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py -d \
		${PYTHONPREFIX_SITELIBDIR} -f ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

.include <bsd.port.mk>
