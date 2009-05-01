/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetTextBox.h"
#include "CnetCppUnitExtra.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetTextBox );

void UnitTestCnetTextBox::setUp()
{
	this->win = new CnetMainContainerForTest(100,20);
	this->text = new CnetTextBox(this->win,80,12);
	this->text->setPosition(10,5);
	this->text->setText("Hello World !");
}

void UnitTestCnetTextBox::tearDown()
{
	delete this->text;
	delete this->win;
}

void UnitTestCnetTextBox::test_constructor()
{
	CnetTextBox textBox1(this->win,60,20);
	CnetTextBox textBox2(this->win,60,20,CNET_GRAY_COLOR);
	//tests
	CPPUNIT_ASSERT_EQUAL("",textBox1.getText());
	CPPUNIT_ASSERT_EQUAL(60,textBox1.getWidth());
	CPPUNIT_ASSERT_EQUAL(20,textBox1.getHeight());
	CPPUNIT_ASSERT_EQUAL(CNET_BLACK_COLOR,textBox1.getColor());
	CPPUNIT_ASSERT_EQUAL((CnetWidget *)this->win,textBox1.getParent());
	

	CPPUNIT_ASSERT_EQUAL("",textBox2.getText());
	CPPUNIT_ASSERT_EQUAL(60,textBox2.getWidth());
	CPPUNIT_ASSERT_EQUAL(20,textBox2.getHeight());
	CPPUNIT_ASSERT_EQUAL(CNET_GRAY_COLOR,textBox2.getColor());
	CPPUNIT_ASSERT_EQUAL((CnetWidget *)this->win,textBox2.getParent());
}

void UnitTestCnetTextBox::test_set_text()
{
	CPPUNIT_ASSERT_EQUAL("Hello World !",this->text->getText());
	this->text->setText("test");
	CPPUNIT_ASSERT_EQUAL("test",this->text->getText());
}

void UnitTestCnetTextBox::test_get_text()
{
	CPPUNIT_ASSERT_EQUAL("Hello World !",this->text->getText());
}

void UnitTestCnetTextBox::test_get_color()
{
	CPPUNIT_ASSERT_EQUAL(CNET_BLACK_COLOR,this->text->getColor());
}

void UnitTestCnetTextBox::test_set_color()
{
	CPPUNIT_ASSERT_EQUAL(CNET_BLACK_COLOR,this->text->getColor());
	this->text->setColor(CNET_GRAY_COLOR);
	CPPUNIT_ASSERT_EQUAL(CNET_GRAY_COLOR,this->text->getColor());
}

void UnitTestCnetTextBox::test_clear()
{
	CPPUNIT_ASSERT_EQUAL("Hello World !",this->text->getText());
	this->text->clear();
	CPPUNIT_ASSERT_EQUAL("",this->text->getText());
}

void UnitTestCnetTextBox::test_key_press()
{
	this->text->clear();
	CPPUNIT_ASSERT_EQUAL("",this->text->getText());
	this->text->onKeyPress('t');
	CPPUNIT_ASSERT_EQUAL("t",this->text->getText());
	this->text->onKeyPress('e');
	CPPUNIT_ASSERT_EQUAL("te",this->text->getText());
	this->text->onKeyPress('x');
	CPPUNIT_ASSERT_EQUAL("tex",this->text->getText());
	this->text->onKeyPress('t');
	CPPUNIT_ASSERT_EQUAL("text",this->text->getText());
	this->text->onKeyPress('\n');
	CPPUNIT_ASSERT_EQUAL("text",this->text->getText());
	this->text->onKeyPress(127);
	CPPUNIT_ASSERT_EQUAL("tex",this->text->getText());
	this->text->onKeyPress(0);
	CPPUNIT_ASSERT_EQUAL("tex",this->text->getText());
}

void UnitTestCnetTextBox::test_render_empty_string()
{
	this->text->setText("");
	CnetImage image = this->win->screenshot();

	//save_image_to_file(image,"/CnetTextBox/test_render_empty_string.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetTextBox/test_render_empty_string.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetTextBox::test_render_shorter_string()
{
	this->text->setText("test");
	CnetImage image = this->win->screenshot();

	//save_image_to_file(image,"/CnetTextBox/test_render_shorter_string.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetTextBox/test_render_shorter_string.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetTextBox::test_render_shorter_string_focus()
{
	this->text->setText("test");
	((CnetEvent*)this->text)->giveFocus();
	CnetImage image = this->win->screenshot();

	//save_image_to_file(image,"/CnetTextBox/test_render_shorter_string_focus.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetTextBox/test_render_shorter_string_focus.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}

void UnitTestCnetTextBox::test_render_longer_string()
{
	this->text->setText("ABDCEFGHIJKLMNOPQRSTUVWXYZ");
	CnetImage image = this->win->screenshot();

	//save_image_to_file(image,"/CnetTextBox/test_render_longer_string.bincnetimage",true);
	//CPPUNIT_FAIL("SAVING NEW RESULT");
	CnetImage expected = load_image_from_file("/CnetTextBox/test_render_longer_string.bincnetimage");
	//test
	CPPUNIT_ASSERT_EQUAL(expected,image);
}
