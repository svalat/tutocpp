/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_LIST_ITERATOR_H
#define CNET_LIST_ITERATOR_H

template <class T> class Iterator;

#include "CnetList.h"

template <class T>
class Iterator
{
	public:
		Iterator(CnetListElement<T> * element);
		T *operator->();
		T &operator*();
		Iterator<T> & operator++();
		Iterator<T> & operator--();

		template <class U> friend bool operator==(const Iterator<U> & a,const Iterator<U> & b);
		template <class U> friend bool operator!=(const Iterator<U> & a,const Iterator<U> & b);
	private:
		CnetListElement<T> * element;
};

#endif
