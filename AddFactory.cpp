#include "stdafx.h"


AddFactory::AddFactory()
{

}

AddFactory::~AddFactory()
{

}

Calculate* AddFactory::CreatCalByFactory()
{
	return new AddCal();
}
