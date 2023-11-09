#pragma once
#include <string>
#include "Calculate.h"
class CalCulateFactory
{
public:
	static Calculate* CreatCalculate(std::string symbol);
};

