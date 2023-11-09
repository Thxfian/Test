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
	int m_data;//工作时间
	int m_number;//工作经历
};

