/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef UNIT_TEST_CNET_STRING_H
#define UNIT_TEST_CNET_STRING_H

#include <cppunit/extensions/HelperMacros.h>
#include "CnetString.h"


class UnitTestCnetString : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnitTestCnetString );
	CPPUNIT_TEST( test_constructor_void );
	CPPUNIT_TEST( test_constructor_chars );
	CPPUNIT_TEST( test_constructor_cnet_string );
	CPPUNIT_TEST( test_constructor_std_string );
	CPPUNIT_TEST( test_getcstr );
	CPPUNIT_TEST( test_getsize );
	CPPUNIT_TEST( test_getchar );
	CPPUNIT_TEST( test_getsubstr );
	CPPUNIT_TEST( test_find_cstr );
	CPPUNIT_TEST( test_find_cnet_string );
	CPPUNIT_TEST( test_operator_equal_equal_cnet_string );
	CPPUNIT_TEST( test_operator_equal_equal_cstr );
	CPPUNIT_TEST( test_operator_not_equal_cnet_string );
	CPPUNIT_TEST( test_operator_not_equal_cstr );
	CPPUNIT_TEST( test_opeartor_equal_cstr );
	CPPUNIT_TEST( test_operator_equal_cnet_string );
	CPPUNIT_TEST( test_opeartor_equal_cstr_me );
	CPPUNIT_TEST( test_operator_equal_cnet_string_me );
	CPPUNIT_TEST( test_operator_plus_cnet_string );
	CPPUNIT_TEST( test_operator_plus_cnet_string_me );
	CPPUNIT_TEST( test_operator_plus_cstr );
	CPPUNIT_TEST( test_operator_plus_cstr_me );
	CPPUNIT_TEST( test_operator_plus_equal_cnet_string );
	CPPUNIT_TEST( test_operator_plus_equal_cnet_string_me );
	CPPUNIT_TEST( test_operator_plus_equal_cstr );
	CPPUNIT_TEST( test_operator_plus_equal_cstr_me );
	CPPUNIT_TEST( test_operator_indexor );
	CPPUNIT_TEST( test_operator_plus_equal_char );
	CPPUNIT_TEST( test_operator_plus_char );
	CPPUNIT_TEST( test_pass_to_function );
	CPPUNIT_TEST_SUITE_END();
	public:
		void setUp();
		void tearDown();
		void test_constructor_void();
		void test_constructor_chars();
		void test_constructor_cnet_string();
		void test_constructor_std_string();
		void test_getcstr();
		void test_getsize();
		void test_getchar();
		void test_getsubstr();
		void test_find_cstr();
		void test_find_cnet_string();
		void test_operator_equal_equal_cnet_string();
		void test_operator_equal_equal_cstr();
		void test_operator_not_equal_cnet_string();
		void test_operator_not_equal_cstr();
		void test_opeartor_equal_cstr();
		void test_opeartor_equal_cstr_me();
		void test_operator_equal_cnet_string();
		void test_operator_equal_cnet_string_me();
		void test_operator_plus_cnet_string();
		void test_operator_plus_cnet_string_me();
		void test_operator_plus_cstr();
		void test_operator_plus_cstr_me();
		void test_operator_plus_char();
		void test_operator_plus_equal_cnet_string();
		void test_operator_plus_equal_cnet_string_me();
		void test_operator_plus_equal_cstr();
		void test_operator_plus_equal_cstr_me();
		void test_operator_plus_equal_char();
		void test_operator_indexor();
		void test_pass_to_function();
	private:
		CnetString to_test_pass_to_function(CnetString value);
};


#endif
