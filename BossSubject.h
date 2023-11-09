#pragma once
#include "Subject.h"
#include <iostream>
class BossSubject :  public Subject
{
public:
	BossSubject();
	virtual ~BossSubject();

	virtual void Notify() override;

};

