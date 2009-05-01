/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetFontSimple.h"
#include "CnetCppUnitExtra.h"
#include "font.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetFontSimple );

void UnitTestCnetFontSimple::setUp()
{
	image=new CnetImage(80,20);
	font=new CnetFontSimple;
}

void UnitTestCnetFontSimple::tearDown()
{
	delete font;
	delete image;
}

void UnitTestCnetFontSimple::test_constructor_color()
{
	//setup
	CnetFontSimple value1;
	CnetFontSimple value2(CNET_GRAY_COLOR);
	//test
	CPPUNIT_ASSERT_EQUAL(CNET_BLACK_COLOR,value1.getColor());
	CPPUNIT_ASSERT_EQUAL(CNET_GRAY_COLOR,value2.getColor());
}

void UnitTestCnetFontSimple::test_constructor_cnet_font()
{
	//setup
	CnetFontSimple orig(CNET_BLACK_COLOR);
	CnetFontSimple value(orig);
	//test
	CPPUNIT_ASSERT_EQUAL(CNET_BLACK_COLOR,value.getColor());
}

void UnitTestCnetFontSimple::test_print_cnet_string()
{
	font->print(*this->image,10,10,"test");
	//save_image_to_file(*image,"/CnetFontSimple/test_print_cnet_string.bincnetimage",true);
	//CPPUNIT_FAIL("Not yet implémented.");
	CnetImage expected = load_image_from_file("/CnetFontSimple/test_print_cnet_string.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetFontSimple::test_get_char_width()
{
	CPPUNIT_ASSERT_EQUAL(SVFONT_CHAR_WIDTH,font->getCharWidth());
}

void UnitTestCnetFontSimple::test_get_char_height()
{
	CPPUNIT_ASSERT_EQUAL(SVFONT_CHAR_HEIGHT,font->getCharHeight());
}
