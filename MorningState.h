#pragma once
class MorningState : public State
{
public:
	MorningState();
	virtual ~MorningState();

	virtual void OutPutState(const Work& work);
};

