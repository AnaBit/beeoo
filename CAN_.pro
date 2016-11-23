TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    src/md_can.cpp

HEADERS += \
    include/md_can.hpp
