#pragma once 
#include "Assay.h"
class exam: public assay
{ 
	char* genre;
	int god;
public:
	exam();
	void setgenre(char* genre);
	void getgenre();
	void setgod(int god);
	void getgod();
	int getGod();
	~exam();
	void show();
	void toConsole();
	

};