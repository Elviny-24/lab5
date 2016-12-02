#pragma once 
#include "Asbtract.h"
class assay:virtual public abst
{  
	char* time;
	char* name;
	 static int counter;
	
public:
	assay();
	void settime(char* time);
    void gettime();
	int getTime(){ return *time; }
	void setname(char* name);
	void getname();
	~assay();
	void show();
	void toConsole();
	bool isreclam(){ return false; }
	int getGod(){ return 0; }
	char getName(){return *name;}
//	void getcounter();
};