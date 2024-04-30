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
OBJ = t0.o t1.o t2.o t3.o t4.o t5.o t6.o t7.o t8.o t9.o tb.o tc.o te.o \
	tf.o tg.o ti.o tm.o ts.o tt.o tu.o tv.o version.o

FLAGS = -DMACDIR='"$(MACDIR)"'

.c.o:
	$(CC) $(CFLAGS) $(WARN) $(FLAGS) $(CPPFLAGS) -c $<

all: tbl

tbl: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) $(LIBS) -o tbl

install:
	$(INSTALL) -c tbl $(ROOT)$(BINDIR)/tbl
	$(STRIP) $(ROOT)$(BINDIR)/tbl
	$(INSTALL) -c -m 644 tbl.1b $(ROOT)$(MANDIR)/man1b/tbl.1b

clean:
	rm -f $(OBJ) tbl core log *~

mrproper: clean

t..o: t..c
t0.o: t0.c t..c
t1.o: t1.c t..c
t2.o: t2.c t..c
t3.o: t3.c t..c
t4.o: t4.c t..c
t5.o: t5.c t..c
t6.o: t6.c t..c
t7.o: t7.c t..c
t8.o: t8.c t..c
t9.o: t9.c t..c
tb.o: tb.c t..c
tc.o: tc.c t..c
te.o: te.c t..c
tf.o: tf.c t..c
tg.o: tg.c t..c
ti.o: ti.c t..c
tm.o: tm.c t..c
ts.o: ts.c
tt.o: tt.c t..c
tu.o: tu.c t..c
tv.o: tv.c t..c
