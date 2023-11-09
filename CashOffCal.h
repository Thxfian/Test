#pragma once
#include "CashCalculate.h"
class CashOffCal :  public CashCalculate
{
public:
	CashOffCal(double off);
	virtual ~CashOffCal();

	virtual double SumCash(double price);

private:
	double m_off;
};

