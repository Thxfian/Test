#include "stdafx.h"

NBAObserver::NBAObserver(std::string name)
	:m_name(name)
{

}

NBAObserver::~NBAObserver()
{

}

void NBAObserver::Update()
{
	cout << m_name << "��ֹͣ�ۿ�NBA" << endl;
}
