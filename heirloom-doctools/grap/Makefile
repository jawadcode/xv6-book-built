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
OBJ = coord.o for.o frame.o grap.o grapl.o input.o label.o main.o misc.o \
	plot.o print.o ticks.o version.o

FLAGS = -DLIBDIR='"$(LIBDIR)"'

YFLAGS = -d

.c.o:
	$(CC) $(CFLAGS) $(WARN) $(FLAGS) $(CPPFLAGS) -c $<

all: grap.c grapl.c grap

grap: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) $(LIBS) -lm -o grap

y.tab.h: grap.c

install:
	$(INSTALL) -c grap $(ROOT)$(BINDIR)/grap
	$(STRIP) $(ROOT)$(BINDIR)/grap
	test -d $(ROOT)$(LIBDIR) || mkdir -p $(ROOT)$(LIBDIR)
	$(INSTALL) -c -m 644 grap.defines $(ROOT)$(LIBDIR)/grap.defines
	$(INSTALL) -c -m 644 grap.1 $(ROOT)$(MANDIR)/man1/grap.1

clean:
	rm -f $(OBJ) grapl.c grap.c y.tab.h grap core log *~

mrproper: clean

coord.o: coord.c grap.h y.tab.h
for.o: for.c grap.h y.tab.h
frame.o: frame.c grap.h y.tab.h
grap.o: grap.c grap.h
grapl.o: grapl.c grap.h y.tab.h
input.o: input.c grap.h y.tab.h
label.o: label.c grap.h y.tab.h
main.o: main.c grap.h y.tab.h
misc.o: misc.c grap.h y.tab.h
plot.o: plot.c grap.h y.tab.h
print.o: print.c grap.h y.tab.h
ticks.o: ticks.c grap.h y.tab.h
