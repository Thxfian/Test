#pragma once
#include "Observer.h"
#include <set>
#include <iostream>
class Subject
{
public:
	Subject();
	virtual ~Subject();

	void Attach(Observer* pObserver);
	void Detach(Observer* pObserver);

	virtual void Notify();
	void SetMessage(std::string message);
protected:
	std::string m_message;

private:
	std::set<Observer*> setObserver;

};

