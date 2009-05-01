/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_MAIN_CONTAINER_H
#define UNIT_TEST_CNET_MAIN_CONTAINER_H

#include "CnetMainContainer.h"
#include "CnetMainContainerForTest.h"
#include "CnetWidgetForTest.h"
#include "CnetWidgetMock.h"
#include <cppunit/extensions/HelperMacros.h>

class UnitTestCnetMainContainer : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetMainContainer );
	CPPUNIT_TEST( test_constructor );
	CPPUNIT_TEST( test_refresh );
	CPPUNIT_TEST( test_refresh_out_widget );
	CPPUNIT_TEST( test_refresh_out_widget_2 );
	CPPUNIT_TEST( test_refresh_hide_widget );
	CPPUNIT_TEST( test_screenshot );
	CPPUNIT_TEST( test_select_focus_window );
	CPPUNIT_TEST( test_get_focused_widget );
	CPPUNIT_TEST( test_send_mouse_move );
	CPPUNIT_TEST( test_send_mouse_down );
	CPPUNIT_TEST( test_send_mouse_up );
	CPPUNIT_TEST( test_send_mouse_click );
	CPPUNIT_TEST( test_send_key_pess );
	CPPUNIT_TEST( test_set_mouse_position );
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp();
		void tearDown();
		void test_constructor();
		void test_refresh();
		void test_refresh_out_widget();
		void test_refresh_out_widget_2();
		void test_refresh_hide_widget();
		void test_screenshot();
		void test_select_focus_window();
		void test_get_focused_widget();
		void test_send_key_event();
		void test_send_focus_event();
		void test_send_mouse_event();
		void test_send_mouse_move();
		void test_send_mouse_down();
		void test_send_mouse_up();
		void test_send_mouse_click();
		void test_send_key_pess();
		void test_set_mouse_position();
	protected:
		CnetMainContainerForTest * conainer;
		CnetWidgetForTest * widget1;
		CnetWidgetForTest * widget2;
		CnetWidgetForTest * widget3;
		CnetWidgetMock * events;
};

#endif
