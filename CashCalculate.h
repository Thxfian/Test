#pragma once
class CashCalculate
{
public:
	CashCalculate();
	virtual ~CashCalculate();

	virtual double SumCash(double price) = 0;
};

