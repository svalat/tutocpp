/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetList.h"
#include "CnetCppUnitExtra.h"
#include "CnetString.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetList );

void UnitTestCnetList::setUp()
{
	this->list = new CnetList<int>();
	this->list->add(20);
	this->list->add(30);
}

void UnitTestCnetList::tearDown()
{
	delete this->list;
}

void UnitTestCnetList::test_constructor_void()
{
	CnetList<int> obj;
	CPPUNIT_ASSERT_EQUAL(0,obj.getSize());
}

void UnitTestCnetList::test_constructor_copy()
{
	CnetList<int> obj(*this->list);
	CPPUNIT_ASSERT(&(*this->list)[0]!=&obj[0]);
	CPPUNIT_ASSERT_EQUAL(30,obj[1]);
	CPPUNIT_ASSERT_EQUAL(20,obj[0]);
	CPPUNIT_ASSERT_EQUAL(2,obj.getSize());
}

void UnitTestCnetList::test_add_value()
{
	CPPUNIT_ASSERT_EQUAL(2,this->list->getSize());
	this->list->add(40);
	CPPUNIT_ASSERT_EQUAL(3,this->list->getSize());
	CPPUNIT_ASSERT_EQUAL(20,(*this->list)[0]);
	CPPUNIT_ASSERT_EQUAL(30,(*this->list)[1]);
	CPPUNIT_ASSERT_EQUAL(40,(*this->list)[2]);
	this->list->add(50);
	CPPUNIT_ASSERT_EQUAL(4,this->list->getSize());
	CPPUNIT_ASSERT_EQUAL(20,(*this->list)[0]);
	CPPUNIT_ASSERT_EQUAL(30,(*this->list)[1]);
	CPPUNIT_ASSERT_EQUAL(40,(*this->list)[2]);
	CPPUNIT_ASSERT_EQUAL(50,(*this->list)[3]);
}

void UnitTestCnetList::test_get_size()
{
	CPPUNIT_ASSERT_EQUAL(2,this->list->getSize());
}

void UnitTestCnetList::test_operator_selector()
{
	CPPUNIT_ASSERT_EQUAL(20,(*this->list)[0]);
	CPPUNIT_ASSERT_EQUAL(30,(*this->list)[1]);
	(*this->list)[1]=100;
	CPPUNIT_ASSERT_EQUAL(100,(*this->list)[1]);
	CPPUNIT_ASSERT_THROW((*this->list)[2],CnetOutOfBoundException);
}

void UnitTestCnetList::test_remove_index()
{
	this->list->add(40);
	this->list->add(50);
	CPPUNIT_ASSERT_EQUAL(4,this->list->getSize());
	this->list->remove(2);
	CPPUNIT_ASSERT_EQUAL(20,(*this->list)[0]);
	CPPUNIT_ASSERT_EQUAL(30,(*this->list)[1]);
	CPPUNIT_ASSERT_EQUAL(50,(*this->list)[2]);
	CPPUNIT_ASSERT_EQUAL(3,this->list->getSize());
	this->list->remove(1);
	CPPUNIT_ASSERT_EQUAL(20,(*this->list)[0]);
	CPPUNIT_ASSERT_EQUAL(50,(*this->list)[1]);
	CPPUNIT_ASSERT_EQUAL(2,this->list->getSize());
	this->list->remove(0);
	CPPUNIT_ASSERT_EQUAL(50,(*this->list)[0]);
	CPPUNIT_ASSERT_EQUAL(1,this->list->getSize());
	this->list->remove(0);
	CPPUNIT_ASSERT_EQUAL(0,this->list->getSize());
	CPPUNIT_ASSERT_THROW(this->list->remove(5),CnetOutOfBoundException);
}

void UnitTestCnetList::test_iterate()
{
	this->list->add(40);
	this->list->add(50);
	int toTest[10];
	unsigned int i=0;
	for (Iterator<int> it = this->list->begin();it!=this->list->end();++it)
		toTest[i++] = *it;
	CPPUNIT_ASSERT_EQUAL(4,i);
	CPPUNIT_ASSERT_EQUAL(20,toTest[0]);
	CPPUNIT_ASSERT_EQUAL(30,toTest[1]);
	CPPUNIT_ASSERT_EQUAL(40,toTest[2]);
	CPPUNIT_ASSERT_EQUAL(50,toTest[3]);
}

void UnitTestCnetList::test_iterate_reverse()
{
	this->list->add(40);
	this->list->add(50);
	int toTest[10];
	unsigned int i=0;
	for (Iterator<int> it = this->list->rbegin();it!=this->list->end();--it)
		toTest[i++] = *it;
	CPPUNIT_ASSERT_EQUAL(4,i);
	CPPUNIT_ASSERT_EQUAL(20,toTest[3]);
	CPPUNIT_ASSERT_EQUAL(30,toTest[2]);
	CPPUNIT_ASSERT_EQUAL(40,toTest[1]);
	CPPUNIT_ASSERT_EQUAL(50,toTest[0]);
}

void UnitTestCnetList::test_cnet_string_list()
{
	CnetList<CnetString> obj;
	obj.add("coucou");
	obj.add("test");
	CnetString tmp("Hello World!");
	obj.add(tmp);
	CPPUNIT_ASSERT_EQUAL(3,obj.getSize());
	CPPUNIT_ASSERT_EQUAL("coucou",obj[0]);
	CPPUNIT_ASSERT_EQUAL("test",obj[1]);
	CPPUNIT_ASSERT_EQUAL("Hello World!",obj[2]);
	CPPUNIT_ASSERT(&tmp!=&obj[2]);
}

void UnitTestCnetList::test_remove_value()
{
	CPPUNIT_ASSERT_EQUAL(2,this->list->getSize());
	this->list->removeValue(30);
	CPPUNIT_ASSERT_EQUAL(1,this->list->getSize());
	CPPUNIT_ASSERT_EQUAL(20,(*this->list)[0]);
	CPPUNIT_ASSERT_THROW(this->list->removeValue(30),CnetNotFoundException);
}

void UnitTestCnetList::test_clear()
{
	this->list->clear();
	CPPUNIT_ASSERT_EQUAL(0,this->list->getSize());
}
