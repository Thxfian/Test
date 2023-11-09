#pragma once
#include <iostream>
class User
{
public:
	User();
	User(std::string name, int age);
	virtual ~User();

	std::string GetName();
	int GetAge();

private:
	int m_age;
	std::string m_name;
};

