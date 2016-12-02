#include "stdafx.h"
#include "test.h"
#include <iostream>
using namespace std;
test::test()
{
	/*cout << "Вызывается конструктор комедий" << endl;*/
}
void test::setOgranich(int ogranyc)
{
	this->ogranich = ogranyc;
}
int test::getOgranich()
{
	cout << "Кол-во вопросов: " << this->ogranich << endl;
	return ogranich;
}
test::~test()
{
	/*cout << "Вызывается деструктор комедий" << endl;*/
}



 