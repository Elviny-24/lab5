#include "stdafx.h"
#include "Assay.h"
#include <iostream>

using namespace std;

assay::assay()
{ 
	/*cout << "Вызывается конструктор телевизионной программы(базовый класс)" << endl;*/
}
void assay::settime(char *time)
{
	this->time = time;
}
void assay::gettime()
{
	cout << "Кол-во вопросов: " << this->time << endl;
}
void assay::setname(char* name)
{
	this->name = name;
}
void assay::getname()
{
	cout << "Предмет: " << this->name << endl;
}
assay::~assay()
{

}
void assay::toConsole()
{
	cout << typeid(this).name() << endl;
	this->show();
	
}

void assay::show()
{
	this->getname();
	this->gettime();

}

//void assay::getcounter(){
//		cout<<counter<<endl;
//
//}