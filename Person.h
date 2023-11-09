#pragma once
class Person
{
public:
	Person();
	virtual ~Person();

	virtual void DoBehavior() = 0;
};

