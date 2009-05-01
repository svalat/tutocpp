INCLUDES = -I$(top_srcdir)/src/libcnet -I$(top_srcdir)/src/libcnet-tests \
	-I$(top_srcdir)/src/libcnetguibase
METASOURCES = AUTO
TESTS = UnitTestGuiBase
noinst_PROGRAMS = UnitTestGuiBase
UnitTestGuiBase_SOURCES = CnetEventMock.cpp CnetMainContainerForTest.cpp \
	CnetWidgetForTest.cpp CnetWidgetMock.cpp UnitTestCnetCursor.cpp UnitTestCnetEvent.cpp \
	UnitTestCnetMainContainer.cpp UnitTestCnetTextBox.cpp UnitTestCnetWidget.cpp main.cpp
UnitTestGuiBase_LDADD = $(top_builddir)/src/libcnet-tests/libcnetunittest.a \
	$(top_builddir)/src/libcnetguibase/libcnetguibase.a $(top_builddir)/src/libcnet/libcnet.a $(CPPUNIT_LIBS)
noinst_HEADERS = UnitTestCnetEvent.h CnetEventMock.h UnitTestCnetWidget.h \
	UnitTestCnetMainContainer.h CnetWidgetForTest.h UnitTestCnetTextBox.h CnetMainContainerForTest.h UnitTestCnetCursor.h CnetWidgetMock.h
SUBDIRS = data
AM_CXXFLAGS = $(CPPUNIT_CFLAGS) -DCNET_DATA_TEST_PATH="\"$(srcdir)/data\""
