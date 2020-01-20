TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        validator.cpp \
        variant.cpp

HEADERS += \
    CommonUtils.h \
    validator.h \
    variant.h

DEFINES += DEBUG
