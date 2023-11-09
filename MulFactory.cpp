#include "stdafx.h"


MulFactory::MulFactory()
{

}

MulFactory::~MulFactory()
{

}

Calculate* MulFactory::CreatCalByFactory()
{
	return new MulCal();
}
