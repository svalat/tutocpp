/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_CURSOR_H
#define UNIT_TEST_CNET_CURSOR_H

#include "CnetCursor.h"
#include "CnetMainContainerForTest.h"
#include <cppunit/extensions/HelperMacros.h>

class UnitTestCnetCursor : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetCursor );
	CPPUNIT_TEST( test_constructor );
	CPPUNIT_TEST( test_render );
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp();
		void tearDown();
		void test_constructor();
		void test_render();
	protected:
		CnetMainContainerForTest * win;
		CnetCursor * cursor;
};

#endif
