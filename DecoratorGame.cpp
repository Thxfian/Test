#include "stdafx.h"
#include "DecoratorGame.h"
DecoratorGame::DecoratorGame(Person* pPerson)
	:Decorator(pPerson)
{

}

DecoratorGame::~DecoratorGame()
{

}

void DecoratorGame::DoBehavior()
{
	Decorator::DoBehavior();
	//������Ϊ
	cout << "��Ϸ" << endl;
}
