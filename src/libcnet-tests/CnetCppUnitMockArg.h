/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_CPPUNIT_MOCK_ARG_H
#define CNET_CPPUNIT_MOCK_ARG_H

#include <string>

class CnetCppUnitMockArg
{
	public:
		CnetCppUnitMockArg(int value);
		CnetCppUnitMockArg(char value);
		CnetCppUnitMockArg(const char * value);
		CnetCppUnitMockArg(const std::string & value);
		virtual ~CnetCppUnitMockArg();
		const char * getCStr();
		std::string getValue();
	private:
		std::string data;
};

#endif
