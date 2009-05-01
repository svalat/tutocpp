/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_EXCEPTIONS_H
#define CNET_EXCEPTIONS_H

#include <string>
#include <exception>

/*******************************************
             CnetException
*******************************************/
class CnetException : public std::exception
{
	public:
		CnetException() throw();
		CnetException(const std::exception & orig)  throw();
		virtual ~CnetException() throw();
		virtual const char* what() const  throw();
	protected:
		std::string message;
};

/*******************************************
          CnetOutOfBoundException
*******************************************/
class CnetOutOfBoundException : public CnetException
{
	public:
		CnetOutOfBoundException(long value,long min,long max)  throw();
		CnetOutOfBoundException(std::string message,long value,long min,long max)  throw();
		long getValue();
		long getMin();
		long getMax();
	protected:
		long value;
		long min;
		long max;
};

/*******************************************
         CnetNullPointerException
*******************************************/
class CnetNullPointerException : public CnetException
{
	public:
		CnetNullPointerException(std::string message);
};

/*******************************************
           CnetNotFoundException
*******************************************/
class CnetNotFoundException : public CnetException
{
	public:
		CnetNotFoundException();
};

#endif
