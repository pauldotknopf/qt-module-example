TARGET = Mod
QT -= core gui

HEADERS += \
    modtest.h \
    modtestprivate_p.h \
    modglobal.h

SOURCES += \
    modtest.cpp \
    modtestprivate_p.cpp

load(qt_module)

# This is needed if you have no tests (tests/).
# CONFIG -= create_cmake
