#pragma once
#include "User.h"
class IUser
{
public:
	IUser();
	virtual ~IUser();

	virtual void Insert(const User& user) {};
	virtual User GetUser(int id);

};

