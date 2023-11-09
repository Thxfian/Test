#pragma once
#include "Person.h"
class Student : public Person
{
public:
	Student();
	~Student();

	void DoBehavior() override;
};

