#include "stdafx.h"

SubFactory::SubFactory()
{

}

SubFactory::~SubFactory()
{

}

Calculate* SubFactory::CreatCalByFactory()
{
	return new SubCal();
}
