#pragma once
#include "Decorator.h"
class DecoratorGame :  public Decorator
{
public:
	DecoratorGame(Person* pPerson);
	virtual ~DecoratorGame();

	void DoBehavior() override;
};

