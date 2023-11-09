#pragma once
#include "IUser.h"
class IServerFactory
{
public:
	IServerFactory();
	virtual ~IServerFactory();

	virtual IUser* CreatUserFactor() = 0;
};

