/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "UnitTestCnetString.h"
#include "CnetCppUnitExtra.h"
//#include <gmpxx.h>
#include <string.h>

//break je veux pas utiliser des pointeur partour pour pouvoir faire met setup teardown
#define MY_SETUP const CnetString test("test");const CnetString helloWorld("Hello World!");CnetString cnetString;

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCnetString );

void UnitTestCnetString::setUp()
{
}

void UnitTestCnetString::tearDown()
{
}

void UnitTestCnetString::test_constructor_void()
{
	//setup
	MY_SETUP;
	// Set up
	CnetString value;

	// Process

	// Check
	CPPUNIT_ASSERT_EQUAL('\0',*value.getCStr());
	CPPUNIT_ASSERT_EQUAL(0,value.getSize());
}

void UnitTestCnetString::test_constructor_chars()
{
	//setup
	MY_SETUP;
	//Set up
	CnetString value("test");
	CnetString valueNull(NULL);

	//process

	//check
	CPPUNIT_ASSERT_EQUAL(4,value.getSize());
	CPPUNIT_ASSERT_EQUAL("test",value);
	CPPUNIT_ASSERT_EQUAL('\0',*valueNull.getCStr());
	CPPUNIT_ASSERT_EQUAL(0,valueNull.getSize());
}

void UnitTestCnetString::test_constructor_cnet_string()
{
	//setup
	MY_SETUP;
	//setup
	CnetString value(test);

	//process

	//check
	CPPUNIT_ASSERT_EQUAL(4,value.getSize());
	CPPUNIT_ASSERT_EQUAL("test",value);
	CPPUNIT_ASSERT(value.getCStr()!=test.getCStr());
}

void UnitTestCnetString::test_constructor_std_string()
{
	//setup
	MY_SETUP;
	//setup
	std::string stdString("test");
	CnetString value(test);
	//check
	CPPUNIT_ASSERT_EQUAL(stdString.size(),value.getSize());
	CPPUNIT_ASSERT_EQUAL(stdString.c_str(),value);
	CPPUNIT_ASSERT(value.getCStr()!=stdString.c_str());
}

void UnitTestCnetString::test_getcstr()
{
	//setup
	MY_SETUP;
	//setup
	//process
	
	//check
	CPPUNIT_ASSERT(test.getCStr()!=NULL);
}

void UnitTestCnetString::test_getsize()
{
	//setup
	MY_SETUP;
	//setup
	//process
	//check
	CPPUNIT_ASSERT_EQUAL(4,test.getSize());
}

void UnitTestCnetString::test_getchar()
{
	//setup
	MY_SETUP;
	//setup
	//process

	//check
	CPPUNIT_ASSERT_EQUAL('s',test.getChar(2));
	CPPUNIT_ASSERT_EQUAL('t',test.getChar(0));
	CPPUNIT_ASSERT_EQUAL('\0',test.getChar(4));
	CPPUNIT_ASSERT_EQUAL('\0',test.getChar(10));
}

void UnitTestCnetString::test_getsubstr()
{
	//setup
	MY_SETUP;
	//setup
	//process
	const CnetString hello(helloWorld.getSubStr(0,5));
	const CnetString world(helloWorld.getSubStr(6,5));
	const CnetString world2(helloWorld.getSubStr(6,6));
	const CnetString world3(helloWorld.getSubStr(6,7));
	const CnetString empty(helloWorld.getSubStr(16,57));
	
	//check
	CPPUNIT_ASSERT_EQUAL("Hello",hello);
	CPPUNIT_ASSERT_EQUAL(5,hello.getSize());
	CPPUNIT_ASSERT_EQUAL("World",world);
	CPPUNIT_ASSERT_EQUAL(5,world.getSize());
	CPPUNIT_ASSERT_EQUAL("World!",world2);
	CPPUNIT_ASSERT_EQUAL(6,world2.getSize());
	CPPUNIT_ASSERT_EQUAL("World!",world3);
	CPPUNIT_ASSERT_EQUAL(6,world3.getSize());
	CPPUNIT_ASSERT_EQUAL("",empty);
}

void UnitTestCnetString::test_find_cstr()
{
	//setup
	MY_SETUP;
	//process
	int res1 = helloWorld.find("World");
	CPPUNIT_ASSERT_THROW(helloWorld.find("world"),CnetNotFoundException);
	int res3 = helloWorld.find("world",false);
	CPPUNIT_ASSERT_THROW(helloWorld.find("worlb",false),CnetNotFoundException);
	CPPUNIT_ASSERT_THROW(helloWorld.find("worlb",true),CnetNotFoundException);
	int res6 = helloWorld.find("Hello",true);
	CPPUNIT_ASSERT_THROW(helloWorld.find(NULL),CnetNullPointerException);

	//test
	CPPUNIT_ASSERT_EQUAL(6,res1);
	//CPPUNIT_ASSERT_EQUAL(-1,res2);
	CPPUNIT_ASSERT_EQUAL(6,res3);
	//CPPUNIT_ASSERT_EQUAL(-1,res4);
	//CPPUNIT_ASSERT_EQUAL(-1,res5);
	CPPUNIT_ASSERT_EQUAL(0,res6);
	//CPPUNIT_ASSERT_EQUAL(-1,res7);
}

void UnitTestCnetString::test_find_cnet_string()
{
	//setup
	MY_SETUP;
	//process
	const CnetString world("world");
	CPPUNIT_ASSERT_THROW(helloWorld.find(world),CnetNotFoundException);
	int res2 = helloWorld.find(world,false);
	//test
	//CPPUNIT_ASSERT_EQUAL(-1,res1);
	CPPUNIT_ASSERT_EQUAL(6,res2);
}

void UnitTestCnetString::test_operator_equal_cnet_string()
{
	//setup
	MY_SETUP;
	//process
	CnetString & out = (cnetString=helloWorld);

	//test
	CPPUNIT_ASSERT_EQUAL(helloWorld,cnetString);
	CPPUNIT_ASSERT_EQUAL(helloWorld.getSize(),cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL(&out,&cnetString);
}

void UnitTestCnetString::test_opeartor_equal_cstr()
{
	//setup
	MY_SETUP;
	//process
	CnetString & out = (cnetString=helloWorld.getCStr());

	//test
	CPPUNIT_ASSERT_EQUAL(helloWorld,cnetString);
	CPPUNIT_ASSERT_EQUAL(helloWorld.getSize(),cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL(&out,&cnetString);
}

void UnitTestCnetString::test_opeartor_equal_cstr_me()
{
	//setup
	MY_SETUP;
	//process
	cnetString=helloWorld;
	cnetString=cnetString.getCStr();

	//test
	CPPUNIT_ASSERT_EQUAL(helloWorld,cnetString);
	CPPUNIT_ASSERT_EQUAL(helloWorld.getSize(),cnetString.getSize());
}

void UnitTestCnetString::test_operator_equal_cnet_string_me()
{
	//setup
	MY_SETUP;
	//process
	cnetString=helloWorld;
	cnetString=cnetString;

	//test
	CPPUNIT_ASSERT_EQUAL(helloWorld,cnetString);
	CPPUNIT_ASSERT_EQUAL(helloWorld.getSize(),cnetString.getSize());
}

void UnitTestCnetString::test_operator_equal_equal_cstr()
{
	//setup
	MY_SETUP;
	//setup
	const CnetString tmp(helloWorld);
	const CnetString tmp2("Hello World!!");
	//process
	bool res1 = (tmp==helloWorld);
	bool res2 = (helloWorld==test);
	bool res3 = (tmp2==helloWorld);
	bool res4 = (tmp==tmp);
	//test
	CPPUNIT_ASSERT_EQUAL(true,res1);
	CPPUNIT_ASSERT_EQUAL(false,res2);
	CPPUNIT_ASSERT_EQUAL(false,res3);
	CPPUNIT_ASSERT_EQUAL(true,res4);
}

void UnitTestCnetString::test_operator_equal_equal_cnet_string()
{
	//setup
	MY_SETUP;
	//setup
	const CnetString tmp(helloWorld);
	const CnetString tmp2("Hello World!!");
	//process
	bool res1 = (tmp==helloWorld.getCStr());
	bool res2 = (tmp.getCStr()==helloWorld);
	bool res3 = (helloWorld==test.getCStr());
	bool res4 = (helloWorld.getCStr()==test);
	bool res5 = (tmp2.getCStr()==helloWorld);
	bool res6 = (tmp2==helloWorld.getCStr());
	bool res7 = (tmp==tmp.getCStr());
	bool res8 = (tmp.getCStr()==tmp);
	//test
	CPPUNIT_ASSERT_EQUAL(true,res1);
	CPPUNIT_ASSERT_EQUAL(true,res2);
	CPPUNIT_ASSERT_EQUAL(false,res3);
	CPPUNIT_ASSERT_EQUAL(false,res4);
	CPPUNIT_ASSERT_EQUAL(false,res5);
	CPPUNIT_ASSERT_EQUAL(false,res6);
	CPPUNIT_ASSERT_EQUAL(true,res7);
	CPPUNIT_ASSERT_EQUAL(true,res8);
}

void UnitTestCnetString::test_operator_not_equal_cstr()
{
	//setup
	MY_SETUP;
	//setup
	const CnetString tmp(helloWorld);
	const CnetString tmp2("Hello World!!");
	//process
	bool res1 = (tmp!=helloWorld);
	bool res2 = (helloWorld!=test);
	bool res3 = (tmp2!=helloWorld);
	bool res4 = (tmp!=tmp);
	//test
	CPPUNIT_ASSERT_EQUAL(false,res1);
	CPPUNIT_ASSERT_EQUAL(true,res2);
	CPPUNIT_ASSERT_EQUAL(true,res3);
	CPPUNIT_ASSERT_EQUAL(false,res4);
}

void UnitTestCnetString::test_operator_not_equal_cnet_string()
{
	//setup
	MY_SETUP;
	//setup
	const CnetString tmp(helloWorld);
	const CnetString tmp2("Hello World!!");
	//process
	bool res1 = (tmp!=helloWorld.getCStr());
	bool res2 = (tmp.getCStr()!=helloWorld);
	bool res3 = (helloWorld!=test.getCStr());
	bool res4 = (helloWorld.getCStr()!=test);
	bool res5 = (tmp2.getCStr()!=helloWorld);
	bool res6 = (tmp2!=helloWorld.getCStr());
	bool res7 = (tmp!=tmp.getCStr());
	bool res8 = (tmp.getCStr()!=tmp);
	//test
	CPPUNIT_ASSERT_EQUAL(false,res1);
	CPPUNIT_ASSERT_EQUAL(false,res2);
	CPPUNIT_ASSERT_EQUAL(true,res3);
	CPPUNIT_ASSERT_EQUAL(true,res4);
	CPPUNIT_ASSERT_EQUAL(true,res5);
	CPPUNIT_ASSERT_EQUAL(true,res6);
	CPPUNIT_ASSERT_EQUAL(false,res7);
	CPPUNIT_ASSERT_EQUAL(false,res8);
}

void UnitTestCnetString::test_operator_plus_cnet_string()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test + helloWorld;

	//test
	CPPUNIT_ASSERT_EQUAL("testHello World!",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()+helloWorld.getSize(),cnetString.getSize());
}

void UnitTestCnetString::test_operator_plus_cnet_string_me()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test + test;

	//test
	CPPUNIT_ASSERT_EQUAL("testtest",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()*2,cnetString.getSize());
}

void UnitTestCnetString::test_operator_plus_cstr()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test.getCStr() + helloWorld;
	CnetString res2 = test + helloWorld.getCStr();
	CnetString res3 = test + (char * )NULL;

	//test
	CPPUNIT_ASSERT_EQUAL("testHello World!",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()+helloWorld.getSize(),cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL(cnetString,res2);
	CPPUNIT_ASSERT_EQUAL(cnetString.getSize(),res2.getSize());
	CPPUNIT_ASSERT_EQUAL(test,res3);
	CPPUNIT_ASSERT_EQUAL(test.getSize(),res3.getSize());
}

void UnitTestCnetString::test_operator_plus_char()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test + 's';
	CnetString res2 = ' '+test;
	CnetString res3 = test + '\0';
	CnetString res4 = '\0'+test;
	//test
	CPPUNIT_ASSERT_EQUAL("tests",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()+1,cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL(" test",res2);
	CPPUNIT_ASSERT_EQUAL(test.getSize()+1,res2.getSize());
	CPPUNIT_ASSERT_EQUAL("test",res3);
	CPPUNIT_ASSERT_EQUAL(test.getSize(),res3.getSize());
	CPPUNIT_ASSERT_EQUAL("test",res4);
	CPPUNIT_ASSERT_EQUAL(test.getSize(),res4.getSize());
}

void UnitTestCnetString::test_operator_plus_cstr_me()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test.getCStr() + test;
	CnetString res2 = test + test.getCStr();
	//test
	CPPUNIT_ASSERT_EQUAL("testtest",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()*2,cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL("testtest",res2);
	CPPUNIT_ASSERT_EQUAL(test.getSize()*2,res2.getSize());
}

void UnitTestCnetString::test_operator_plus_equal_cnet_string()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test;
	CnetString & out = (cnetString+= helloWorld);
	//test
	CPPUNIT_ASSERT_EQUAL("testHello World!",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()+helloWorld.getSize(),cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL(&out,&cnetString);
}

void UnitTestCnetString::test_operator_plus_equal_cnet_string_me()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test;
	CnetString & out = (cnetString+= cnetString);
	//test
	CPPUNIT_ASSERT_EQUAL("testtest",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()*2,cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL(&out,&cnetString);
}

void UnitTestCnetString::test_operator_plus_equal_cstr()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test;
	CnetString & out = (cnetString+= helloWorld.getCStr());
	//test
	CPPUNIT_ASSERT_EQUAL("testHello World!",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()+helloWorld.getSize(),cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL(&out,&cnetString);
}

void UnitTestCnetString::test_operator_plus_equal_cstr_me()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test;
	CnetString & out = (cnetString+= cnetString.getCStr());
	//test
	CPPUNIT_ASSERT_EQUAL("testtest",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()*2,cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL(&out,&cnetString);
}

void UnitTestCnetString::test_operator_plus_equal_char()
{
	//setup
	MY_SETUP;
	//process
	cnetString = test;
	CnetString & out = (cnetString+='s');
	//test
	CPPUNIT_ASSERT_EQUAL("tests",cnetString);
	CPPUNIT_ASSERT_EQUAL(test.getSize()+1,cnetString.getSize());
	CPPUNIT_ASSERT_EQUAL(&out,&cnetString);
}

void UnitTestCnetString::test_operator_indexor()
{
	//setup
	MY_SETUP;
	cnetString = test;
	//process
	CPPUNIT_ASSERT_EQUAL('t',test[0]);
	CPPUNIT_ASSERT_EQUAL('e',test[1]);
	CPPUNIT_ASSERT_EQUAL('\0',test[10]);
}

void UnitTestCnetString::test_pass_to_function()
{
	//setup
	CnetString str("pass to function");
	//process
	CnetString res = to_test_pass_to_function(str);
	//test
	CPPUNIT_ASSERT_EQUAL("pass to function",str);
	CPPUNIT_ASSERT_EQUAL(str,res);
}

CnetString UnitTestCnetString::to_test_pass_to_function(CnetString value)
{
	return value;
}
