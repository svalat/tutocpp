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
#include <stdlib.h>

/*******************************************
             CONSTRUCTEUR
*******************************************/
template <class T>
CnetList<T>::CnetList()
{
	this->init();
}

template <class T>
CnetList<T>::CnetList(const CnetList<T> & list)
{
	this->init();
	CnetListElement<T> * el = list.first.next;
	while (el!=&list.first)
	{
		this->add(*(el->value));
		el=el->next;
	}
}

/*******************************************
             DESTRUCTEUR
*******************************************/
template <class T>
CnetList<T>::~CnetList()
{
	this->clear();
}

/*******************************************
                 init
*******************************************/
template <class T>
void CnetList<T>::init()
{
	this->first.value=NULL;
	this->first.next=&this->first;
	this->first.prev=&this->first;
	this->size=0;
}

/*******************************************
                 clear
*******************************************/
template <class T>
void CnetList<T>::clear()
{
	while (this->first.next!=&this->first)
		this->removeElement(this->first.next);

	this->size = 0;
}

/*******************************************
                add
*******************************************/
template <class T>
void CnetList<T>::add(const T & value)
{
	CnetListElement<T> * el = new CnetListElement<T>;
	el->value = new T(value);
	el->next = &this->first;
	el->prev = this->first.prev;
	this->first.prev->next = el;
	this->first.prev = el;

	this->size++;
}

/*******************************************
             getSize
*******************************************/
template <class T>
unsigned int CnetList<T>::getSize() const
{
	return this->size;
}

/*******************************************
             operator[]
*******************************************/
template <class T>
T & CnetList<T>::operator[](unsigned int index) throw (CnetOutOfBoundException)
{
	return *this->getElement(index)->value;
}

/*******************************************
             getElement
*******************************************/
template <class T>
CnetListElement<T> * CnetList<T>::getElement(unsigned int index) throw (CnetOutOfBoundException)
{
	if (index>=this->size)
		throw CnetOutOfBoundException(0,this->size,index);

	unsigned int i=0;
	CnetListElement<T> * res = this->first.next;
	while (i<index && res!=&this->first)
	{
		res=res->next;
		i++;
	}

	if (res==&this->first)
		return NULL;
	else
		return res;
}

/*******************************************
             remove
*******************************************/
template <class T>
void CnetList<T>::remove(unsigned int index)  throw (CnetOutOfBoundException)
{
	if (index>=this->size)
		throw CnetOutOfBoundException(0,this->size,index);

	this->removeElement(this->getElement(index));
}

/*******************************************
             removeElement
*******************************************/
template <class T>
void CnetList<T>::removeElement(CnetListElement<T> * element)
{
	if (element == NULL || element == &this->first)
		return;

	//on debranche
	element->prev->next = element->next;
	element->next->prev = element->prev;

	//on libère la mémoire
	delete element->value;
	delete element;

	//on décompte
	this->size--;
}

/*******************************************
             removeValue
*******************************************/
template <class T>
void CnetList<T>::removeValue(const T & value)  throw (CnetNotFoundException)
{
	CnetListElement<T> * el = this->first.next;
	while (el != &this->first)
	{
		if (*el->value == value)
		{
			this->removeElement(el);
			return;
		}
		el = el->next;
	}

	//on a pas trouvé
	throw CnetNotFoundException();
}

/*******************************************
             begin
*******************************************/
template <class T>
Iterator<T> CnetList<T>::begin()
{
	Iterator<T> it(this->first.next);
	return it;
}

/*******************************************
             rbegin
*******************************************/
template <class T>
Iterator<T> CnetList<T>::rbegin()
{
	Iterator<T> it(this->first.prev);
	return it;
}

/*******************************************
             end
*******************************************/
template <class T>
		Iterator<T> CnetList<T>::end()
{
	Iterator<T> it(&this->first);
	return it;
}
