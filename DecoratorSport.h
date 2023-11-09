#pragma once
#include "Decorator.h"
class DecoratorSport :  public Decorator
{
public:
	DecoratorSport(Person* pPerson);
	virtual ~DecoratorSport();

	void DoBehavior() override;
};

