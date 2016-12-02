#pragma once
#include "Asbtract.h"
#include "Assay.h"
class Kontroller;
struct obj
{ 
	friend class Kontroller;
	obj* next;
	abst* data;
	obj(obj*Next,abst*Data)   
	{
		next = Next;
		data = Data;
	}
public:
	abst* getdata()
	{
		return data;
	}
};
class List
{
	friend class Kontroller;
	obj* head;
	static int prodol;
	static char found;
	static int count;
public:
	List();
	~List();
	void set(abst* ,int);
	void get(int);
	void insert(abst*);
	void ListPrint();
	void del_all();
	void del_el(int);
};

class Kontroller
{
public:
	void poisk(List&,int);
	void poiskObj(List&,char);
	int getvremya();
	int getkol(List&);
};

