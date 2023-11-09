#include "stdafx.h"
CashStrategy::CashStrategy(std::string cashType)
{
	m_pCashCal = nullptr;
	if (cashType == "´ò°ËÕÛ")
	{
		m_pCashCal = new CashOffCal(0.8);
	}
	else if (cashType == "Âú500·µ100")
	{
		m_pCashCal = new CashReturnCal(500, 100);
	}
	else if (cashType == "Õý³£")
	{
		m_pCashCal = new CashNormalCal();
	}
}

CashStrategy::~CashStrategy()
{

}

double CashStrategy::GetCashSum(double price)
{
	double actualPrice = 0.0;
	if (m_pCashCal != nullptr)
	{
		actualPrice = m_pCashCal->SumCash(price);
	}
	return actualPrice;
}
