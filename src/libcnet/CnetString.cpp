/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetString.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetString::CnetString(void)
{
	this->init();
}

CnetString::CnetString(const CnetString & value)
{
	this->init(value.str,value.size);
}

CnetString::CnetString(const char * value)
{
	if (value==NULL)
		this->init();
	else
		this->init(value,strlen(value));
}

CnetString::CnetString(const std::string & value)
{
	this->init(value.c_str(),value.size());
}

/*******************************************
               DESTRUCTEUR
*******************************************/
CnetString::~CnetString(void)
{
	if (this->str!=NULL)
		free(this->str);
}

/*******************************************
                 getCStr
*******************************************/
const char * CnetString::getCStr(void) const
{
	return this->str;
}

/*******************************************
                 getSize
*******************************************/
unsigned int CnetString::getSize(void) const
{
	return this->size;
}

/*******************************************
                 getChar
*******************************************/
char CnetString::getChar(unsigned int pos) const
{
	if (pos<this->size)
		return this->str[pos];
	else
		return '\0';
}

/*******************************************
                 getSubStr
*******************************************/
CnetString CnetString::getSubStr(unsigned int begin,unsigned int length) const
{
	//on alloue le resultat
	CnetString res;

	//si on demande plus loin que la taille de la chaine
	if (begin>=this->size)
		return res;

	//on demande trop long
	if (begin+length>=this->size)
		length=this->size-begin;

	//on extrait
	res.set(this->str+begin,length);
	return res;
}

/*******************************************
                   find
*******************************************/
unsigned int CnetString::find(const char *value, bool caseSensible) const throw(CnetNotFoundException,CnetNullPointerException)
{
	//erreur
	if (value==NULL) throw CnetNullPointerException("Impossible de chercher une valeur NULL.");
	//trivial
	if (*value=='\0') throw CnetNotFoundException();

	const unsigned int valueSize = strlen(value);
	for (unsigned int i=0;i<this->size-valueSize;i++)
	{
		if (compare(value,valueSize,this->str+i,valueSize,caseSensible))
			return i;	
	}
	
	//non trouvé
	throw CnetNotFoundException();
}

unsigned int CnetString::find(const CnetString & value, bool caseSensible) const throw(CnetNotFoundException,CnetNullPointerException)
{
	return this->find(value.str,caseSensible);
}

/*******************************************
                   add
*******************************************/
void CnetString::add(const char * value,int size)
{
	//on traite le cas ou on s'ajoute à soit même.
	//ATTENTION sans cette ligne on lit potentiellement dans une mémoire
	//désaloué, on a pas d'erreur comme on est en lecture, mais c'est dangereu
	bool same = (value==this->str);
	
	//alloc
	this->updateMemSize(this->size+size);

	//si sur soit meme on doit mettre à jour le pointeur
	if (same) value=this->str;

	//copy
	this->size+=this->strcopy(value,this->str+this->size,size);
	
}

void CnetString::add(char value)
{
	if (value!='\0')
	{
		this->updateMemSize(this->size+1);
		this->str[this->size++]=value;
		this->str[this->size]='\0';
	}
}
	
/*******************************************
                   set
*******************************************/
void CnetString::set(const char * value,int size)
{
	//erreur
	if (value == NULL || size==0)
	{
		this->updateMemSize(0);
		this->size=0;
		*this->str='\0';
		return;
	}

	//on alloue la mémoire supplémentaire
	this->updateMemSize(size);

	//on copy
	this->size = this->strcopy(value,this->str,size);
	
	//on réduit la mémoire si on a plus besoin de autant
	this->updateMemSize(size,true);
}

/*******************************************
                   init
*******************************************/
void CnetString::init(const char * value,int size)
{
	//erreur
	if (value==NULL)
	{
		value = "";
		size = 0;
	}
	
	this->allocSize = size + 1;
	this->str = (char*)malloc(size+1);
	this->size = this->strcopy(value,this->str,size);
}

/*******************************************
                 updateMemSize
*******************************************/
void CnetString::updateMemSize(unsigned int newSize,bool canReduce)
{
	//on ajoute l'octet de fine de chaine
	newSize++;
	
	if ((newSize<this->allocSize && canReduce) || newSize>this->allocSize)
	{
		this->str = (char * )realloc(this->str,newSize);
		this->allocSize = newSize;
	}
}

/*******************************************
                   strcopy
*******************************************/
unsigned int CnetString::strcopy(const char * source,char * dest,unsigned int size)
{
	//assertions sur les entrées
	assert(dest!=NULL);

	//on traite
	if (source==NULL)
	{
		*dest='\0';
		return 0;
	} else {
		for (unsigned int i=0;i<size;i++)
			dest[i] = source[i];
		dest[size] = '\0';
		return size;
	}
};

/*******************************************
                   min
*******************************************/
char CnetString::min(char c)
{
	if (c>=65 && c<=90)
		return c+32;
	else
		return c;
}

/*******************************************
                   compare
*******************************************/
bool CnetString::compare(const char * value1,unsigned int size1,const char * value2,unsigned int size2,bool caseSensible)
{
	//trivial
	if (value1==value2)
		return true;
	if (size1!=size2)
		return false;
	//erreur
	if (value1==NULL || value2==NULL)
		return false;

	unsigned int i=0;
	if (caseSensible)
		while (value1[i]!='\0' && value1[i]==value2[i] && i<size1) i++;
	else
		while (value1[i]!='\0' && min(value1[i])==min(value2[i]) && i<size1) i++;

	return ((value1[i]=='\0' && value2[i]=='\0') || i==size1);
}

/*******************************************
           INTERNAL OPERATOR =
*******************************************/
CnetString & CnetString::operator = (const CnetString & value)
{
	if (&value!=this)
		this->set(value.str,value.size);
	return *this;
}

CnetString & CnetString::operator = (const char * value)
{
	if (value==NULL)
		this->set(NULL,0);
	else if (value!=this->str)
		this->set(value,strlen(value));
	return *this;
}

/*******************************************
           INTERNAL OPERATOR +=
*******************************************/
CnetString & CnetString::operator += (const CnetString & value)
{
	this->add(value.str,value.size);
	return *this;
}

CnetString & CnetString::operator += (const char * value)
{
	if (value!=NULL)
		this->add(value,strlen(value));
	return *this;
}

CnetString & CnetString::operator += (char value)
{
	this->add(value);
	return *this;
}

/*******************************************
           INTERNAL OPERATOR []
*******************************************/
const char CnetString::operator[] (unsigned int pos) const
{
	if (pos>=size)
		return '\0';
	else
		return this->str[pos];
}

/*******************************************
           EXTERNAL OPERATOR ==
*******************************************/
bool operator == (const CnetString & value1, const CnetString value2)
{
	return CnetString::compare(value1.str,value1.size,value2.str,value2.size);
}

bool operator == (const char * value1, const CnetString value2)
{
	return CnetString::compare(value1,strlen(value1),value2.str,value2.size);
}

bool operator == (const CnetString & value1, const char * value2)
{
	return CnetString::compare(value1.str,value1.size,value2,strlen(value2));
}

/*******************************************
           EXTERNAL OPERATOR !=
*******************************************/
bool operator != (const CnetString & value1, const CnetString value2)
{
	return !CnetString::compare(value1.str,value1.size,value2.str,value2.size);
}

bool operator != (const char * value1, const CnetString value2)
{
	return !CnetString::compare(value1,strlen(value1),value2.str,value2.size);
}

bool operator != (const CnetString & value1, const char * value2)
{
	return !CnetString::compare(value1.str,value1.size,value2,strlen(value2));
}


/*******************************************
           EXTERNAL OPERATOR <<
*******************************************/
std::ostream & operator << (std::ostream & out,const CnetString & value)
{
	out << value.str;
	return out;
}

/*******************************************
           EXTERNAL OPERATOR >>
*******************************************/
std::istream & operator >> (std::istream & in,CnetString & value)
{
	//on utilise la meme convention que string donc on la laisse faire
	std::string buffer;
	in >> buffer;
	value.set(buffer.c_str(),buffer.size());
	return in;
}

/*******************************************
            EXTERNAL OPERATOR +
*******************************************/
CnetString operator + (const CnetString & value1, const CnetString & value2)
{
	CnetString res(value1);
	res.add(value2.str,value2.size);
	return res;
}

CnetString operator + (const char * value1, const CnetString & value2)
{
	CnetString res(value1);
	res.add(value2.str,value2.size);
	return res;
}

CnetString operator + (const CnetString & value1, const char * value2)
{
	CnetString res(value1);
	if (value2!=NULL)
		res.add(value2,strlen(value2));
	return res;
}

CnetString operator + (const CnetString & value1, char value2)
{
	CnetString res(value1);
	res.add(value2);
	return res;
}

CnetString operator + (char value1,const CnetString & value2)
{
	CnetString res;
	res.add(value1);
	res.add(value2.str,value2.size);
	return res;
}
