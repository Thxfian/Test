#include "stdafx.h"

CashOffCal::CashOffCal(double off)
	:m_off(off)
{

}

CashOffCal::~CashOffCal()
{

}

double CashOffCal::SumCash(double price)
{
	return price * m_off;
}
