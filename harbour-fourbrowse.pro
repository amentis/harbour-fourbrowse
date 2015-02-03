# NOTICE:
#
# Application name defined in TARGET has a corresponding QML filename.
# If name defined in TARGET is changed, the following needs to be done
# to match new name:
#   - corresponding QML filename must be changed
#   - desktop icon filename must be changed
#   - desktop filename must be changed
#   - icon definition filename in desktop file must be changed
#   - translation filenames have to be changed

# The name of your application
TARGET = harbour-fourbrowse

CONFIG += sailfishapp

SOURCES += src/harbour-fourbrowse.cpp

OTHER_FILES += qml/harbour-fourbrowse.qml \
    qml/cover/CoverPage.qml \
    rpm/harbour-fourbrowse.changes.in \
    rpm/harbour-fourbrowse.spec \
    rpm/harbour-fourbrowse.yaml \
    translations/*.ts \
    harbour-fourbrowse.desktop \
    qml/pages/MainPage.qml \
    qml/JSONListModel/jsonpath.js \
    qml/JSONListModel/JSONListModel.qml

# to disable building translations every time, comment out the
# following CONFIG line
CONFIG += sailfishapp_i18n
TRANSLATIONS += translations/harbour-fourbrowse-de.ts

