#include "stdafx.h"

BossSubject::BossSubject()
{

}

BossSubject::~BossSubject()
{

}

void BossSubject::Notify()
{
	cout << "ȫ����Ա�������ҿ���" << endl;
	Subject::Notify();
}
