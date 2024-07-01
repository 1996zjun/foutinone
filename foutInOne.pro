QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    StepOne.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    particlecountermodule.cpp \
    particlecounterparams.cpp \
    particlecountertest.cpp \
    viscomtermodule.cpp \
    viscomterparams.cpp \
    viscomterquery.cpp \
    viscomtertest.cpp

HEADERS += \
    StepOne.h \
    loginwindow.h \
    mainwindow.h \
    particlecountermodule.h \
    particlecounterparams.h \
    particlecountertest.h \
    viscomtermodule.h \
    viscomterparams.h \
    viscomterquery.h \
    viscomtertest.h

FORMS += \
    loginwindow.ui \
    mainwindow.ui \
    particlecounterparams.ui \
    particlecountertest.ui \
    viscomterparams.ui \
    viscomterquery.ui \
    viscomtertest.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
