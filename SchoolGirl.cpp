#include "stdafx.h"

SchoolGirl::SchoolGirl(std::string name)
	:m_name(name)
{

}

SchoolGirl::~SchoolGirl()
{

}

std::string SchoolGirl::GetName() const
{
	return m_name;
}
