#pragma once
class PhotoProduct : public IProduct
{
public:
	PhotoProduct();
	virtual ~PhotoProduct();

	virtual void DoProduct() override;
};

