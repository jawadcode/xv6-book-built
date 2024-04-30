#
# A BSD-compatible install command.
#
INSTALL=/usr/ucb/install

#
# Packaging prefix.
#
PREFIX=/usr

#
# Where to place binaries.
#
BINDIR=$(PREFIX)/ucb

#
# Where to place libraries.
#
LIBDIR=$(PREFIX)/ucblib

#
# Where to place ASCII charts and the like.
#
PUBDIR=$(PREFIX)/pub

#
# Where to place manual pages.
#
MANDIR=$(PREFIX)/share/man/5man

#
# Where to place the troff macro packages.
#
MACDIR=$(LIBDIR)/doctools/tmac

#
# Where to place the troff font files.
#
FNTDIR=$(LIBDIR)/doctools/font

#
# Where to place PostScript helper files.
#
PSTDIR=$(FNTDIR)/devpost/postscript

#
# Where to place the nroff terminal description files.
#
TABDIR=$(LIBDIR)/doctools/nterm

#
# Where to place troff hyphenation files.
#
HYPDIR=$(LIBDIR)/doctools/hyphen

#
# Where to place files belonging to the "refer" utility.
#
REFDIR=$(LIBDIR)/reftools

#
# Define this if you want troff and nroff to be able to process
# locale-specific (8-bit) characters. It requires appropriate support
# from the C library, so it does not work e.g. with diet libc.
#
EUC=-DEUC

#
# Binaries are stripped with this command after installation.
#
STRIP=strip -s -R .comment -R .note

#
# The C compiler.
#
CC=cc

#
# The C++ compiler.
#
CCC=c++

#
# Compiler flags.
#
CFLAGS=-O

#
# C preprocessor flags.
#
# Use -D_GNU_SOURCE for Linux with GNU libc.
# Use -D_INCLUDE__STDC_A1_SOURCE for HP-UX.
#
CPPFLAGS=-D_GNU_SOURCE

#
# Warning flags for the compiler.
#
#WARN=

#
# Linker flags.
#
LDFLAGS=

#
# Additional libraries to link with.
#
LIBS=

#
# A Bourne-compatible shell.
#
SHELL=/bin/sh

#
# Run ranlib if it is in the current path. This should take care
# of most situations. On Mac OS X, you need to uncomment "ranlib -c".
#
RANLIB=(hash ranlib) >/dev/null 2>&1 || exit 0; ranlib
#RANLIB=ranlib -c
VPATH=..
OBJ = diacrit.o e.o eqnbox.o font.o fromto.o funny.o glob.o integral.o \
	io.o lex.o lookup.o mark.o matrix.o move.o over.o paren.o pile.o \
	shift.o size.o sqrt.o text.o version.o

FLAGS = -I. -I..

.c.o:
	$(CC) $(CFLAGS) $(WARN) $(CPPFLAGS) $(FLAGS) -c $<

all: eqn

eqn: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) $(LIBS) -o eqn

e.c: e.y
	$(YACC) -d ../e.y
	sed -f ../yyval.sed <y.tab.c >$@
	rm y.tab.c
	mv -f y.tab.h e.def

e.def: e.c

install:
	test -d $(ROOT)$(BINDIR) || mkdir -p $(ROOT)$(BINDIR)
	$(INSTALL) -c eqn $(ROOT)$(BINDIR)/eqn
	$(STRIP) $(ROOT)$(BINDIR)/eqn
	test -d $(ROOT)$(MANDIR)/man1b || mkdir -p $(ROOT)$(MANDIR)/man1b
	test -d $(ROOT)$(MANDIR)/man7b || mkdir -p $(ROOT)$(MANDIR)/man7b
	$(INSTALL) -c -m 644 eqn.1b $(ROOT)$(MANDIR)/man1b/eqn.1b
	$(INSTALL) -c -m 644 eqnchar.7b $(ROOT)$(MANDIR)/man7b/eqnchar.7b

clean:
	rm -f $(OBJ) eqn e.c e.def core log *~

mrproper: clean

diacrit.o: ../diacrit.c ../e.h e.def
eqnbox.o: ../eqnbox.c ../e.h
font.o: ../font.c ../e.h
fromto.o: ../fromto.c ../e.h
funny.o: ../funny.c ../e.h e.def
glob.o: ../glob.c ../e.h
integral.o: ../integral.c ../e.h e.def
io.o: ../io.c ../e.h
lex.o: ../lex.c ../e.h e.def
lookup.o: ../lookup.c ../e.h e.def
mark.o: ../mark.c ../e.h
matrix.o: ../matrix.c ../e.h
move.o: ../move.c ../e.h e.def
over.o: ../over.c ../e.h
paren.o: ../paren.c ../e.h
pile.o: ../pile.c ../e.h
shift.o: ../shift.c ../e.h e.def
size.o: ../size.c ../e.h
sqrt.o: ../sqrt.c ../e.h
text.o: ../text.c ../e.h e.def
e.o: e.c ../e.h
