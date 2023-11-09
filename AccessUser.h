#pragma once
#include "IUser.h"
class AccessUser :  public IUser
{
public:
	AccessUser();
	virtual ~AccessUser();

	virtual void Insert(const User& user) override;
	virtual User GetUser(int id) override;
};

