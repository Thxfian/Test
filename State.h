#pragma once
class Work;
class State
{
public:
	State();
	virtual ~State();

	virtual void OutPutState(const Work& work) { };

};

