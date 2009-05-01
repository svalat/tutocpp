INCLUDES = -I$(top_srcdir)/src/libcnet -I$(top_srcdir)/src/libcnetguibase
METASOURCES = AUTO
bin_PROGRAMS = curses sdl
curses_SOURCES = mainCurses.cpp
curses_LDADD = $(top_builddir)/src/libcnetguibase/libcnetguibase.a \
	$(top_builddir)/src/libcnet/libcnet.a -lcurses
sdl_SOURCES = mainCurses.cpp
sdl_CXXFLAGS = -DUSE_SDL `pkg-config --cflags sdl`
sdl_LDADD = $(top_builddir)/src/libcnetguibase/libcnetguibase.a \
	$(top_builddir)/src/libcnet/libcnet.a
sdl_LDFLAGS = `pkg-config --libs sdl`
AM_CFLAGS = `pkg-config --cflags sdl`
