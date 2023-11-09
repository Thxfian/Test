#pragma once
#include "IFactory.h"
class MulFactory : public IFactory
{
public:
	MulFactory();
	virtual ~MulFactory();

	virtual Calculate* CreatCalByFactory() override;
};

