/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetEvent.h"
#include "CnetEventMock.h"
#include "CnetCppUnitExtra.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetEvent );

void UnitTestCnetEvent::setUp()
{
	this->eventParent = new CnetEventMockChecker(NULL);
	this->event = new CnetEventMockDefaultImpl(this->eventParent);
}

void UnitTestCnetEvent::tearDown()
{
	delete this->event;
	delete this->eventParent;
}

void UnitTestCnetEvent::test_constructor()
{
	CnetEventMockDefaultImpl event1(this->event);
	CPPUNIT_ASSERT_EQUAL(this->event,event1.getParent());
	CPPUNIT_ASSERT_EQUAL(true,event1.getEnable());
}

void UnitTestCnetEvent::test_clic()
{
	this->event->onClic();
	CNET_ASSERT_HAS_CALL(onClic(),*this->eventParent);
}

void UnitTestCnetEvent::test_key_press()
{
	this->event->onKeyPress('d');
	CNET_ASSERT_HAS_CALL(onKeyPress('d'),*this->eventParent);
}

void UnitTestCnetEvent::test_get_focus()
{
	this->event->onGetFocus();
	CNET_ASSERT_HAS_CALL(onGetFocus(),*this->eventParent);
}

void UnitTestCnetEvent::test_lost_focus()
{
	this->event->onLostFocus();
	CNET_ASSERT_HAS_CALL(onLostFocus(),*this->eventParent);
}

void UnitTestCnetEvent::test_set_enable()
{
	CPPUNIT_ASSERT_EQUAL(true,this->event->getEnable());
	this->event->setEnable(false);
	CPPUNIT_ASSERT_EQUAL(false,this->event->getEnable());
}

void UnitTestCnetEvent::test_get_enable()
{
	CPPUNIT_ASSERT_EQUAL(true,this->event->getEnable());
}

void UnitTestCnetEvent::test_mouse_down()
{
	this->event->onMouseDown();
	CNET_ASSERT_HAS_CALL(onMouseDown(),*this->eventParent);
}

void UnitTestCnetEvent::test_mouse_up()
{
	this->event->onMouseUp();
	CNET_ASSERT_HAS_CALL(onMouseUp(),*this->eventParent);
}

void UnitTestCnetEvent::test_mouse_move()
{
	this->event->onMouseMove(10,20);
	CNET_ASSERT_HAS_CALL(onMouseMove(10,20),*this->eventParent);
}
