#include "stdafx.h"
#include "exam.h"
#include <iostream>

using namespace std;

exam::exam()
{
	/*cout << "Вызывается конструктор фильма(производный)" << endl;*/
}
void exam::setgenre(char* genre)
{
	this->genre = genre;
}
void  exam::getgenre()
{
	cout << "type: " << this->genre << endl;

}
void exam::setgod(int god)
{
	this->god = god;
}
int exam::getGod()
{

	return god;
}
void exam::getgod()
{
	cout << "Questions : " << this->god << endl;

	cout<<"---------------"<<endl;
}
exam::~exam()
{
	
}

void exam::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}
void exam::show()
{
	this->getgenre();
	this->getname();
	this->gettime();
	this->getgod();
}
