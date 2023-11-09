#pragma once
#include "stdafx.h"
#include "WorkExperience.h"
class Resume
{
public:
	Resume(int age, std::string name);
	Resume();
	~Resume();

	void SetWorkExperience(int data, int number);
	void PutOutInformation();

	Resume clone();

private:
	WorkExperience m_work;
	int m_age;
	std::string m_name;
};

