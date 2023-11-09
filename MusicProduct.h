#pragma once
class MusicProduct : public IProduct
{
public:
	MusicProduct();
	virtual ~MusicProduct();

	virtual void DoProduct() override;
};

