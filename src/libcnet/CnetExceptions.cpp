/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetExceptions.h"
#include <stdio.h>

/*******************************************
          CLASS CnetException
*******************************************/
CnetException::CnetException() throw()
{
}

CnetException::CnetException(const std::exception & orig)  throw()
{
	this->message=orig.what();
}

CnetException::~CnetException() throw()
{
}

const char* CnetException::what() const  throw()
{
	return this->message.c_str();
}

/*******************************************
          CLASS CnetOutOfBoundException
*******************************************/
CnetOutOfBoundException::CnetOutOfBoundException(long value,long min,long max)  throw()
{
	char buffer[1024];
	sprintf(buffer,"Valeur en dehors des interval autorisée : %li [ %li , %li ].",value,min,max);
	this->message=buffer;
}

CnetOutOfBoundException::CnetOutOfBoundException(std::string message,long value,long min,long max)  throw()
{
	char buffer[1024];
	sprintf(buffer,"Valeur en dehors des interval autorisée : %li [ %li , %li ].",value,min,max);
	this->message=message+" "+buffer;
}

long CnetOutOfBoundException::getValue() { return this->value; }
long CnetOutOfBoundException::getMin() { return this->min; }
long CnetOutOfBoundException::getMax() { return this->max; }


/*******************************************
          CLASS CnetNullPointerException
*******************************************/
CnetNullPointerException::CnetNullPointerException(std::string message)
{
	this->message=message;
}

/*******************************************
          CLASS CnetNotFoundException
*******************************************/
CnetNotFoundException::CnetNotFoundException()
{
	this->message="Impossible de trouver la valeur demandée.";
}
