#pragma once
class WorkExperience
{
public:
	WorkExperience();
	~WorkExperience();

	void SetWorkData(int data);
	int GetWorkData();
	void SetWorkNumber(int number);
	int GetWorkNumber();

private:
	int m_data;//����ʱ��
	int m_number;//��������
};

