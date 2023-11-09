#pragma once
#include "Calculate.h"
class DivCal : public Calculate
{
public:
	DivCal();
	virtual ~DivCal();

	virtual double DoCalculate() override;
};

