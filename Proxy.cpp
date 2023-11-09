#include "stdafx.h"

Proxy::Proxy(const Pursite& pursite)
	:m_realPursite(pursite)
{

}

Proxy::~Proxy()
{

}

void Proxy::GiveDolls()
{
	m_realPursite.GiveDolls();
}

void Proxy::GiveFlowers()
{
	m_realPursite.GiveFlowers();
}

void Proxy::GiveChocolate()
{
	m_realPursite.GiveFlowers();
}
