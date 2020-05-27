AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic -O2

AM_LDFLAGS = pkg-config --libs opencv

include_HEADERS =  C_call_CPP.h 

lib_LTLIBRARIES = libCPP.la 
libCPP_la_SOURCES  = CPP.cpp C_call_CPP.cpp
libCPP_la_LDFLAGS= -version-info 1:0:0

bin_PROGRAMS = bbexample
bbexample_SOURCES = main.cpp
bbexample_LDADD = libCPP.la 
