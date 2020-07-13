TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    LULUBaseListener.cpp \
    LULULexer.cpp \
    LULUListener.cpp \
    LULUParser.cpp \
    variable.cpp \
    subroutine.cpp \
    mlululistener.cpp \
    antlrerrorlistenerm.cpp \
    type.cpp

DISTFILES += \
    LULU.interp \
    LULU.tokens \
    LULULexer.interp \
    LULULexer.tokens \
    sample.txt \
    t1.txt \
    t2.txt \
    t3.txt \
    t4.txt \
    t5.txt

HEADERS += \
    LULUBaseListener.h \
    LULULexer.h \
    LULUListener.h \
    LULUParser.h \
    variable.h \
    subroutine.h \
    mlululistener.h \
    antlrerrorlistenerm.h \
    type.h

LIBS+=$$PWD/include/AdsLib-Linux.a\
      $$PWD/include/libantlr4-runtime.a

DISTFILES += \
    $$PWD/include/AdsLib-Linux.a \
    $$PWD/include/libantlr4-runtime.a

INCLUDEPATH += include/antlr4-runtime\
                include/antlr4-runtime/tree\
                include/antlr4-runtime/CommonTokenStream.h\
                include/antlr4-runtime/ANTLRInputStream.h
