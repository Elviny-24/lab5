#pragma once
class abst//нельзя создавать обекты абстрактного класса
{
public:
	abst(){}
	virtual ~abst(){}
	virtual void  show() = 0;
	virtual void  toConsole() = 0;
	virtual bool isreclam()=0;
	virtual int getGod() = 0;
	virtual int getTime() = 0;
	virtual char getName()=0;
};
