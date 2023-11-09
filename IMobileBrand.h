#pragma once
class IProduct;
class IMobileBrand
{
public:
	IMobileBrand();
	virtual ~IMobileBrand();

	void SetProtectMember(shared_ptr<IProduct> productPtr);
	void RunProduct();
	virtual void ShowMobileBrand() = 0;

private:
	vector<shared_ptr<IProduct>> m_vcProductPtr;
};

