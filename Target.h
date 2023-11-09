#pragma once
class Target
{
public:
	Target();
	virtual ~Target();

	virtual void SetInfor(int age, string name) = 0;
};

