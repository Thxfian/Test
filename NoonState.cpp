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
		cout << currHour << "���繤��" << endl;
	}
	else
	{
		cout << currHour << "���繤��" << endl;
	}
}
