QT += core network widgets
QT -= gui

CONFIG += c++11

TARGET = ulsTestMeter
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    sender.cpp

HEADERS += \
    sender.h
