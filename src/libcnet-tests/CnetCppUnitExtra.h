/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_CPP_UNIT_EXTRA_H
#define CNET_CPP_UNIT_EXTRA_H

#include "CnetString.h"
#include "CnetImage.h"
#include "CnetImage.h"
#include <cppunit/extensions/HelperMacros.h>
#include <stdexcept>
#include <string>

#define CNET_TEST_IMAGE_VERBOSE_LOAD false
#define CNET_TEST_IMAGE_VERBOSE_SAVE false

namespace CppUnit{
	void assertEquals( const char * expected,const CnetString & actual,CppUnit::SourceLine sourceLine,const std::string &message );
	void assertEquals( const char * expected,const std::string & actual,CppUnit::SourceLine sourceLine,const std::string &message );
	void assertEquals( int expected,unsigned int actual,SourceLine sourceLine,const std::string &message );
	void assertEquals( CnetColor expected,CnetColor actual,SourceLine sourceLine,const std::string &message );
	void assertEquals( const CnetImage expected, const CnetImage actual,SourceLine sourceLine,const std::string &message );
};

void save_image_to_file(const CnetImage & image,CnetString filename,bool verbose=false,const char * dataPath=CNET_DATA_TEST_PATH) throw(std::runtime_error);
CnetImage load_image_from_file(CnetString filename,const char * dataPath=CNET_DATA_TEST_PATH) throw(std::runtime_error);

#endif
