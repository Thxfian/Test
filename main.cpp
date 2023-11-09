#include "stdafx.h"

/*----------------------�򵥹���ģʽ----------------*/
// int main()
// {
// 	double firNum, secNum;
// 	string symbol;
// 	cout << "���������ĵ�һ����ֵ" << endl;
// 	cin >> firNum;
// 	cout << "�����������ţ�+��-��x��/��" << endl;
// 	cin >> symbol;
// 	cout << "���������ĵڶ�����ֵ" << endl;
// 	cin >> secNum;
// 
// 	Calculate* pCal = CalCulateFactory::CreatCalculate(symbol);
// 	if (pCal != nullptr)
// 	{
// 		pCal->SetFirstNum(firNum);
// 		pCal->SetSecondNum(secNum);
// 		double res = pCal->DoCalculate();
// 		cout << "���μ�����Ϊ��" << endl;
// 		cout << res << endl;
// 	}
// 	
// 	if (pCal != nullptr)
// 	{
// 		delete pCal;
// 		pCal = nullptr;
// 	}
// 	
// 	system("pause");
// 	return 0;
// }


/*----------------------Strategyģʽ----------------*/
// int main()
// {
// 	double price = 666;
// 	cout << "��������㷽ʽ��" << endl;
// 	int type = 0;
// 	cin >> type;
// 	double finalPrice = 0.0;
// 	CashStrategy* pCashStategy = new CashStrategy("�����");
// 	switch (type)
// 	if (pCashStategy == nullptr)
// 	{
// 		finalPrice = price;
// 	}
// 	else
// 	{
// 		finalPrice = pCashStategy->GetCashSum(price);
// 	}
// 
// 	cout << "���ս��Ϊ��" <<finalPrice << endl;
// 
// 	if (pCashStategy != nullptr)
// 	{
// 		delete pCashStategy;
// 		pCashStategy = nullptr;
// 	}
// 
// 	system("pause");
// 	return 0;
// }


/*----------------------Decorator(װ��ģʽ)ģʽ----------------*/
// int main()
// {
// 	/*----------------------������̰汾----------------*/
// // 	PersonOld p("student");
// // 	p.DoStudy();
// // 	p.DoGame();
// 	/*----------------------�������汾----------------*/
// 	Person* pPerson = new Student();
// 	Decorator* pDec = new DecoratorGame(pPerson);
// 	pDec->DoBehavior();
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------Porxy(����ģʽ)ģʽ----------------*/
// int main()
// {
// 	SchoolGirl girl("Jenny");
// 	Pursite pursite(girl, "Tony");
// 	Proxy porxy(pursite);
// 
// 	porxy.GiveFlowers();
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------��������ģʽ----------------*/
// int main()
// {
// // 	IFactory* pCalFactory = new AddFactory();
// 	IFactory* pCalFactory = new MulFactory();
// 	Calculate* pCal = pCalFactory->CreatCalByFactory();
// 	if (pCal != nullptr)
// 	{
// 		pCal->SetFirstNum(12);
// 		pCal->SetSecondNum(15);
// 		double res = pCal->DoCalculate();
// 		cout << "���μ�����Ϊ��" << endl;
// 		cout << res << endl;
// 	}
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------ԭ��ģʽ----------------*/
// int main()
// {
// 	Resume tonyFir(25, "Tony");
// 	tonyFir.SetWorkExperience(3, 1);
// 	tonyFir.PutOutInformation();
// 	
// 	Resume tonySec = tonyFir.clone();
// 	tonySec.SetWorkExperience(5, 4);
// 	tonySec.PutOutInformation();
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------���ģʽ----------------*/
// int main()
// {
// 	Facade facade;
// 	facade.DoFirstMethod();
// 	facade.DoSecondMethod();
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------�۲���ģʽ----------------*/
// int main()
// {
// 	Subject *pBossSub = new BossSubject();
// 	pBossSub->Attach(new NBAObserver("James"));
// 	pBossSub->Attach(new NBAObserver("Kobe"));
// 	pBossSub->Notify();
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------���󹤳�ģʽ----------------*/
// int main()
// {
// 	User user("James", 39);
// 	IServerFactory* pFactory = new SQLServerFactory();
// 	IUser* pUser = pFactory->CreatUserFactor();
// 	if (pUser != nullptr)
// 	{
// 		pUser->Insert(user);
// 	}
// 	delete pFactory;
// 	delete pUser;
// 	pFactory = nullptr;
// 	pUser = nullptr;
// 
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------״̬ģʽ----------------*/
// int main()
// {
// 	Work currWork;
// 	currWork.SetWorkHour(7);
// 	currWork.OutPutWorkState();
// 	currWork.SetWorkHour(13);
// 	currWork.OutPutWorkState();
// 
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------������ģʽ----------------*/
// int main()
// {
// 	Target* pTarget = new Adapter();
// 	pTarget->SetInfor(39, "James");
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------��ģʽ----------------*/
int main()
{
	shared_ptr<IProduct> pPhoto = make_shared<PhotoProduct>();
	shared_ptr<IProduct> pMusic = make_shared<MusicProduct>();
	shared_ptr<IProduct> pGame = make_shared<GameProduct>();

	IMobileBrand* pAMobil = new AMobileBrand();
	if (pAMobil != nullptr)
	{
		pAMobil->SetProtectMember(pPhoto);
		pAMobil->SetProtectMember(pMusic);
		pAMobil->ShowMobileBrand();
		pAMobil->RunProduct();
	}

	IMobileBrand* pBMobil = new BMobileBrand();
	if (pBMobil != nullptr)
	{
		pBMobil->SetProtectMember(pGame);
		pBMobil->ShowMobileBrand();
		pBMobil->RunProduct();
	}


	if (pAMobil != nullptr)
	{
		delete pAMobil;
		pAMobil = nullptr;
	}

	if (pBMobil != nullptr)
	{
		delete pBMobil;
		pBMobil = nullptr;
	}

	system("pause");
	return 0;
}