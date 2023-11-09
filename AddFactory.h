#pragma once
#include "IFactory.h"
class AddFactory : public IFactory
{
public:
	AddFactory();
	virtual ~AddFactory();

	virtual Calculate* CreatCalByFactory() override;
};

