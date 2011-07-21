
VERSION = 4.9
PREFIX = /home/robert
BINDIR = ${PREFIX}/bin
MANPREFIX = ${PREFIX}/share/man


INCS =
LIBS =

CFLAGS = -Wall ${INCS} -D_GNU_SOURCE -D_BSD_SOURCE
LDFLAGS = ${LIBS} 

CC = musl-gcc
LDFLAGS = ${LIBS} -static

# this option for native musl only, not glibc (strlcpy/strlcat not bundled)
#CC = gcc
