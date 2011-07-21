#	$OpenBSD: Makefile,v 1.27 2009/03/03 20:01:01 millert Exp $

include config.mk

BIN=	ksh
SRC=	alloc.c c_ksh.c c_sh.c c_test.c c_ulimit.c edit.c emacs.c \
	eval.c exec.c expr.c history.c io.c jobs.c lex.c mail.c \
	main.c misc.c path.c shf.c syn.c table.c trap.c \
	tree.c tty.c var.c version.c vi.c
OBJ=	${SRC:.c=.o}
CLEANFILES+=	emacs.out

all: ${BIN}

${BIN}: ${OBJ}
	${CC} -o $@ ${OBJ} ${LDFLAGS}

${OBJ}: config.mk sh.h

%.o: %.c
	${CC} ${CFLAGS} -c -o $@ $<

.depend emacs.o: emacs.out

emacs.out: emacs.c
	/bin/sh emacs-gen.sh emacs.c > emacs.out

check test:
	/usr/bin/perl tests/th -s tests -p ./ksh -C \
	    pdksh,sh,ksh,posix,posix-upu

clean:
	rm -f ${OBJ} ${BIN} ${CLEANFILES}

install: all
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f ${BIN} ${DESTDIR}${PREFIX}/bin
	ln -sf ksh ${DESTDIR}${PREFIX}/bin/sh
	ln -sf ksh ${DESTDIR}${PREFIX}/bin/rksh
	chmod 755 ${DESTDIR}${PREFIX}/bin/${BIN}
	mkdir -p ${DESTDIR}${MANPREFIX}/man1
	cp -f ksh.1 ${DISTDIR}${MANPREFIX}/man1
	cp -f sh.1 ${DISTDIR}${MANPREFIX}/man1
	chmod 644 ${DESTDIR}${MANPREFIX}/man1/ksh.1
	chmod 644 ${DESTDIR}${MANPREFIX}/man1/sh.1
	ln -sf ksh.1 ${DESTDIR}${MANPREFIX}/man1/rksh.1

uninstall:
	rm -f ${DESTDIR}${PREFIX}/bin/ksh
	rm -f ${DESTDIR}${PREFIX}/bin/sh
	rm -f ${DESTDIR}${PREFIX}/bin/rksh
	rm -f ${DESTDIR}${MANPREFIX}/man1/ksh.1
	rm -f ${DESTDIR}${MANPREFIX}/man1/sh.1
	rm -f ${DESTDIR}${MANPREFIX}/man1/rksh.1
