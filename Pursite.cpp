#include "stdafx.h"
#include "Pursite.h"

Pursite::Pursite(const SchoolGirl& girl, std::string name)
	: m_girl(girl)
	, m_name(name)
{

}

Pursite::~Pursite()
{

}

void Pursite::GiveDolls()
{
	cout << m_name + "�͸�" + m_girl.GetName() + "������" << endl;
}

void Pursite::GiveFlowers()
{
	cout << m_name + "�͸�" + m_girl.GetName() + "�ʻ�" << endl;
}

void Pursite::GiveChocolate()
{
	cout << m_name + "�͸�" + m_girl.GetName() + "�ɿ���" << endl;
}
