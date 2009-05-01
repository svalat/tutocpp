/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetCursor.h"
#include "CnetCppUnitExtra.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetCursor );

void UnitTestCnetCursor::setUp()
{
	this->win = new CnetMainContainerForTest(10,10);
	this->cursor = new CnetCursor(this->win);
	this->cursor->setPosition(2,2);
}

void UnitTestCnetCursor::tearDown()
{
	delete this->cursor;
	delete this->win;
}

void UnitTestCnetCursor::test_constructor()
{
	CnetCursor curs(this->win);

	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->win,curs.getParent());
	CPPUNIT_ASSERT_EQUAL(CNET_ZINDEX_MAX,curs.getZIndex());
	CPPUNIT_ASSERT_EQUAL(4,curs.getWidth());
	CPPUNIT_ASSERT_EQUAL(4,curs.getHeight());
}

void UnitTestCnetCursor::test_render()
{
	CnetImage image = this->win->screenshot();

	//save_image_to_file(image,"/CnetCursor/test_render.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetCursor/test_render.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
	
	//CPPUNIT_FAIL("OK");
}
