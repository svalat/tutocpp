# set the include path found by configure
INCLUDES = $(all_includes)

# the library search path.
lib_LIBRARIES = libcnet.a
libcnet_a_SOURCES = CnetExceptions.cpp CnetFont.cpp CnetFontSimple.cpp \
CnetImage.cpp CnetString.cpp
AM_CXXFLAGS = $(CPPUNIT_CFLAGS)
include_HEADERS = CnetExceptions.h CnetString.h CnetImage.h CnetFont.h \
	CnetFontSimple.h CnetList.h CnetListImpl.h CnetListIteratorImpl.h CnetListIterator.h
noinst_DATA = font.pgm
noinst_SCRIPTS = makeFontHeader
noinst_HEADERS = font.h CnetImageToAscii.h
