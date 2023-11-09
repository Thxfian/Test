#pragma once
#include "IUser.h"
class SqlServerUser :  public IUser
{
public:
	SqlServerUser();
	virtual ~SqlServerUser();

	virtual void Insert(const User& user) override;
	virtual User GetUser(int id) override;
};

