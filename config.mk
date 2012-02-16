
VERSION = 4.9
PREFIX = /usr/local
BINDIR = ${PREFIX}/bin
MANPREFIX = ${PREFIX}/share/man

INCS =
LIBS =

CFLAGS = -Wall ${INCS} -D_GNU_SOURCE -D_BSD_SOURCE
LDFLAGS = ${LIBS} 

CC = musl-gcc
LDFLAGS = ${LIBS} -static

#CC = gcc
