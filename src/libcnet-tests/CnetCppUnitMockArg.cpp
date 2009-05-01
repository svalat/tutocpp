/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetCppUnitMockArg.h"
#include <stdio.h>

CnetCppUnitMockArg::CnetCppUnitMockArg(int value)
{
	char buffer[32];
	sprintf(buffer,"%d",value);
	this->data = buffer;
}

CnetCppUnitMockArg::CnetCppUnitMockArg(char value)
{
	char buffer[4]={'\'',value,'\'','\0'};
	this->data = buffer;
}

CnetCppUnitMockArg::CnetCppUnitMockArg(const char * value)
{
	this->data = "\"";
	this->data+=value;
	this->data+= "\"";
}

CnetCppUnitMockArg::CnetCppUnitMockArg(const std::string & value)
{
	this->data = "\"";
	this->data+=value;
	this->data+= "\"";
}

CnetCppUnitMockArg::~CnetCppUnitMockArg()
{
}

const char * CnetCppUnitMockArg::getCStr()
{
	return this->data.c_str();
}

std::string CnetCppUnitMockArg::getValue()
{
	return this->data;
}
