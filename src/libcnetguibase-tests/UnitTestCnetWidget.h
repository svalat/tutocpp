/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_WIDGET_H
#define UNIT_TEST_CNET_WIDGET_H

#include "CnetWidget.h"
#include <cppunit/extensions/HelperMacros.h>
#include "CnetWidgetForTest.h"


class UnitTestCnetWidget : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetWidget );
	CPPUNIT_TEST( test_constructor );
	CPPUNIT_TEST( test_destructor );
	CPPUNIT_TEST( test_destructor_unorder );
	CPPUNIT_TEST( test_screenshot );
	CPPUNIT_TEST( test_resize );
	CPPUNIT_TEST( test_set_position );
	CPPUNIT_TEST( test_set_z_index );
	CPPUNIT_TEST( test_move_up );
	CPPUNIT_TEST( test_move_down );
	CPPUNIT_TEST( test_move );
	CPPUNIT_TEST( test_show );
	CPPUNIT_TEST( test_hide );
	CPPUNIT_TEST( test_get_visibility );
	CPPUNIT_TEST( test_get_x );
	CPPUNIT_TEST( test_get_y );
	CPPUNIT_TEST( test_get_z );
	CPPUNIT_TEST( test_get_width );
	CPPUNIT_TEST( test_get_height );
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp();
		void tearDown();
		void test_constructor();
		void test_destructor();
		void test_destructor_unorder();
		void test_screenshot();
		void test_resize();
		void test_set_position();
		void test_set_z_index();
		void test_move_up();
		void test_move_down();
		void test_move();
		void test_show();
		void test_hide();
		void test_get_visibility();
		void test_get_x();
		void test_get_y();
		void test_get_z();
		void test_get_width();
		void test_get_height();
	protected:
		CnetWidgetForTest * root;
		CnetWidgetForTest * widget1;
		CnetWidgetForTest * widget2;
};

#endif
