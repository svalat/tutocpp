/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_FONT_SIMPLE_H
#define UNIT_TEST_CNET_FONT_SIMPLE_H

#include "CnetFontSimple.h"
#include <cppunit/extensions/HelperMacros.h>


class UnitTestCnetFontSimple : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetFontSimple );
	CPPUNIT_TEST( test_constructor_color );
	CPPUNIT_TEST( test_constructor_cnet_font );
	CPPUNIT_TEST( test_print_cnet_string );
	CPPUNIT_TEST( test_get_char_width );
	CPPUNIT_TEST( test_get_char_height );
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp();
		void tearDown();
		void test_constructor_color();
		void test_constructor_cnet_font();
		void test_print_cnet_string();
		void test_get_char_width();
		void test_get_char_height();
	protected:
		CnetImage * image;
		CnetFont * font;
};

#endif
