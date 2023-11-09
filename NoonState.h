#pragma once
class NoonState : public State
{
public:
	NoonState();
	virtual ~NoonState();

	virtual void OutPutState(const Work& work);
};

