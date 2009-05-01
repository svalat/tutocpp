/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_LIST_H
#define CNET_LIST_H

template <class T> struct CnetListElement;
template <class T> class CnetList;

#include "CnetExceptions.h"
#include "CnetListIterator.h"

template <class T>
struct CnetListElement
{
	T * value;
	CnetListElement<T> * next;
	CnetListElement<T> * prev;
};

template <class T>
class CnetList
{
	public:
		CnetList();
		CnetList(const CnetList & list);
		virtual ~CnetList();
		void add(const T & value);
		unsigned int getSize() const;
		void remove(unsigned int index)  throw (CnetOutOfBoundException);
		void removeValue(const T & value) throw (CnetNotFoundException);
		T & operator[](unsigned int index) throw (CnetOutOfBoundException);
		Iterator<T> begin();
		Iterator<T> rbegin();
		Iterator<T> end();
		void clear();

		typedef Iterator<T> iterator;
	private:
		void init();
		CnetListElement<T> * getElement(unsigned int index) throw (CnetOutOfBoundException);
		void removeElement(CnetListElement<T> * element);
		CnetListElement<T> first;
		unsigned int size;
};

#include "CnetListImpl.h"
#include "CnetListIteratorImpl.h"

#endif

