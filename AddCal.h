#pragma once
#include "Calculate.h"
class AddCal : public Calculate
{
public:
	AddCal();
	virtual ~AddCal();

	virtual double DoCalculate() override;
};

