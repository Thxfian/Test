#include "stdafx.h"

DivFactory::DivFactory()
{

}

DivFactory::~DivFactory()
{

}

Calculate* DivFactory::CreatCalByFactory()
{
	return new DivCal();
}
