AM_CPPFLAGS = -I$(top_srcdir)/src/libcnet -I$(top_srcdir)/src/libcnetguibase
METASOURCES = AUTO
bin_PROGRAMS = curses sdl
curses_SOURCES = mainCurses.cpp
curses_LDADD = $(top_builddir)/src/libcnetguibase/libcnetguibase.a \
	$(top_builddir)/src/libcnet/libcnet.a -lcurses
sdl_SOURCES = mainCurses.cpp
sdl_CXXFLAGS = -DUSE_SDL `sdl-config --cflags`
sdl_LDADD = $(top_builddir)/src/libcnetguibase/libcnetguibase.a \
	$(top_builddir)/src/libcnet/libcnet.a -lSDL
sdl_LDFLAGS = `sdl-config --libs`
AM_CFLAGS = `sdl-config --cflags`
