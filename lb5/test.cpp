#include "stdafx.h"
#include "test.h"
#include <iostream>
using namespace std;
test::test()
{
	/*cout << "���������� ����������� �������" << endl;*/
}
void test::setOgranich(int ogranyc)
{
	this->ogranich = ogranyc;
}
int test::getOgranich()
{
	cout << "���-�� ��������: " << this->ogranich << endl;
	return ogranich;
}
test::~test()
{
	/*cout << "���������� ���������� �������" << endl;*/
}



 