TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    lulu_listener.cpp \
    FinalParser.cpp \
    FinalListener.cpp \
    FinalLexer.cpp \
    FinalBaseListener.cpp \
    LULUBaseListener.cpp \
    LULULexer.cpp \
    LULUListener.cpp \
    LULUParser.cpp \
    variable.cpp \
    subroutine.cpp

DISTFILES += \
    FinalLexer.tokens \
    FinalLexer.interp \
    Final.tokens \
    Final.interp \
    LULU.interp \
    LULU.tokens \
    LULULexer.interp \
    LULULexer.tokens

HEADERS += \
    FinalListener.h \
    FinalLexer.h \
    FinalBaseListener.h \
    LULUBaseListener.h \
    LULULexer.h \
    LULUListener.h \
    LULUParser.h \
    variable.h \
    subroutine.h

LIBS+=$$PWD/include/AdsLib-Linux.a\
      $$PWD/include/libantlr4-runtime.a

DISTFILES += \
    $$PWD/include/AdsLib-Linux.a \
    $$PWD/include/libantlr4-runtime.a

INCLUDEPATH += include/antlr4-runtime\
                include/antlr4-runtime/tree\
                include/antlr4-runtime/CommonTokenStream.h\
                include/antlr4-runtime/ANTLRInputStream.h
