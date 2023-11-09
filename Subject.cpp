#include "stdafx.h"

Subject::Subject()
{

}

Subject::~Subject()
{

}

void Subject::Attach(Observer* pObserver)
{
	setObserver.insert(pObserver);
}

void Subject::Detach(Observer* pObserver)
{
	auto iter = setObserver.find(pObserver);
	if (iter != setObserver.end())
	{
		setObserver.erase(iter);
	}
}

void Subject::Notify()
{
	for (auto iter = setObserver.begin(); iter != setObserver.end(); iter++)
	{
		const_cast<Observer*>(*iter)->Update();
	}
}

void Subject::SetMessage(std::string message)
{
	m_message = message;
}
