#pragma once
#include "IFactory.h"
class SubFactory : public IFactory
{
public:
	SubFactory();
	virtual ~SubFactory();

	virtual Calculate* CreatCalByFactory() override;
};

