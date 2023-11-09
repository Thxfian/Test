#pragma once
#include "Calculate.h"
class SubCal :  public Calculate
{
public:
	SubCal();
	virtual ~SubCal();

	virtual double DoCalculate() override;
};

