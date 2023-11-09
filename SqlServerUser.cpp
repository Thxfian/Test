#include "stdafx.h"

SqlServerUser::SqlServerUser()
{

}

SqlServerUser::~SqlServerUser()
{

}

void SqlServerUser::Insert(const User& user)
{
	cout << "在SQLServer数据库中插入" << const_cast<User&>(user).GetName() << "记录" << endl;
}

User SqlServerUser::GetUser(int id)
{
	User user;
	cout << "在SQLServer数据库中得到Id为：" << id << "记录" << endl;
	return user;
}
