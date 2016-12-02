#include "stdafx.h"
#include <iostream>
#include "Assay.h"
#include "test.h"
#include "exam.h"
#include "zach.h"
#include "Asbtract.h"
#include "List.h"
using namespace std;
class Printer
{
public:
	void iAmPrinting(abst* s)
	{
		cout << typeid(s).name()<< endl;
		s->toConsole();
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	char found;
	List Ls;
	assay i;
	//i.setgenre("Methematic");
	i.setname("OOP");
	i.settime("22.09.16");

	assay w;
	w.setname("Programm");
	w.settime("10.09.16");
	Ls.insert(&w);
	Ls.ListPrint();
	cout << "**********" << endl;
	Ls.insert(&i);
	Ls.ListPrint();
	cout << "**********" << endl;
	Ls.del_el(1);
	Ls.ListPrint();
	cout << "**********" << endl;
	Ls.get(1);
	Ls.del_all();
	Ls.ListPrint();
	cout << "**********" << endl<<endl;

	cout<<"||||ENTER NEW OBJECTS||||"<<endl;

	exam y;
	y.setgenre("Finale");
	y.setgod(20);
	y.setname("OOP ");
	y.settime("10.06.16");
	exam n;
	n.setgenre("zachet");
	n.setgod(50);
	n.setname("English");
	n.settime("14.09.16");
	test k;
	k.setgenre("final exam");
	k.setgod(20);
	k.setname("Networks");
	k.settime("10.10.10");
	exam r;
	r.setgenre("final exam");
	r.setgod(10);
	r.setname("Design");
	r.settime("12");
	Ls.insert(&y);
	Ls.insert(&n);
	Ls.insert(&k);
	Ls.insert(&r);
		
	Ls.ListPrint();
	cout << "|||||||||||||WORK WITH OBJECTS||||||||||||" << endl;
	Kontroller l;
	l.poisk(Ls, 20);
	cin>>found;
	l.poiskObj(Ls,found);

}