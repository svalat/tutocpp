/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetFont.h"
#include "CnetFontForTest.h"
#include "CnetCppUnitExtra.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetFont );

void UnitTestCnetFont::setUp()
{
	image = new CnetImage(80,60);
	font = new CnetFontForTest(CNET_BLACK_COLOR);
}

void UnitTestCnetFont::tearDown()
{
	delete font;
	delete image;
	font=NULL;
	image=NULL;
}

void UnitTestCnetFont::test_constructor_color()
{
	//setup
	CnetFontForTest value1;
	CnetFontForTest value2(CNET_GRAY_COLOR);
	//test
	CPPUNIT_ASSERT_EQUAL(CNET_BLACK_COLOR,value1.getColor());
	CPPUNIT_ASSERT_EQUAL(CNET_GRAY_COLOR,value2.getColor());
}

void UnitTestCnetFont::test_constructor_cnet_font()
{
	//setup
	CnetFontForTest orig(CNET_BLACK_COLOR);
	CnetFontForTest value(orig);
	//test
	CPPUNIT_ASSERT_EQUAL(CNET_BLACK_COLOR,value.getColor());
}

void UnitTestCnetFont::test_print_x_y_text()
{
	font->print(*this->image,10,10,"test");
	//save_image_to_file(*image,"/CnetFont/test_print_x_y_text.bincnetimage",true);
	CnetImage expected = load_image_from_file("/CnetFont/test_print_x_y_text.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,*image);
}

void UnitTestCnetFont::test_get_color()
{
	CPPUNIT_ASSERT_EQUAL(CNET_BLACK_COLOR,font->getColor());
}

void UnitTestCnetFont::test_set_color()
{
	font->setColor(CNET_GRAY_COLOR);
	CPPUNIT_ASSERT_EQUAL(CNET_GRAY_COLOR,font->getColor());
}

void UnitTestCnetFont::test_get_char_width()
{
	CPPUNIT_ASSERT_EQUAL(5,font->getCharWidth());
}
