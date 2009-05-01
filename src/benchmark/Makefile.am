INCLUDES = -I$(top_srcdir)/src/libcnet -I$(top_srcdir)/src/libcnetguibase
METASOURCES = AUTO
noinst_PROGRAMS = benchmark
benchmark_SOURCES = CnetBenchmarkWidgetMainContainer.cpp CnetBenchmarkAnims.cpp \
	CnetBenchmarkImage.cpp CnetBenchmarkList.cpp CnetBenchmarkRunner.cpp main.cpp
noinst_HEADERS = CnetBenchmarkRunner.h CnetBenchmarkRunner.h \
	CnetBenchmarkAnimBase.h CnetBenchmarkAnims.h CnetBenchmarkWidgetMainContainer.h CnetBenchmarkList.h
benchmark_LDADD = $(top_builddir)/src/libcnetguibase/libcnetguibase.a \
	$(top_builddir)/src/libcnet/libcnet.a
noinst_DATA = result.txt
