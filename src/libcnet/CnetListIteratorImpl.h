/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetList.h"

/*******************************************
             CONSTRUCTEUR
*******************************************/
template <class T>
Iterator<T>::Iterator(CnetListElement<T> * element)
{
	this->element = element;
}

/*******************************************
            operator->
*******************************************/
template <class T>
T * Iterator<T>::operator->()
{
	return this->element->value;
}

/*******************************************
             operator*
*******************************************/
template <class T>
T & Iterator<T>::operator*()
{
	return *this->element->value;
}

/*******************************************
            operator++
*******************************************/
template <class T>
Iterator<T> & Iterator<T>::operator++()
{
	if (this->element->value!=NULL)
		this->element = this->element->next;
	return *this;
}

/*******************************************
            operator--
*******************************************/
template <class T>
Iterator<T> & Iterator<T>::operator--()
{
	if (this->element->value!=NULL)
		this->element = this->element->prev;
	return *this;
}

/*******************************************
            EXTERNAL operator==
*******************************************/
template <class U>
bool operator==(const Iterator<U> & a,const Iterator<U> & b)
{
	return a.element == b.element;
}

/*******************************************
            EXTERNAL operator!=
*******************************************/
template <class U>
bool operator!=(const Iterator<U> & a,const Iterator<U> & b)
{
	return a.element != b.element;
}
