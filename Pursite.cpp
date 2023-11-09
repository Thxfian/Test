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
	cout << m_name + "送给" + m_girl.GetName() + "洋娃娃" << endl;
}

void Pursite::GiveFlowers()
{
	cout << m_name + "送给" + m_girl.GetName() + "鲜花" << endl;
}

void Pursite::GiveChocolate()
{
	cout << m_name + "送给" + m_girl.GetName() + "巧克力" << endl;
}
