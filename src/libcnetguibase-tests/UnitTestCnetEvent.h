/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_EVENT_H
#define UNIT_TEST_CNET_EVENT_H

#include "CnetEvent.h"
#include "CnetEventMock.h"
#include <cppunit/extensions/HelperMacros.h>


class UnitTestCnetEvent : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetEvent );
	CPPUNIT_TEST( test_constructor );
	CPPUNIT_TEST( test_clic );
	CPPUNIT_TEST( test_key_press );
	CPPUNIT_TEST( test_get_focus );
	CPPUNIT_TEST( test_lost_focus );
	CPPUNIT_TEST( test_set_enable );
	CPPUNIT_TEST( test_get_enable );
	CPPUNIT_TEST( test_mouse_down );
	CPPUNIT_TEST( test_mouse_up );
	CPPUNIT_TEST( test_mouse_move );
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp();
		void tearDown();
		void test_constructor();
		void test_clic();
		void test_key_press();
		void test_get_focus();
		void test_lost_focus();
		void test_set_enable();
		void test_get_enable();
		void test_mouse_down();
		void test_mouse_up();
		void test_mouse_move();
	protected:
		CnetEvent * event;
		CnetEventMockChecker * eventParent;
};

#endif
