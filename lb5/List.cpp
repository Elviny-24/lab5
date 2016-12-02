#include "stdafx.h"
#include "List.h"
#include"exam.h"
#include <iostream>
#include "Assay.h"
#include "string.h"

using namespace std;

int List::prodol = 0;
int List::count=0;


List::List()
{
	head = NULL;
}
List::~List()
{
	obj* e;
	while (head!=NULL)
	{
		e = head;
		head = head->next;
		delete[]e;
	}
}

void List::insert(abst* gog)
{

	obj* e = new obj(NULL, gog);
	count++;
	prodol+=e->data->getTime();

	if (head == NULL)
	{
		head = e;
	}
	else
	{
		obj* el = head;
		while (el->next != NULL)
			el = el->next;
		el->next = e;
	}

}

void List::ListPrint()
{cout<<"Amount of assays: "<<count<<endl;
	obj* e = head;
	while (e != NULL)
	{
		((abst*)e->getdata())->show();
		e = e->next;
	}
}

void List::set(abst* ej,int t)
{
	int k = 1;
	obj* e = head;
	if (head != NULL)
	{
		while (e->next != NULL && k<t)
		{
			k++;
			e = e->next;
		}
		if (k == t)
		{
			prodol -= e->data->getTime();
			e->data = ej;
			prodol += e->data->getTime();
		}
		else
		{
			this->insert(ej);
		}

	}

}
void List::get(int t)
{
	obj*e = head; int k = 1;
	while (e != NULL && k<t)
	{
		k++;
		e = e->next;
	}
	if (e != NULL)
	{
		std::cout << "Assay number: " << t << "\n";
		(e->getdata())->show();
	}
	else
	{
		std::cout << "Assay number: " << t << " not found\n";
	}
}  

void List::del_el(int t)
{
	obj*e = head; int k = 1;
	prodol-=e->data->getTime();
	while (e != NULL && k<t)
	{
		k++;
		e = e->next;
	}
	if (e != NULL)
	{
		if (e == head)
		{
			head = head->next;
			if (head != NULL)
			{
				delete[]e;
				count--;
				cout<<"Assay number "<<t<<" was deleted"<<endl<<endl;
			}
		}
		else
		{
			obj* pre = head;   
			while (pre->next != e)
			{
				pre = pre->next;
			}
			if (e->next != NULL)
			{
				pre->next = e->next;
				delete[]e;
				count--;
			}
			else
			{
				pre->next = e->next;
				delete[]e;
			}
		}

	}
}


void List::del_all()
{
	while (head != NULL)
	{
		this->del_el(1);
	}
	count=0;
}

void Kontroller::poisk(List& y,int h)
{
	obj* e =y.head;
	std::cout << "kol-vo " << h << " questions.\n";
	while (e != NULL)
	{
			if ((e->getdata())->getGod() == h)
				(e->getdata())->show();
		e = e->next;
	}
}

void Kontroller::poiskObj(List& y,char h)
{
	obj* e =y.head;
	std::cout << "Object" << h << " found.\n";
	while (e != NULL)
	{ 
			if ((e->getdata())->getName() == h)
				(e->getdata())->show();
		e = e->next;
	}
}






int Kontroller::getvremya()
{
	std::cout << "questions " << List::prodol << std::endl<<std::endl;
	return List::prodol;
}

int Kontroller::getkol(List& list)
{
	int kol=0;
	obj* e = list.head;
	while (e != NULL)
	{
		if ((e->getdata())->isreclam())
			kol++;
		e = e->next;
	}
	return kol;
}
