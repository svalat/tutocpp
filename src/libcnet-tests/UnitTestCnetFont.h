/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_FONT_H
#define UNIT_TEST_CNET_FONT_H

#include "CnetFont.h"
#include <cppunit/extensions/HelperMacros.h>

class UnitTestCnetFont : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetFont );
	CPPUNIT_TEST( test_constructor_cnet_font );
	CPPUNIT_TEST( test_constructor_color );
	CPPUNIT_TEST( test_get_color );
	CPPUNIT_TEST( test_set_color );
	CPPUNIT_TEST( test_print_x_y_text );
	CPPUNIT_TEST( test_get_char_width );
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp();
		void tearDown();
		void test_constructor_color();
		void test_constructor_cnet_font();
		void test_get_color();
		void test_set_color();
		void test_print_x_y_text();
		void test_get_char_width();
	protected:
		CnetImage * image;
		CnetFont * font;
};

#endif
