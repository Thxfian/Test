#include "stdafx.h"

Work::Work()
	:m_hour(8)
	,m_finshed(false)
	, m_pState(new MorningState())
{

}

Work::~Work()
{
	if (m_pState != nullptr)
	{
		delete m_pState;
		m_pState = nullptr;
	}
}

void Work::OutPutWorkState()
{
	if (m_pState != nullptr)
	{
		m_pState->OutPutState(*this);
	}
}
