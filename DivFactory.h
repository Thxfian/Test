#pragma once
#include "IFactory.h"
class DivFactory : public IFactory
{
public:
	DivFactory();
	virtual ~DivFactory();

	virtual Calculate* CreatCalByFactory() override;
};

