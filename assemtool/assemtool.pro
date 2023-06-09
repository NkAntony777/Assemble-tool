QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    English.cpp \
    Littletool.cpp \
    Physics.cpp \
    fish.cpp \
    main.cpp \
    ast.cpp \
    secondwidgetebook.cpp

HEADERS += \
    English.h \
    Littletool.h \
    Physics.h \
    ast.h \
    fish.h \
    secondwidgetebook.h

FORMS += \
    English.ui \
    Littletool.ui \
    Physics.ui \
    ast.ui \
    fish.ui \
    secondwidgetebook.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    C:/Users/Anthony/Pictures/pexel/Englishnew.jpg \
    C:/Users/Anthony/Pictures/pexel/Main.jpg
