#include "stdafx.h"

Resume::Resume(int age, std::string name)
	:m_age(age)
	,m_name(name)
{

}

Resume::Resume()
{

}

Resume::~Resume()
{

}

void Resume::SetWorkExperience(int data, int number)
{
	m_work.SetWorkData(data);
	m_work.SetWorkNumber(number);
}

void Resume::PutOutInformation()
{
	std::cout << m_name << ":" << m_age << ":" << m_work.GetWorkData() << ":" << m_work.GetWorkNumber() << std::endl;
}

Resume Resume::clone()
{
	Resume resume;
	resume.m_age = this->m_age;
	resume.m_name = this->m_name;
	resume.m_work = this->m_work;

	return resume;
}
