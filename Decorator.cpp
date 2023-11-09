#include "stdafx.h"

Decorator::Decorator(Person* pPerson)
	:m_pPerson(pPerson)
{

}

Decorator::~Decorator()
{

}

void Decorator::DoBehavior()
{
	if (m_pPerson != nullptr)
	{
		m_pPerson->DoBehavior();
	}
}
