AM_CPPFLAGS = -I$(top_srcdir)/src/libcnet
METASOURCES = AUTO
lib_LIBRARIES = libcnetguibase.a
include_HEADERS = CnetEvent.h CnetMainContainer.h CnetTextBox.h CnetWidget.h CnetCursesContainer.h CnetCursor.h CnetWindow.h CnetSDLContainer.h
libcnetguibase_a_SOURCES = CnetCursesContainer.cpp CnetCursor.cpp CnetEvent.cpp \
	CnetMainContainer.cpp CnetSDLContainer.cpp CnetTextBox.cpp CnetWidget.cpp CnetWindow.cpp
AM_CXXFLAGS = `pkg-config --cflags sdl`
