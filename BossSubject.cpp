#include "stdafx.h"

BossSubject::BossSubject()
{

}

BossSubject::~BossSubject()
{

}

void BossSubject::Notify()
{
	cout << "全体人员，会议室开会" << endl;
	Subject::Notify();
}
