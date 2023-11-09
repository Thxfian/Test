#pragma once
#include <string>
class PersonOld
{
public:
	PersonOld(std::string name);
	~PersonOld();

	void DoSport();
	void DoGame();
	void DoWork();
	void DoStudy();

private:
	std::string m_name;
};

