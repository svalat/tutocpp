/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetCppUnitMock.h"
#include <cppunit/Message.h>

using namespace std;

CnetCppUnitMock::CnetCppUnitMock()
{
}

CnetCppUnitMock::~CnetCppUnitMock()
{
}

std::string CnetCppUnitMock::getLastCall()
{
	if (this->calls.empty())
		return "";
	else
		return *this->calls.rbegin();
}

bool CnetCppUnitMock::hasCall(std::string call)
{
	for (list<string>::iterator it=calls.begin();it!=calls.end();it++)
		if (*it==call)
			return true;
	return false;
}

std::list<std::string> CnetCppUnitMock::getCalls()
{
	return calls;
}

void CnetCppUnitMock::clear()
{
	this->calls.clear();
}

void CnetCppUnitMock::pushCall(std::string name)
{
	calls.push_back(name+"()");
}

void CnetCppUnitMock::pushCall(std::string name,CnetCppUnitMockArg arg1)
{
	string res = name+"(";
	res+=arg1.getValue()+")";
	calls.push_back(res);
}

void CnetCppUnitMock::pushCall(std::string name,CnetCppUnitMockArg arg1,CnetCppUnitMockArg arg2)
{
	string res = name+"(";
	res+=arg1.getValue()+",";
	res+=arg2.getValue()+")";
	calls.push_back(res);
}

void CnetCppUnitMock::pushCall(std::string name,CnetCppUnitMockArg arg1,CnetCppUnitMockArg arg2,CnetCppUnitMockArg arg3)
{
	string res = name+"(";
	res+=arg1.getValue()+",";
	res+=arg2.getValue()+",";
	res+=arg3.getValue()+")";
	calls.push_back(res);
}

std::string CnetCppUnitMock::getCallStackAsString(std::string leftPad,std::string sep)
{
	std::string res;
	if (this->calls.empty())
	{
		res = "Empty call stack";
	} else {
		for (list<string>::iterator it=calls.begin();it!=calls.end();it++)
			res+=leftPad+*it+sep;
	}
	return res;
}

void CnetCppUnitMock::assertCall(std::string expected,const CppUnit::SourceLine &sourceLine)
{
	if (!this->hasCall(expected))
	{
		std::string msg="Expected : ";
		msg+=expected+"\n- Actual   : ";
		msg+=this->getCallStackAsString(""," ");
		CppUnit::Asserter::fail(CppUnit::Message("Methode not called on mock",msg),sourceLine);
	}
}

void CnetCppUnitMock::assertNotCall(std::string expected,const CppUnit::SourceLine &sourceLine)
{
	if (this->hasCall(expected))
	{
		std::string msg="Expected : ";
		msg+=expected+"\n- Actual   : ";
		msg+=this->getCallStackAsString(""," ");
		CppUnit::Asserter::fail(CppUnit::Message("Methode called on mock",msg),sourceLine);
	}
}
