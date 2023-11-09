#include "stdafx.h"


NoonState::NoonState()
{

}

NoonState::~NoonState()
{

}

void NoonState::OutPutState(const Work& work)
{
	int currHour = const_cast<Work&>(work).GetWorkHour();
	if (currHour < 14)
	{
		cout << currHour << "中午工作" << endl;
	}
	else
	{
		cout << currHour << "下午工作" << endl;
	}
}
