# set the include path found by configure
AM_CPPFLAGS = -I$(top_srcdir)/src/libcnet $(all_includes)

# the library search path.
AM_CXXFLAGS = $(CPPUNIT_CFLAGS) -DCNET_DATA_TEST_PATH="\"$(srcdir)/data\""
TESTS = UnitTest
lib_LIBRARIES = libcnetunittest.a
include_HEADERS = CnetCppUnitExtra.h CnetCppUnitMock.h CnetCppUnitMockArg.h
libcnetunittest_a_SOURCES = CnetCppUnitExtra.cpp CnetCppUnitMock.cpp \
	CnetCppUnitMockArg.cpp
noinst_PROGRAMS = UnitTest
UnitTest_LDADD = libcnetunittest.a \
	$(top_builddir)/src/libcnet/libcnet.a $(CPPUNIT_LIBS)
UnitTest_SOURCES = CnetFontForTest.cpp UnitTestCnetFont.cpp \
	UnitTestCnetFontSimple.cpp UnitTestCnetImage.cpp UnitTestCnetString.cpp UnitTestMain.cpp UnitTestCnetList.cpp
noinst_HEADERS = UnitTestCnetString.h UnitTestCnetImage.h CnetFontForTest.h \
	UnitTestCnetFont.h UnitTestCnetFontSimple.h  UnitTestCnetList.h
SUBDIRS = data
