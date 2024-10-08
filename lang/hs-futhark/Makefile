PORTNAME=	futhark
DISTVERSIONPREFIX=	v
DISTVERSION=	0.25.22
CATEGORIES=	lang haskell

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Data-parallel functional programming language
WWW=		https://futhark-lang.org/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cabal

USE_CABAL=	Diff-0.5_1 \
		ListLike-4.7.8.2 \
		OneTuple-0.4.2 \
		QuickCheck-2.15.0.1 \
		StateVar-1.2.2 \
		adjunctions-4.4.2_2 \
		aeson-2.2.3.0_2 \
		alex-3.5.1.0 \
		ansi-terminal-1.1.1 \
		ansi-terminal-types-1.1 \
		assoc-1.1.1 \
		async-2.2.5_2 \
		attoparsec-0.14.4_5 \
		base-compat-0.14.0 \
		base-orphans-0.9.2 \
		base16-bytestring-1.0.2.0_1 \
		bifunctors-5.6.2 \
		bitvec-1.1.5.0_1 \
		blaze-builder-0.4.2.3 \
		blaze-html-0.9.2.0_1 \
		blaze-markup-0.8.3.0_2 \
		bmp-1.2.6.4 \
		boring-0.2.2 \
		bytestring-to-vector-0.3.0.1 \
		call-stack-0.4.0 \
		case-insensitive-1.2.1.0 \
		character-ps-0.1 \
		clock-0.8.4 \
		cmark-gfm-0.2.6_1 \
		co-log-core-0.3.2.2 \
		colour-2.3.6 \
		comonad-5.0.8_2 \
		constraints-0.14.2_1 \
		contravariant-1.5.5 \
		cryptohash-md5-0.11.101.0_5 \
		data-default-0.7.1.1 \
		data-default-class-0.1.2.0 \
		data-default-instances-containers-0.0.1 \
		data-default-instances-dlist-0.0.1 \
		data-default-instances-old-locale-0.0.1 \
		data-fix-0.3.4 \
		dense-linear-algebra-0.1.0.0 \
		directory-tree-0.12.1 \
		distributive-0.6.2.1_1 \
		dlist-1.0_2 \
		dotgen-0.4.3 \
		exception-mtl-0.4.0.2 \
		exception-transformers-0.4.0.12 \
		extra-1.7.16 \
		fail-4.9.0.0 \
		fgl-5.8.2.0 \
		fgl-visualize-0.1.0.1 \
		file-embed-0.0.16.0 \
		fmlist-0.9.4 \
		free-5.2_5 \
		futhark-data-1.1.0.1 \
		futhark-manifest-1.5.0.0 \
		futhark-server-1.2.2.1 \
		generic-arbitrary-1.0.1 \
		generic-deriving-1.14.5_3 \
		generic-lens-2.2.2.0_1 \
		generic-lens-core-2.2.1.0_2 \
		generically-0.1.1_3 \
		githash-0.1.7.0 \
		half-0.3.1_2 \
		happy-1.20.1.1 \
		hashable-1.4.7.0 \
		haskell-src-exts-1.23.1 \
		haskell-src-meta-0.8.14 \
		hsc2hs-0.68.10_2 \
		indexed-profunctors-0.1.1.1 \
		indexed-traversable-0.1.4 \
		indexed-traversable-instances-0.1.2 \
		integer-conversion-0.1.1 \
		integer-logarithms-1.0.3.1_6 \
		invariant-0.6.3 \
		kan-extensions-5.2.6 \
		language-c-quote-0.13.0.2 \
		lens-5.3.2_2 \
		lens-aeson-1.2.3_2 \
		lsp-2.7.0.0 \
		lsp-types-2.3.0.0 \
		mainland-pretty-0.7.1.1 \
		math-functions-0.3.4.4 \
		megaparsec-9.6.1 \
		mod-0.2.0.1 \
		mwc-random-0.15.1.0 \
		neat-interpolation-0.5.1.4 \
		network-uri-2.6.4.2_1 \
		old-locale-1.0.0.7_2 \
		old-time-1.1.0.4 \
		os-string-2.0.6 \
		parallel-3.2.2.0_8 \
		parser-combinators-1.3.0_1 \
		prettyprinter-1.7.1 \
		prettyprinter-ansi-terminal-1.1.3 \
		primitive-0.9.0.0_1 \
		process-extras-0.7.4_1 \
		profunctors-5.6.2_3 \
		quickcheck-instances-0.3.31_2 \
		random-1.2.1.2 \
		reflection-2.1.8 \
		regex-1.1.0.2 \
		regex-base-0.94.0.2_4 \
		regex-pcre-builtin-0.95.2.3.8.44_6 \
		regex-tdfa-1.3.2.2_3 \
		row-types-1.0.1.2_1 \
		safe-0.3.21_1 \
		safe-exceptions-0.1.7.4_1 \
		scientific-0.3.8.0_1 \
		semialign-1.3.1_1 \
		semigroupoids-6.0.1_1 \
		semigroups-0.20 \
		semirings-0.7 \
		some-1.0.6_1 \
		sorted-list-0.2.2.0 \
		splitmix-0.1.0.5_1 \
		srcloc-0.6.0.1 \
		statistics-0.16.2.1 \
		strict-0.5.1_1 \
		syb-0.7.2.4 \
		tagged-0.8.8_1 \
		temporary-1.3 \
		terminal-size-0.3.4_1 \
		text-iso8601-0.1.1_1 \
		text-rope-0.2 \
		text-short-0.1.6_2 \
		th-abstraction-0.7.0.0 \
		th-compat-0.1.5_2 \
		th-expand-syns-0.4.11.0_4 \
		th-lift-0.8.4_2 \
		th-orphans-0.13.14_3 \
		th-reify-many-0.1.10 \
		these-1.2.1_1 \
		time-compat-1.9.7_2 \
		time-locale-compat-0.1.1.5 \
		transformers-base-0.4.6 \
		transformers-compat-0.7.2 \
		unliftio-0.2.25.0 \
		unliftio-core-0.2.1.0_4 \
		unordered-containers-0.2.20_3 \
		utf8-string-1.0.2 \
		uuid-types-1.0.6_1 \
		vector-0.13.1.0_1 \
		vector-algorithms-0.9.0.2_1 \
		vector-binary-instances-0.2.5.2_5 \
		vector-stream-0.1.0.1_1 \
		vector-th-unbox-0.2.2_6 \
		versions-6.0.7 \
		void-0.7.3 \
		witherable-0.5_1 \
		zlib-0.7.1.0_1

CABAL_PROJECT=	remove

USE_GITHUB=	yes
GH_ACCOUNT=	diku-dk

.include <bsd.port.mk>
