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
	//新增行为
	cout << "游戏" << endl;
}
