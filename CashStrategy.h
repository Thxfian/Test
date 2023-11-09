#pragma once
#include <string>
#include "CashCalculate.h"
class CashStrategy
{
public:
	CashStrategy(std::string cashType);
	~CashStrategy();

	double GetCashSum(double price);

private:
	CashCalculate* m_pCashCal;
};

