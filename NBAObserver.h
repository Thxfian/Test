#pragma once
#include "Observer.h"
#include <iostream>
class NBAObserver :  public Observer
{
public:
	NBAObserver(std::string name);
	virtual ~NBAObserver();
	void Update() override;
private:
	std::string m_name;
};

