#pragma once 
#include "Assay.h"
#include <iostream>
using namespace std;

class Zachet : public assay
{
	char* sort;

	int god;
public:
	Zachet();
	void setsort(char* sort);
	void getsort();
		void setgod(int god);
	void getgod();
	int getGod();
	~Zachet();
	void show();
	void toConsole();
};

