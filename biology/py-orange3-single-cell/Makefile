PORTNAME=	orange3-single-cell
DISTVERSION=	0.8.2
PORTREVISION=	6
CATEGORIES=	biology python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Orange add-on for gene expression of single cell data
WWW=		https://singlecell.biolab.si/

LICENSE=	AGPLv3+

DEPRECATED=	Depends on expired math/py-fastdtw and expiring misc/orange3
EXPIRATION_DATE=2025-06-21

RUN_DEPENDS=	orange3>0:misc/orange3 \
		${PYTHON_PKGNAMEPREFIX}orange3-bioinformatics>0:biology/py-orange3-bioinformatics@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}astropy>0:astro/py-astropy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}fastdtw>0:math/py-fastdtw@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}joblib>=0.11:devel/py-joblib@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}loompy>=2.0.10:biology/py-loompy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}networkx>0:math/py-networkx@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pandas>=0.23:math/py-pandas@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scikit-learn>0:science/py-scikit-learn@${PY_FLAVOR} \
		${PYNUMPY}

# Supports 3.4+ but loompy 3.6+ only.
USES=		python
USE_GITHUB=	yes
GH_ACCOUNT=	biolab
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS

DOCS_BUILD_DEPENDS=	gmake:devel/gmake \
			${PYTHON_PKGNAMEPREFIX}sphinx>=0,1:textproc/py-sphinx@${PY_FLAVOR}

pre-build-DOCS-on:
	@cd ${WRKSRC}/doc && ${SETENV} ${MAKE_ENV} ${GMAKE} html htmlhelp SPHINXBUILD=${LOCALBASE}/bin/sphinx-build-${PYTHON_VER}

pre-build-DOCS-off:
	@${REINPLACE_CMD} "s|^    include_documentation|    #include_documentation|" ${WRKSRC}/setup.py

.include <bsd.port.mk>
