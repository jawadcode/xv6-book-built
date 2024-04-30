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
OBJ = arcgen.o blockgen.o boxgen.o circgen.o for.o input.o linegen.o \
	main.o misc.o movegen.o picl.o picy.o pltroff.o print.o symtab.o \
	textgen.o version.o

FLAGS =

YFLAGS = -d

.c.o:
	$(CC) $(CFLAGS) $(WARN) $(FLAGS) $(CPPFLAGS) -c $<

all: picy.c picl.c pic

pic: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) $(LIBS) -lm -o pic

y.tab.h: picy.c

install:
	$(INSTALL) -c pic $(ROOT)$(BINDIR)/pic
	$(STRIP) $(ROOT)$(BINDIR)/pic
	test -d $(ROOT)$(MANDIR)/man1 || mkdir -p $(ROOT)$(MANDIR)/man1
	$(INSTALL) -c -m 644 pic.1 $(ROOT)$(MANDIR)/man1/pic.1

clean:
	rm -f $(OBJ) picl.c picy.c y.tab.h pic core log *~

mrproper: clean

arcgen.o: arcgen.c pic.h y.tab.h
blockgen.o: blockgen.c pic.h y.tab.h
boxgen.o: boxgen.c pic.h y.tab.h
circgen.o: circgen.c pic.h y.tab.h
for.o: for.c pic.h y.tab.h
input.o: input.c pic.h y.tab.h
linegen.o: linegen.c pic.h y.tab.h
main.o: main.c pic.h y.tab.h
misc.o: misc.c pic.h y.tab.h
movegen.o: movegen.c pic.h y.tab.h
picy.o: picy.c pic.h
pltroff.o: pltroff.c pic.h
print.o: print.c pic.h y.tab.h
symtab.o: symtab.c pic.h y.tab.h
textgen.o: textgen.c pic.h y.tab.h
