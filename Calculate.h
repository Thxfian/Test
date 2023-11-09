#pragma once
class Calculate
{
public:
	Calculate();
	virtual ~Calculate();

	virtual double DoCalculate() = 0;
	void SetFirstNum(double firNum);
	void SetSecondNum(double secNum);
protected:
	double m_firNum;
	double m_SecNum;
};

