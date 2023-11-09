#include "stdafx.h"

WorkExperience::WorkExperience()
{

}

WorkExperience::~WorkExperience()
{

}

void WorkExperience::SetWorkData(int data)
{
	m_data = data;
}

int WorkExperience::GetWorkData()
{
	return m_data;
}

void WorkExperience::SetWorkNumber(int number)
{
	m_number = number;
}

int WorkExperience::GetWorkNumber()
{
	return m_number;
}
