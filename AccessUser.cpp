#include "stdafx.h"

AccessUser::AccessUser()
{

}

AccessUser::~AccessUser()
{

}

void AccessUser::Insert(const User& user)
{
	cout << "��Access���ݿ��в���" << const_cast<User&>(user).GetName() << "��¼" << endl;
}

User AccessUser::GetUser(int id)
{
	User user;
	cout << "��Access���ݿ��еõ�IdΪ��" << id << "��¼" << endl;
	return user;
}
