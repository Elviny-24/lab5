#include "stdafx.h"
#include "zach.h"
#include <iostream>

using namespace std;

Zachet::Zachet()
{
	/*cout << "Вызывается конструктор новостей(производный)" << endl;*/
}
void Zachet::setsort(char* sort)
{
	this->sort = sort;
}
void Zachet::getsort()
{
	cout << "Предмет: " << this->sort << endl;
}
Zachet::~Zachet()
{
	/*cout << "Вызывается деструктор новостей" << endl;*/
}
void Zachet::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
}
void Zachet::show()
{
	this->getsort();
	this->getname();
	this->gettime();
}


void Zachet::setgod(int god)
{
	this->god = god;
}
int Zachet::getGod()
{

	return god;
}
void Zachet::getgod()
{
	cout << "object: : " << this->god << endl;
}


//void Inspector::IkowAllAboutYou(Pechenie& cookis)
//{
//	cout << "\nInspector-Печенье\n";
//	cookis.getCost();
//	cout << "Тип: " << cookis.tip << endl;
//	cout << endl;
//} 

