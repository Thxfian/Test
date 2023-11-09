#include "stdafx.h"

CashReturnCal::CashReturnCal(int total, int back)
	:m_iTotal(total)
	,m_iBack(back)
{

}

CashReturnCal::~CashReturnCal()
{

}

double CashReturnCal::SumCash(double price)
{
	double sumCash = 0;
	if (m_iTotal == 0)
	{
		sumCash = price;
	}
	else
	{
		double rate = double(m_iTotal - m_iBack) / double(m_iTotal);
		sumCash = price * rate;
	}
	return sumCash;
}
