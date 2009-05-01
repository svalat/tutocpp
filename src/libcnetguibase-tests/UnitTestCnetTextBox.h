/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_TEXT_BOX_H
#define UNIT_TEST_CNET_TEXT_BOX_H

#include "CnetTextBox.h"
#include "CnetMainContainerForTest.h"
#include <cppunit/extensions/HelperMacros.h>

class UnitTestCnetTextBox : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetTextBox );
	CPPUNIT_TEST( test_constructor );
	CPPUNIT_TEST( test_set_text );
	CPPUNIT_TEST( test_get_text );
	CPPUNIT_TEST( test_get_color );
	CPPUNIT_TEST( test_set_color );
	CPPUNIT_TEST( test_clear );
	CPPUNIT_TEST( test_key_press );
	CPPUNIT_TEST( test_render_empty_string );
	CPPUNIT_TEST( test_render_shorter_string );
	CPPUNIT_TEST( test_render_longer_string );
	CPPUNIT_TEST( test_render_shorter_string_focus );
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp();
		void tearDown();
		void test_constructor();
		void test_set_text();
		void test_get_text();
		void test_get_color();
		void test_set_color();
		void test_clear();
		void test_key_press();
		void test_render_empty_string();
		void test_render_shorter_string();
		void test_render_longer_string();
		void test_render_shorter_string_focus();
	protected:
		CnetTextBox * text;
		CnetMainContainerForTest * win;
};

#endif
