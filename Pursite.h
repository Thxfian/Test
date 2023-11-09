#pragma once
#include "GiveGift.h"
#include "SchoolGirl.h"
class Pursite : public GiveGift
{
public:
	Pursite(const SchoolGirl& girl, std::string name);
	virtual ~Pursite();

	virtual void GiveDolls() override;
	virtual void GiveFlowers() override;
	virtual void GiveChocolate() override;
private:
	SchoolGirl m_girl;
	std::string m_name;
};

