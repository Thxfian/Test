#include "stdafx.h"

MorningState::MorningState()
{

}

MorningState::~MorningState()
{

}

void MorningState::OutPutState(const Work& work)
{
	int currHour = const_cast<Work&>(work).GetWorkHour();
	if (currHour < 12)
	{
		cout << currHour << "ÉÏÎç¹¤×÷" << endl;
	}
	else
	{
		State *pNextState = new NoonState();
		pNextState->OutPutState(work);
		if (pNextState != nullptr)
		{
			delete pNextState;
			pNextState = nullptr;
		}
	}
	
}
