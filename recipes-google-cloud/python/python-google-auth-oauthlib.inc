DESCRIPTION = "This library provides oauthlib integration with google-auth."
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-auth-library-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-google-auth \
	${PYTHON_PN}-requests-oauthlib \
	${PYTHON_PN}-click \
"

PR = "r0"

SRC_URI = "git://github.com/GoogleCloudPlatform/google-auth-library-python-oauthlib.git"
SRCREV = "e5809d37060767db18fcd03d88b42a1d71335699"

S = "${WORKDIR}/git"
