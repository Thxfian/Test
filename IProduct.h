#pragma once
class IProduct
{
public:
	IProduct();
	virtual ~IProduct();

	virtual void DoProduct() = 0;
};

