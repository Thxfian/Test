#include "stdafx.h"

User::User()
	:m_name("James")
	,m_age(39)
{
	
}

User::User(std::string name, int age)
	:m_name(name)
	,m_age(age)
{

}

User::~User()
{

}

std::string User::GetName()
{
	return m_name;
}

int User::GetAge()
{
	return m_age;
}
