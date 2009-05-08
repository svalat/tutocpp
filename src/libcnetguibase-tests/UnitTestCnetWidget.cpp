/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetWidget.h"
#include "CnetCppUnitExtra.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetWidget );

void UnitTestCnetWidget::setUp()
{
	this->root = new CnetWidgetForTest(NULL,140,60);
	this->widget1 = new CnetWidgetForTest(this->root,20,20);
	this->widget1->setPosition(10,10);
	this->widget2 = new CnetWidgetForTest(this->root,20,20);
	this->widget2->setPosition(40,10);
}

void UnitTestCnetWidget::tearDown()
{
	delete this->widget1;
	delete this->widget2;
	delete this->root;
}

void UnitTestCnetWidget::test_constructor()
{
	CnetWidgetForTest w1(NULL,140,60);
	CnetWidgetForTest w2(&w1,70,30);
	
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)NULL,w1.getParent());
	CPPUNIT_ASSERT_EQUAL(0,w1.getX());
	CPPUNIT_ASSERT_EQUAL(0,w1.getY());
	CPPUNIT_ASSERT_EQUAL(140,w1.getWidth());
	CPPUNIT_ASSERT_EQUAL(60,w1.getHeight());
	CPPUNIT_ASSERT_EQUAL(0,w1.getZIndex());
	CPPUNIT_ASSERT_EQUAL(true,w1.getVisibility());
	CPPUNIT_ASSERT_EQUAL(true,w1.getNeedRefresh());
	CPPUNIT_ASSERT_EQUAL(1,w1.countChilds());
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)&w2,w1.getChild(0));

	CPPUNIT_ASSERT_EQUAL((CnetWidget*)&w1,w2.getParent());
	CPPUNIT_ASSERT_EQUAL(0,w2.getX());
	CPPUNIT_ASSERT_EQUAL(0,w2.getY());
	CPPUNIT_ASSERT_EQUAL(true,w2.getVisibility());
	CPPUNIT_ASSERT_EQUAL(70,w2.getWidth());
	CPPUNIT_ASSERT_EQUAL(30,w2.getHeight());
	CPPUNIT_ASSERT_EQUAL(0,w2.getZIndex());
	CPPUNIT_ASSERT_EQUAL(0,w2.countChilds());
	CPPUNIT_ASSERT_EQUAL(true,w2.getNeedRefresh());
}

void UnitTestCnetWidget::test_destructor()
{
	CnetWidgetForTest *w1 = new CnetWidgetForTest(NULL,140,60);
	CnetWidgetForTest *w2 = new CnetWidgetForTest(w1,70,30);

	CPPUNIT_ASSERT_EQUAL(1,w1->countChilds());
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)w2,w1->getChild(0));

	delete w2;
	CPPUNIT_ASSERT_EQUAL(0,w1->countChilds());
	delete w1;
}

void UnitTestCnetWidget::test_destructor_unorder()
{
	CnetWidgetForTest *w1 = new CnetWidgetForTest(NULL,140,60);
	CnetWidgetForTest *w2 = new CnetWidgetForTest(w1,70,30);

	CPPUNIT_ASSERT_EQUAL(1,w1->countChilds());
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)w2,w1->getChild(0));

	delete w1;
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)NULL,w2->getParent());
	delete w2;
}

void UnitTestCnetWidget::test_screenshot()
{
	//process
	CnetImage image = root->screenshot();
	//save_image_to_file(image,"/CnetWidget/test_screenshot.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetWidget/test_screenshot.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetWidget::test_resize()
{
	//process
	this->root->resize(70,40);
	CnetImage image = this->root->screenshot();

	CPPUNIT_ASSERT_EQUAL(70,this->root->getWidth());
	CPPUNIT_ASSERT_EQUAL(40,this->root->getHeight());
	//save_image_to_file(image,"/CnetWidget/test_resize.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetWidget/test_resize.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetWidget::test_set_position()
{
	this->widget2->setPosition(40,20);
	CnetImage image = this->root->screenshot();

	CPPUNIT_ASSERT_EQUAL(40,this->widget2->getX());
	CPPUNIT_ASSERT_EQUAL(20,this->widget2->getY());
	//save_image_to_file(image,"/CnetWidget/test_set_position.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetWidget/test_set_position.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetWidget::test_set_z_index()
{
	this->widget2->setPosition(20,20);
	this->widget1->setZIndex(1);
	CnetImage image = this->root->screenshot();

	CPPUNIT_ASSERT_EQUAL(1,this->widget1->getZIndex());
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget2,this->root->getChild(0));
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget1,this->root->getChild(1));
	//save_image_to_file(image,"/CnetWidget/test_set_z_index.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetWidget/test_set_z_index.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetWidget::test_move_up()
{
	this->widget1->moveUp(2);
	CPPUNIT_ASSERT_EQUAL(2,this->widget1->getZIndex());
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget2,this->root->getChild(0));
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget1,this->root->getChild(1));
}

void UnitTestCnetWidget::test_move_down()
{
	this->widget2->moveDown(2);
	CPPUNIT_ASSERT_EQUAL(-2,this->widget2->getZIndex());
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget2,this->root->getChild(0));
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget1,this->root->getChild(1));
}

void UnitTestCnetWidget::test_move()
{
	this->widget1->move(10,5);
	CPPUNIT_ASSERT_EQUAL(20,this->widget1->getX());
	CPPUNIT_ASSERT_EQUAL(15,this->widget1->getY());
}

void UnitTestCnetWidget::test_show()
{
	this->widget1->hide();;
	CPPUNIT_ASSERT_EQUAL(false,this->widget1->getVisibility());
	this->widget1->show();;
	CPPUNIT_ASSERT_EQUAL(true,this->widget1->getVisibility());
}

void UnitTestCnetWidget::test_hide()
{
	this->widget2->hide();
	CnetImage image = this->root->screenshot();
	//save_image_to_file(image,"/CnetWidget/test_hide.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetWidget/test_hide.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetWidget::test_get_visibility()
{
	CPPUNIT_ASSERT_EQUAL(true,this->widget1->getVisibility());
}

void UnitTestCnetWidget::test_get_x()
{
	CPPUNIT_ASSERT_EQUAL(10,this->widget1->getX());
	CPPUNIT_ASSERT_EQUAL(40,this->widget2->getX());
}

void UnitTestCnetWidget::test_get_y()
{
	CPPUNIT_ASSERT_EQUAL(10,this->widget1->getY());
	CPPUNIT_ASSERT_EQUAL(10,this->widget2->getY());
}

void UnitTestCnetWidget::test_get_z()
{
	CPPUNIT_ASSERT_EQUAL(0,this->widget1->getZIndex());
}

void UnitTestCnetWidget::test_get_width()
{
	CPPUNIT_ASSERT_EQUAL(20,this->widget1->getWidth());
}

void UnitTestCnetWidget::test_get_height()
{
	CPPUNIT_ASSERT_EQUAL(20,this->widget1->getHeight());
}

void UnitTestCnetWidget::test_need_refresh()
{
	CPPUNIT_ASSERT_EQUAL(true,this->widget1->getNeedRefresh());
}
