#pragma once
#include "CashCalculate.h"
class CashNormalCal : public CashCalculate
{
public:
	CashNormalCal();
	virtual ~CashNormalCal();

	virtual double SumCash(double price);
};

