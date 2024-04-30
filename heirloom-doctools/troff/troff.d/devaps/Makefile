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
OBJ = daps.o build.o draw.o getopt.o version.o

FONTS = B I R S CT CW CX GB GI GR GS HI HK HX PO PX S1 SC SM TX DESC \
	C G H BI CE CI HB HL MB MI MR MX PA PB PI TB

FLAGS = -I. -I.. -DFNTDIR='"$(FNTDIR)"'

.c.o:
	$(CC) $(CFLAGS) $(WARN) $(CPPFLAGS) $(FLAGS) -c $<

all: daps makedev fonts HM.out

daps: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) $(LIBS) -lm -o daps

makedev: makedev.o
	$(CC) $(LDFLAGS) makedev.o $(LIBS) -o makedev

fonts: makedev
	for i in $(FONTS); \
	do \
		./makedev $$i || exit; \
	done

HM.out: HB.out
	rm -f $@
	ln -s HB.out $@

HB.out: fonts

install: all
	$(INSTALL) -c daps $(ROOT)$(BINDIR)/daps
	$(STRIP) $(ROOT)$(BINDIR)/daps
	mkdir -p $(ROOT)$(FNTDIR)/devaps
	for i in $(FONTS) *.add *.out version; \
	do \
		$(INSTALL) -c -m 644 $$i $(ROOT)$(FNTDIR)/devaps/$$i || exit; \
	done

clean:
	rm -f $(OBJ) daps makedev.o makedev *.add *.out core log *~

mrproper: clean

build.o: build.c daps.h
daps.o: daps.c aps.h dev.h daps.h daps.g
makedev.o: makedev.c dev.h
draw.o: draw.c ../draw.c
