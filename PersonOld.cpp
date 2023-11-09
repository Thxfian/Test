#include "stdafx.h"
#include "PersonOld.h"
PersonOld::PersonOld(std::string name)
	:m_name(name)
{

}

PersonOld::~PersonOld()
{

}

void PersonOld::DoSport()
{
	cout << "运动" << endl;
}

void PersonOld::DoGame()
{
	cout << "游戏" << endl;
}

void PersonOld::DoWork()
{
	cout << "工作" << endl;
}

void PersonOld::DoStudy()
{
	cout << "学习" << endl;
}
