#pragma once
#include "CashCalculate.h"
class CashReturnCal :  public CashCalculate
{
public:
	CashReturnCal(int total, int back);
	virtual ~CashReturnCal();

	virtual double SumCash(double price);

private:
	int m_iTotal;
	int m_iBack;
};

