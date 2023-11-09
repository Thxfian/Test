#include "stdafx.h"

AccessFactory::AccessFactory()
{

}

AccessFactory::~AccessFactory()
{

}

IUser* AccessFactory::CreatUserFactor()
{
	return new AccessUser();
}
