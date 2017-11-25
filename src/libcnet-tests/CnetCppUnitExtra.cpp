/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetCppUnitExtra.h"
#include <cstdio>
#include <cstring>

namespace CppUnit{


void assertEquals( const char * expected,const CnetString & actual,CppUnit::SourceLine sourceLine,const std::string &message )
{
	if ( strcmp(expected,actual.getCStr( ))!=0) // lazy toString conversion...
	{
		Asserter::failNotEqual( assertion_traits<const char *>::toString(expected),
		                        assertion_traits<CnetString>::toString(actual),
		                        sourceLine,
		                        message );
	}
}

void assertEquals( const char * expected,const std::string & actual,CppUnit::SourceLine sourceLine,const std::string &message )
{
	if ( actual!=expected) // lazy toString conversion...
	{
		Asserter::failNotEqual( assertion_traits<const char *>::toString(expected),
								assertion_traits<CnetString>::toString(actual),
										sourceLine,
		  message );
	}
}

void assertEquals( int expected,unsigned int actual,SourceLine sourceLine,const std::string &message )
{
	if ( (unsigned int)expected!=actual) // lazy toString conversion...
	{
		Asserter::failNotEqual( assertion_traits<int>::toString(expected),
		                        assertion_traits<unsigned int>::toString(actual),
		                        sourceLine,
		                        message );
	}
}

void assertEquals( CnetColor expected,CnetColor actual,SourceLine sourceLine,const std::string &message )
{
	if ( expected!=actual) // lazy toString conversion...
	{
		char expectedString[32];
		sprintf(expectedString,"%02x",((unsigned int)expected));
		char actualString[32];
		sprintf(actualString,"%02x",((unsigned int)actual));
		Asserter::failNotEqual( expectedString,
		                        actualString,
		                        sourceLine,
		                        message );
	}
}

void assertEquals( const CnetImage expected, const CnetImage actual,SourceLine sourceLine,const std::string &message )
{
	if ( expected!=actual) // lazy toString conversion...
	{
		Asserter::failNotEqual( ("\n"+expected.toAscii(true)).getCStr(),
                                ("\n"+actual.toAscii(true)).getCStr(),
		                        sourceLine,
		                        message );
	}
}

};


void save_image_to_file(const CnetImage & image,CnetString filename,bool verbose,const char * dataPath) throw(std::runtime_error)
{
	if (CNET_TEST_IMAGE_VERBOSE_SAVE) verbose=true;
	filename=dataPath+CnetString("/")+filename;
	if (verbose) printf("\nSaving image to %s\n",filename.getCStr());
	if (verbose) printf(image.toAscii(true).getCStr());
	FILE * fp = fopen(filename.getCStr(),"w");
	if (fp==NULL) throw std::runtime_error("Erreur à l'ouverture du fichier pour la sauvegarde.");
	fprintf(fp,"CNET_IMAGE_BINARY_SAVE\n%i,%i\n",image.getWidth(),image.getHeight());
	unsigned char buffer[image.getWidth()*image.getHeight()];
	unsigned int i=0;
	for (unsigned int x=0;x<image.getWidth();x++)
	{
		for (unsigned int y=0;y<image.getHeight();y++)
			buffer[i++]=image.getPixel(x,y);
	}
	fwrite(buffer,sizeof(unsigned char),image.getWidth()*image.getHeight(),fp);
	fclose(fp);
}

CnetImage load_image_from_file(CnetString filename,const char * dataPath) throw(std::runtime_error)
{
	filename=dataPath+CnetString("/")+filename;
	if (CNET_TEST_IMAGE_VERBOSE_LOAD) printf("\nLoading image to %s\n",filename.getCStr());
	
	FILE * fp = fopen(filename.getCStr(),"r");
	if (fp==NULL) throw std::runtime_error("Erreur à l'ouverture du fichier pour le chargement.");
	
	unsigned int width,height;
	fscanf(fp,"CNET_IMAGE_BINARY_SAVE\n%i,%i\n",&width,&height);
	unsigned char buffer[width*height];
	if (fread(buffer,sizeof(unsigned char),width*height,fp) != width*height)
		throw std::runtime_error("Taille de fichier incorrect au chargement de l'image.");

	CnetImage image(width,height);
	fclose(fp);
	
	unsigned int i=0;
	for (unsigned int x=0;x<width;x++)
	{
		for (unsigned int y=0;y<height;y++)
			image.setPixel(x,y,buffer[i++]);
	}

	
	if (CNET_TEST_IMAGE_VERBOSE_LOAD) printf(image.toAscii(true).getCStr());
	return image;
}
