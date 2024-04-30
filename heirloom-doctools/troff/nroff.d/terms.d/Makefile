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
TABS = tab.2631 tab.2631-c tab.2631-e tab.lp \
	tab.300 tab.300-12 tab.300s tab.300s-12 tab.382 \
	tab.4000a tab.450 tab.450-12 tab.832 \
	tab.37 tab.8510 tab.X tab.tn300

LINKS = tab.300S tab.300S-12 tab.4000A

all: $(TABS) $(LINKS)

tab.2631: a.2631 b.lp
	cat a.2631 b.lp >$@

tab.2631-c: a.2631-c b.lp
	cat a.2631-c b.lp >$@

tab.2631-e: a.2631-e b.lp
	cat a.2631-e b.lp >$@

tab.lp: a.lp b.lp
	cat a.lp b.lp >$@

tab.300: a.300 b.300
	cat a.300 b.300 >$@

tab.300-12: a.300-12 b.300
	cat a.300-12 b.300 >$@

tab.300s: a.300s b.300
	cat a.300s b.300 >$@

tab.300s-12: a.300s-12 b.300
	cat a.300s-12 b.300 >$@

tab.382: a.382 b.300
	cat a.382 b.300 >$@

tab.4000a: a.4000a b.300
	cat a.4000a b.300 >$@

tab.450: a.450 b.300
	cat a.450 b.300 >$@

tab.450-12: a.450-12 b.300
	cat a.450-12 b.300 >$@

tab.832: a.832 b.300
	cat a.832 b.300 >$@

tab.37: ab.37
	cat ab.37 >$@

tab.8510: ab.8510
	cat ab.8510 >$@

tab.X: ab.X
	cat ab.X >$@

tab.tn300: ab.tn300
	cat ab.tn300 >$@

tab.300S: tab.300s
	rm -f $@
	ln -s tab.300s $@

tab.300S-12: tab.300s-12
	rm -f $@
	ln -s tab.300s-12 $@

tab.4000A: tab.4000a
	rm -f $@
	ln -s tab.4000a $@

install: all
	test -d $(ROOT)$(TABDIR) || mkdir -p $(ROOT)$(TABDIR)
	for i in $(TABS); \
	do \
		$(INSTALL) -c -m 644 $$i $(ROOT)$(TABDIR)/$$i || exit; \
	done
	rm -f $(ROOT)$(TABDIR)/tab.300S
	cd $(ROOT)$(TABDIR) && ln -s tab.300s tab.300S
	rm -f $(ROOT)$(TABDIR)/tab.300S-12
	cd $(ROOT)$(TABDIR) && ln -s tab.300s-12 tab.300S-12
	rm -f $(ROOT)$(TABDIR)/tab.4000A
	cd $(ROOT)$(TABDIR) && ln -s tab.4000a tab.4000A

clean:
	rm -f $(TABS) $(LINKS)

mrproper: clean
