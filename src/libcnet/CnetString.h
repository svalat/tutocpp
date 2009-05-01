/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_STRING_H
#define CNET_STRING_H

#include "CnetExceptions.h"
#include <stdlib.h>
#include <iostream>


class CnetString
{
	public:
		CnetString(void);//tested
		CnetString(const CnetString & value);//tested
		CnetString(const char * value);//tested
		CnetString(const std::string & value);//tested
		virtual ~CnetString(void);
		const char * getCStr(void) const;//tested
		unsigned int getSize(void) const;//tested
		char getChar(unsigned int pos) const;//tested
		CnetString getSubStr(unsigned int begin,unsigned int length) const;//tested
		//OPTIONNEL
		unsigned int find(const char * value, bool caseSensible=true) const throw(CnetNotFoundException,CnetNullPointerException);//tested
		unsigned int find(const CnetString & value, bool caseSensible=true) const throw(CnetNotFoundException,CnetNullPointerException);//tested

		//operateurs internes
		CnetString & operator = (const CnetString & value);//tested
		CnetString & operator = (const char * value);//tested
		CnetString & operator += (const CnetString & value);
		CnetString & operator += (const char * value);
		CnetString & operator += (char value);
		const char operator[] (unsigned int pos) const;
		//operateur externes
		friend bool operator == (const CnetString & value1, const CnetString value2);//tested
		friend bool operator == (const char * value1, const CnetString value2);//tested
		friend bool operator == (const CnetString & value1, const char * value2);//tested
		friend bool operator != (const CnetString & value1, const CnetString value2);//tested
		friend bool operator != (const char * value1, const CnetString value2);//tested
		friend bool operator != (const CnetString & value1, const char * value2);//tested
		friend CnetString operator + (const CnetString & value1, const CnetString & value2);//tested
		friend CnetString operator + (const char * value1, const CnetString & value2);//tested
		friend CnetString operator + (const CnetString & value1, const char * value2);//tested
		friend CnetString operator + (const CnetString & value1, char value2);
		friend CnetString operator + (char value1,const CnetString & value2);
		friend std::ostream & operator << (std::ostream & out,const CnetString & value);//ok
		friend std::istream & operator >> (std::istream & in,CnetString & value);
	protected:
		void add(const char * value,int size);//ok
		void add(char value);//ok
		void set(const char * value,int size);//ok
	private:
		/** Taille de la chaine de caractère (sans compter le caractère \\0). **/
		unsigned int size;
		/** Taille de la mémoire allouée à la chaine de caractère. **/
		unsigned int allocSize;
		/** Pointeur vers l'espace de stockage de la chaine de catactère. **/
		char * str;

		void init(const char * value=NULL,int size=0);//ok
		void updateMemSize(unsigned int newSize,bool canRedure=false);//ok

		//helpers functions
		static unsigned int strcopy(const char * source,char * dest,unsigned int size);//ok
		static char min(char c);//ok
		static bool compare(const char * value1,unsigned int size1,const char * value2,unsigned int size2,bool caseSensible=true);//ok
};

#endif
