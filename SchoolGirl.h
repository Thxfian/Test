#pragma once
#include <string>
class SchoolGirl
{
public:
	SchoolGirl(std::string name);
	~SchoolGirl();

	std::string GetName() const;
	
private:
	std::string m_name;
};

