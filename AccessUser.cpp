#include "stdafx.h"

AccessUser::AccessUser()
{

}

AccessUser::~AccessUser()
{

}

void AccessUser::Insert(const User& user)
{
	cout << "在Access数据库中插入" << const_cast<User&>(user).GetName() << "记录" << endl;
}

User AccessUser::GetUser(int id)
{
	User user;
	cout << "在Access数据库中得到Id为：" << id << "记录" << endl;
	return user;
}
