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
	//������Ϊ
	cout << "�˶�" << endl;
}
