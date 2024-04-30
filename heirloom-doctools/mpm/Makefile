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
OBJ = misc.o page.o queue.o range.o slug.o version.o

FLAGS = $(EUC)

.c.o:
	$(CC) $(CFLAGS) $(WARN) $(FLAGS) $(CPPFLAGS) -c $<

.cc.o:
	$(CCC) $(CFLAGS) $(WARN) $(FLAGS) $(CPPFLAGS) -c $<

all: pm

pm: $(OBJ)
	$(CCC) $(LDFLAGS) $(OBJ) $(LIBS) -lm -o pm

install: all
	test -d $(ROOT)$(LIBDIR) || mkdir -p $(ROOT)$(LIBDIR)
	$(INSTALL) -c pm $(ROOT)$(LIBDIR)/pm
	$(STRIP) $(ROOT)$(LIBDIR)/pm

clean:
	rm -f $(OBJ) pm core log *~

mrproper: clean

misc.o: misc.cc misc.h
page.o: page.cc misc.h slug.h range.h page.h
queue.o: queue.cc misc.h slug.h range.h page.h
range.o: range.cc misc.h slug.h range.h
slug.o: slug.cc misc.h slug.h
