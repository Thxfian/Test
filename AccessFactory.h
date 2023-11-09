#pragma once
#include "IServerFactory.h"
class AccessFactory : public IServerFactory
{
public:
	AccessFactory();
	virtual ~AccessFactory();

	virtual IUser* CreatUserFactor() override;
};

