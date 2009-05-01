/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_LIST_H
#define UNIT_TEST_CNET_LIST_H

#include <cppunit/extensions/HelperMacros.h>
#include "CnetList.h"


class UnitTestCnetList : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetList );
	CPPUNIT_TEST( test_constructor_void );
	CPPUNIT_TEST( test_constructor_copy );
	CPPUNIT_TEST( test_add_value );
	CPPUNIT_TEST( test_get_size );
	CPPUNIT_TEST( test_operator_selector );
	CPPUNIT_TEST( test_remove_index );
	CPPUNIT_TEST( test_remove_value );
	CPPUNIT_TEST( test_iterate );
	CPPUNIT_TEST( test_iterate_reverse );
	CPPUNIT_TEST( test_clear );
	CPPUNIT_TEST( test_cnet_string_list );
	CPPUNIT_TEST_SUITE_END();
	public:
		void setUp();
		void tearDown();
		void test_constructor_void();
		void test_constructor_copy();
		void test_add_value();
		void test_get_size();
		void test_operator_selector();
		void test_remove_index();
		void test_remove_value();
		void test_iterate();
		void test_iterate_reverse();
		void test_cnet_string_list();
		void test_clear();
	protected:
		CnetList<int> * list;
};

#endif
