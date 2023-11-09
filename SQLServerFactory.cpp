#include "stdafx.h"

SQLServerFactory::SQLServerFactory()
{

}

SQLServerFactory::~SQLServerFactory()
{

}

IUser* SQLServerFactory::CreatUserFactor()
{
	return new SqlServerUser();
}