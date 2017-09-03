TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

CONFIG += c++11
LIBS += -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

HEADERS += \
    libs/sortview.h \
    libs/player.h \
    libs/csortview.h

SOURCES += \
    main.cpp
