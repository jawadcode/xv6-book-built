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

FONTS = AB AI AR AX BI CB CI CO CW CX GR HB HI HX Hb Hi Hr Hx \
	KB KI KR KX NB NI NR NX PA PB PI PX S1 VB VI VR VX ZD ZI B H I R S

FLAGS = -I. -I.. -DFNTDIR='"$(FNTDIR)"'

.c.o:
	$(CC) $(CFLAGS) $(WARN) $(CPPFLAGS) $(FLAGS) -c $<

all:

install: all
	test -d $(ROOT)$(FNTDIR) || mkdir -p $(ROOT)$(FNTDIR)
	test -d $(ROOT)$(FNTDIR)/devpost/charlib || \
		mkdir -p $(ROOT)$(FNTDIR)/devpost/charlib
	cd devpost && for i in ? ?? ?.name ??.name DESC*; \
	do \
		$(INSTALL) -c -m 644 $$i $(ROOT)$(FNTDIR)/devpost/ || exit; \
	done
	cd $(ROOT)$(FNTDIR)/devpost && \
		for i in G HM HK HL; \
		do \
			rm -f $$i; ln -s H $$i || exit; \
		done && \
		rm -f GI; ln -s HI GI
	cd devpost/charlib && for i in ?? ??.map BRACKETS_NOTE README OLD_LH*; \
	do \
		$(INSTALL) -c -m 644 $$i $(ROOT)$(FNTDIR)/devpost/charlib \
			|| exit; \
	done
	test -d $(ROOT)$(FNTDIR)/devps || mkdir -p $(ROOT)$(FNTDIR)/devps
	cd devps && for i in ? ?.afm ?? ??.afm DESC MustRead.html; \
	do \
		$(INSTALL) -c -m 644 $$i $(ROOT)$(FNTDIR)/devps/ || exit; \
	done
	rm -f $(ROOT)$(FNTDIR)/devps/charlib
	ln -s ../devpost/charlib $(ROOT)$(FNTDIR)/devps/charlib
	rm -f $(ROOT)$(FNTDIR)/devps/postscript
	ln -s ../devpost/postscript $(ROOT)$(FNTDIR)/devps/postscript
	for j in devpslow devpsmed; \
	do \
		test -d $(ROOT)$(FNTDIR)/$$j || mkdir -p $(ROOT)$(FNTDIR)/$$j; \
		$(INSTALL) -c -m 644 $$j/DESC $(ROOT)$(FNTDIR)/$$j/; \
		(cd $(ROOT)$(FNTDIR)/devps && for i in *; \
		do \
			test $$i != DESC || continue; \
			rm -f ../$$j/$$i; \
			ln -s ../devps/$$i ../$$j/$$i ; \
		done); \
	done

clean:
	rm -f core log *~

mrproper: clean
