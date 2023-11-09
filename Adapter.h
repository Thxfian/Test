#pragma once
class Adapter : public Target
{
public:
	Adapter();
	virtual ~Adapter();

	void SetAdaptee(Adaptee* pAdaptee);
	virtual void SetInfor(int age, string name) override ;
	
private:
	Adaptee* m_pAdaptee;
};

