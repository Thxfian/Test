#pragma once
#include "Person.h"
class Decorator :  public Person
{
public:
	Decorator(Person* pPerson);
	virtual ~Decorator();

	void DoBehavior() override;
private:
	Person* m_pPerson;
};

