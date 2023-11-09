#include "stdafx.h"

DivCal::DivCal()
{

}

DivCal::~DivCal()
{

}

double DivCal::DoCalculate()
{
	if (abs(m_SecNum - 0.0))
	{
		return 1e7;
	}
	return m_firNum / m_SecNum;
}
