NULL_DEVICE = /dev/null

# Need to call git with manually specified paths to repository
BASE_GIT_COMMAND = git --git-dir $$PWD/../.git --work-tree $$PWD/..
GIT_VERSION = $$system($$BASE_GIT_COMMAND describe --tags 2> $$NULL_DEVICE)
GIT_DATE = $$system($$BASE_GIT_COMMAND show --no-patch --no-notes --pretty='%cd' HEAD --date=iso-strict 2> $$NULL_DEVICE)
BUILD_DATE = $$system( date +%Y-%m-%dT%H:%M:%S%z )

DEFINES += GIT_VERSION=\\\"$$GIT_VERSION\\\"
DEFINES += GIT_DATE=\\\"$$GIT_DATE\\\"
DEFINES += BUILD_DATE=\\\"$$BUILD_DATE\\\"
