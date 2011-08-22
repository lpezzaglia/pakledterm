# $Id: $
# versions
VERSION = 0.0.1
STVERSION = 0.1.1

# Customize below to fit your system

# paths
PREFIX = /usr/local
MANPREFIX = ${PREFIX}/share/man

X11INC = /usr/X11R6/include
X11LIB = /usr/X11R6/lib

# includes and libs
INCS = -I. -I/usr/include -I${X11INC}
LIBS = -lc -L${X11LIB} -lX11 -lutil

# flags
CPPFLAGS = -DVERSION=\"${VERSION}\" -DSTVERSION=\"${STVERSION}\"
CFLAGS += -std=c99 -pedantic -Wall -Os ${INCS} ${CPPFLAGS}
LDFLAGS += -s ${LIBS}

# compiler and linker
CC ?= cc
