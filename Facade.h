#pragma once
#include "MethodOne.h"
#include "MethodTwo.h"
#include "MethodThree.h"

class Facade
{
public:
	Facade();
	~Facade();

	void DoFirstMethod();
	void DoSecondMethod();


private:
	MethodOne m_methOne;
	MethodTwo m_methTwo;
	MethodThree m_methThree;
};

