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
	cout << "�˶�" << endl;
}

void PersonOld::DoGame()
{
	cout << "��Ϸ" << endl;
}

void PersonOld::DoWork()
{
	cout << "����" << endl;
}

void PersonOld::DoStudy()
{
	cout << "ѧϰ" << endl;
}
