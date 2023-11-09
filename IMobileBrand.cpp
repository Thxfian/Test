#include "stdafx.h"

IMobileBrand::IMobileBrand()
{

}

IMobileBrand::~IMobileBrand()
{

}

void IMobileBrand::SetProtectMember(shared_ptr<IProduct> productPtr)
{
	if (productPtr == nullptr)
		return;
	bool beExist = false;
	for (int i = 0; i < m_vcProductPtr.size(); i++)
	{
		if (productPtr.get() == m_vcProductPtr[i].get())
		{
			beExist = true;
			break;
		}
	}
	if (!beExist)
	{
		m_vcProductPtr.push_back(productPtr);
	}
}

void IMobileBrand::RunProduct()
{
	for (const shared_ptr<IProduct> pProduct : m_vcProductPtr)
	{
		if (pProduct != nullptr)
		{
			pProduct->DoProduct();
		}
	}
}
