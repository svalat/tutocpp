/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_CPP_UNIT_MOCK_H
#define CNET_CPP_UNIT_MOCK_H

#include <list>
#include <string>
#include "CnetCppUnitMockArg.h"
#include <cppunit/Asserter.h>

#define CNET_MOCK_METH0(name) virtual void name() {this->pushCall(#name);};
#define CNET_MOCK_METH1(name,type1) virtual void name(type1 a) {this->pushCall(#name,a);}
#define CNET_MOCK_METH2(name,type1,type2) virtual void name(type1 a,type2 b) {this->pushCall(#name,a,b);}

#define CNET_MOCK_FUNC0(name,ret) virtual  void name() {this->pushCall(#name);return (ret);}
#define CNET_MOCK_FUNC1(name,type1,ret) virtual void name(type1 a) {this->pushCall(#name,a);return (ret);}
#define CNET_MOCK_FUNC2(name,type1,type2,ret) virtual void name(type1 a,type2 b) {this->pushCall(#name,a,b);return (ret);}

class CnetCppUnitMock
{
	public:
		CnetCppUnitMock();
		virtual ~CnetCppUnitMock();
		std::string getLastCall();
		bool hasCall(std::string call);
		std::list<std::string> getCalls();
		std::string getCallStackAsString(std::string leftPad = " - ",std::string sep="\n");
		void clear();
		void assertCall(std::string expected,const CppUnit::SourceLine &sourceLine);
		void assertNotCall(std::string expected,const CppUnit::SourceLine &sourceLine);

		void pushCall(std::string name);
		void pushCall(std::string name,CnetCppUnitMockArg arg1);
		void pushCall(std::string name,CnetCppUnitMockArg arg1,CnetCppUnitMockArg arg2);
		void pushCall(std::string name,CnetCppUnitMockArg arg1,CnetCppUnitMockArg arg2,CnetCppUnitMockArg arg3);
	private:
		std::list<std::string> calls;
};

#define CNET_ASSERT_HAS_CALL(expected,actual) (actual).assertCall(#expected, CPPUNIT_SOURCELINE());
#define CNET_ASSERT_HAS_NOT_CALL(expected,actual) (actual).assertNotCall(#expected, CPPUNIT_SOURCELINE());

#endif
