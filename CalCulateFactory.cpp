#include "stdafx.h"

Calculate* CalCulateFactory::CreatCalculate(std::string symbol)
{
	Calculate* pCal = nullptr;
	if (symbol == "+")
	{
		pCal = new AddCal();
	}
	else if (symbol == "-")
	{
		pCal = new SubCal();
	}
	else if (symbol == "*")
	{
		pCal = new MulCal();
	}
	else if (symbol == "/")
	{
		pCal = new DivCal();
	}

	return pCal;
}
