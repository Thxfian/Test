#pragma once
class GameProduct : public IProduct
{
public:
	GameProduct();
	virtual ~GameProduct();

	virtual void DoProduct() override;
};

