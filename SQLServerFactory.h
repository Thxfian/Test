#pragma once
#include "IServerFactory.h"
class SQLServerFactory : public IServerFactory
{
public:
	SQLServerFactory();
	virtual ~SQLServerFactory();

	virtual IUser* CreatUserFactor() override;
};

