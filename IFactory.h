#pragma once
#include "Calculate.h"
class IFactory
{
public:
	IFactory();
	virtual ~IFactory();

	virtual Calculate* CreatCalByFactory() = 0;
};

