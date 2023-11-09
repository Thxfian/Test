#pragma once
#include "GiveGift.h"
#include "Pursite.h"
class Proxy : public GiveGift
{
public:
	Proxy(const Pursite& pursite);
	virtual ~Proxy();

	virtual void GiveDolls() override;
	virtual void GiveFlowers() override;
	virtual void GiveChocolate() override;

private:
	Pursite m_realPursite;

};

