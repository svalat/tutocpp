/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetMainContainer.h"
#include "CnetMainContainerForTest.h"
#include "CnetCppUnitExtra.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetMainContainer );

void UnitTestCnetMainContainer::setUp()
{
	this->conainer = new CnetMainContainerForTest(120,40);
	this->widget1 = new CnetWidgetForTest(this->conainer,20,20);
	this->widget1->setPosition(10,10);
	this->widget2 = new CnetWidgetForTest(this->conainer,20,20);
	this->widget2->setPosition(40,10);
	this->widget3 = new CnetWidgetForTest(this->widget1,5,5);
	this->widget3->setPosition(5,5);
	this->events = new CnetWidgetMock(this->conainer,5,5);
	this->events->setPosition(80,10);
}

void UnitTestCnetMainContainer::tearDown()
{
	delete this->widget3;
	delete this->widget2;
	delete this->widget1;
	delete this->events;
	delete this->conainer;
}

void UnitTestCnetMainContainer::test_constructor()
{
	CnetMainContainerForTest cont(120,40);
	CPPUNIT_ASSERT_EQUAL(120,cont.getWidth());
	CPPUNIT_ASSERT_EQUAL(40,cont.getHeight());
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)&cont,&cont.getFocusedWidget());
}

void UnitTestCnetMainContainer::test_refresh()
{
	this->conainer->refresh();
	const CnetImage & image = this->conainer->getScreen();
	CPPUNIT_ASSERT_EQUAL(120,image.getWidth());
	CPPUNIT_ASSERT_EQUAL(40,image.getHeight());
	//save_image_to_file(image,"/CnetMainContainer/test_refresh.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetMainContainer/test_refresh.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetMainContainer::test_screenshot()
{
	const CnetImage & image = this->conainer->screenshot();
	CPPUNIT_ASSERT_EQUAL(120,image.getWidth());
	CPPUNIT_ASSERT_EQUAL(40,image.getHeight());
	//save_image_to_file(image,"/CnetMainContainer/test_refresh.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetMainContainer/test_refresh.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetMainContainer::test_select_focus_window()
{
	CnetWidget * res11 = &this->conainer->selectFocusWidget(1,1);
	CnetWidget * res12 = &this->conainer->selectFocusWidget(100,39);
	CnetWidget * res13 = &this->conainer->selectFocusWidget(31,31);
	CnetWidget * res2 = &this->conainer->selectFocusWidget(11,11);
	CnetWidget * res3 = &this->conainer->selectFocusWidget(41,11);
	CnetWidget * res4 = &this->conainer->selectFocusWidget(16,16);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->conainer,res11);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->conainer,res12);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->conainer,res13);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget1,res2);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget2,res3);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget3,res4);
}

void UnitTestCnetMainContainer::test_get_focused_widget()
{
	CnetWidget * res4 = &this->conainer->selectFocusWidget(16,16);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget3,res4);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->widget3,&this->conainer->getFocusedWidget());
}

void UnitTestCnetMainContainer::test_refresh_out_widget()
{
	//on place les widget
	this->widget2->setPosition(110,30);
	this->widget3->setPosition(17,17);
	//refresh
	this->conainer->refresh();
	//on test l'image
	const CnetImage & image = this->conainer->getScreen();
	//save_image_to_file(image,"/CnetMainContainer/test_refresh_out_widget.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetMainContainer/test_refresh_out_widget.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetMainContainer::test_refresh_out_widget_2()
{
	//on place les widget
	this->widget2->setPosition(110,30);
	this->widget3->setPosition(-2,-2);
	//refresh
	this->conainer->refresh();
	//on test l'image
	const CnetImage & image = this->conainer->getScreen();
	//save_image_to_file(image,"/CnetMainContainer/test_refresh_out_widget_2.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetMainContainer/test_refresh_out_widget_2.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetMainContainer::test_refresh_hide_widget()
{
	//on masque
	this->widget1->hide();
	//this->widget2->hide();
	//refresh
	this->conainer->refresh();
	//on test l'image
	const CnetImage & image = this->conainer->getScreen();
	//save_image_to_file(image,"/CnetMainContainer/test_refresh_hide_widget.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetMainContainer/test_refresh_hide_widget.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetMainContainer::test_send_mouse_move()
{
	this->conainer->setMousePosition(81,11);
	this->events->clear();

	this->conainer->sendMouseDown();
	this->conainer->sendMouseMove(10,20);
	CPPUNIT_ASSERT_EQUAL(91,this->conainer->getMouseX());
	CPPUNIT_ASSERT_EQUAL(31,this->conainer->getMouseY());
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->events,(CnetWidget*)&this->conainer->getFocusedWidget());
	CNET_ASSERT_HAS_CALL(onMouseMove(10,20),*this->events);
}

void UnitTestCnetMainContainer::test_send_mouse_down()
{
	this->conainer->setMousePosition(81,11);
	this->conainer->selectFocusWidget(81,11);
	this->events->clear();

	this->conainer->sendMouseDown();
	CNET_ASSERT_HAS_CALL(onMouseDown(),*this->events);
	this->events->clear();
	this->conainer->sendMouseDown();
	CNET_ASSERT_HAS_CALL(onMouseUp(),*this->events);
	CNET_ASSERT_HAS_CALL(onMouseDown(),*this->events);
	this->conainer->sendMouseDown();
	this->events->clear();
	this->conainer->setMousePosition(1,1);
	this->conainer->sendMouseDown();
	CNET_ASSERT_HAS_CALL(onMouseUp(),*this->events);
	CNET_ASSERT_HAS_CALL(onLostFocus(),*this->events);
}


void UnitTestCnetMainContainer::test_send_mouse_click()
{
	this->conainer->setMousePosition(81,11);
	this->events->clear();
	this->conainer->sendMouseClick();
	CNET_ASSERT_HAS_CALL(onClic(),*this->events);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->events,(CnetWidget*)&this->conainer->getFocusedWidget());
}

void UnitTestCnetMainContainer::test_send_key_pess()
{
	this->conainer->setMousePosition(81,11);
	this->conainer->sendMouseClick();
	this->events->clear();
	this->conainer->sendKeyPess('c');
	CNET_ASSERT_HAS_CALL(onKeyPress('c'),*this->events);
	CPPUNIT_ASSERT_EQUAL((CnetWidget*)this->events,(CnetWidget*)&this->conainer->getFocusedWidget());
}

void UnitTestCnetMainContainer::test_set_mouse_position()
{
	CPPUNIT_ASSERT_EQUAL(0,this->conainer->getMouseX());
	CPPUNIT_ASSERT_EQUAL(0,this->conainer->getMouseY());
	this->conainer->setMousePosition(81,11);
	CPPUNIT_ASSERT_EQUAL(81,this->conainer->getMouseX());
	CPPUNIT_ASSERT_EQUAL(11,this->conainer->getMouseY());
}

void UnitTestCnetMainContainer::test_send_mouse_up()
{
	this->conainer->setMousePosition(81,11);
	this->conainer->sendMouseDown();
	this->events->clear();
	this->conainer->sendMouseUp();
	this->conainer->sendMouseMove(10,20);
	CNET_ASSERT_HAS_CALL(onMouseUp(),*this->events);
	CNET_ASSERT_HAS_NOT_CALL(onMouseMove(10,20),*this->events);
}
