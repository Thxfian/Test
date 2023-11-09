#pragma once
class State;

class Work
{
public:
	Work();
	virtual ~Work();

	DESIGNPATTERNSETGET(int, WorkHour, m_hour);
	DESIGNPATTERNSETGET(bool, WorkFinshed, m_finshed);

	void OutPutWorkState();
private:
	int m_hour;
	bool m_finshed;
	State *m_pState;
};
