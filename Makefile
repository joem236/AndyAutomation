CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g $(shell root-config --cflags)
LDFLAGS=-g $(shell root-config --ldflags)
LDLIBS=$(shell root-config --libs)

SRCS=main.cc
CPPINC=-Iinclude -Isrc
LDDIR=-Lsrc
OBJS=$(subst .cc,.o,$(SRCS))

all: tool

tool: $(OBJS)
    g++ $(LDFLAGS) -o tool $(OBJS) $(LDLIBS) 

tool.o: tool.cc support.hh

support.o: support.hh support.cc

clean:
    $(RM) $(OBJS)

dist-clean: clean
    $(RM) tool
