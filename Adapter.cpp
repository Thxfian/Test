#include "stdafx.h"


Adapter::Adapter()
{
	m_pAdaptee = new Adaptee();
}

Adapter::~Adapter()
{

}

void Adapter::SetAdaptee(Adaptee* pAdaptee)
{
	m_pAdaptee = pAdaptee;
}

void Adapter::SetInfor(int age, string name)
{
	if (m_pAdaptee != nullptr)
	{
		m_pAdaptee->SetExistInfor(name, age);
	}
	
}


