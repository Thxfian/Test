#include "stdafx.h"

SqlServerUser::SqlServerUser()
{

}

SqlServerUser::~SqlServerUser()
{

}

void SqlServerUser::Insert(const User& user)
{
	cout << "��SQLServer���ݿ��в���" << const_cast<User&>(user).GetName() << "��¼" << endl;
}

User SqlServerUser::GetUser(int id)
{
	User user;
	cout << "��SQLServer���ݿ��еõ�IdΪ��" << id << "��¼" << endl;
	return user;
}
