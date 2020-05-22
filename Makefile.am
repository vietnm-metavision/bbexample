AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic -O2
include_HEADERS = bbexample.h
AC_CONFIG_FILES([bbexample.h])
lib_LTLIBRARIES = libCPP.la 
libCPP_la_SOURCES  = CPP.cpp C_call_CPP.cpp
libCPP_la_LDFLAGS= -version-info 1:0:0

bin_PROGRAMS = bbexample
bbexample_SOURCES = main.c
bbexample_LDADD = libCPP.la
