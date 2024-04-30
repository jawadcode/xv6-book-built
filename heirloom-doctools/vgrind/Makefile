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
OBJ = regexp.o vfontedpr.o vgrindefs.o version.o

FLAGS = $(EUC) -DLIBDIR='"$(LIBDIR)"'

.c.o:
	$(CC) $(CFLAGS) $(WARN) $(FLAGS) $(CPPFLAGS) -c $<

all: vgrind vfontedpr

vfontedpr: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) $(LIBS) -o vfontedpr

vgrind: vgrind.sh
	rm -f $@
	echo "#!$(SHELL)" >>$@
	echo "_TROFF=$(BINDIR)/troff" >>$@
	echo "_VFONTEDPR=$(LIBDIR)/vfontedpr" >>$@
	echo "_TMAC_VGRIND=$(MACDIR)/vgrind" >>$@
	echo "_DPOST=$(BINDIR)/dpost" >>$@
	cat vgrind.sh >>$@
	chmod 755 $@

install:
	$(INSTALL) -c vgrind $(ROOT)$(BINDIR)/vgrind
	test -d $(ROOT)$(LIBDIR) || mkdir -p $(ROOT)$(LIBDIR)
	$(INSTALL) -c vfontedpr $(ROOT)$(LIBDIR)/vfontedpr
	$(STRIP) $(ROOT)$(LIBDIR)/vfontedpr
	$(INSTALL) -c -m 644 vgrindefs.src $(ROOT)$(LIBDIR)/vgrindefs
	$(INSTALL) -c -m 644 vgrind.1b $(ROOT)$(MANDIR)/man1b/vgrind.1b

clean:
	rm -f $(OBJ) vfontedpr vgrind retest retest.o core log *~

mrproper: clean
