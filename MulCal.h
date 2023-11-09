#pragma once
#include "Calculate.h"
class MulCal :  public Calculate
{
public:
	MulCal();
	virtual ~MulCal();

	virtual double DoCalculate() override;
};

