#include "stdafx.h"

Facade::Facade()
{

}

Facade::~Facade()
{

}

void Facade::DoFirstMethod()
{
	m_methOne.DoMethodOne();
	m_methTwo.DoMethodTwo();
}

void Facade::DoSecondMethod()
{
	m_methTwo.DoMethodTwo();
	m_methThree.DoMethodThree();
}
