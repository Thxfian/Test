#include "stdafx.h"
#include "DecoratorSport.h"
DecoratorSport::DecoratorSport(Person* pPerson)
	:Decorator(pPerson)
{

}

DecoratorSport::~DecoratorSport()
{

}

void DecoratorSport::DoBehavior()
{
	Decorator::DoBehavior();
	//新增行为
	cout << "运动" << endl;
}
