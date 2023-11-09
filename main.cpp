#include "stdafx.h"

/*----------------------简单工厂模式----------------*/
// int main()
// {
// 	double firNum, secNum;
// 	string symbol;
// 	cout << "请输入计算的第一个数值" << endl;
// 	cin >> firNum;
// 	cout << "请输入计算符号（+、-、x、/）" << endl;
// 	cin >> symbol;
// 	cout << "请输入计算的第二个数值" << endl;
// 	cin >> secNum;
// 
// 	Calculate* pCal = CalCulateFactory::CreatCalculate(symbol);
// 	if (pCal != nullptr)
// 	{
// 		pCal->SetFirstNum(firNum);
// 		pCal->SetSecondNum(secNum);
// 		double res = pCal->DoCalculate();
// 		cout << "本次计算结果为：" << endl;
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


/*----------------------Strategy模式----------------*/
// int main()
// {
// 	double price = 666;
// 	cout << "请输入计算方式：" << endl;
// 	int type = 0;
// 	cin >> type;
// 	double finalPrice = 0.0;
// 	CashStrategy* pCashStategy = new CashStrategy("打八折");
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
// 	cout << "最终金额为：" <<finalPrice << endl;
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


/*----------------------Decorator(装饰模式)模式----------------*/
// int main()
// {
// 	/*----------------------面向过程版本----------------*/
// // 	PersonOld p("student");
// // 	p.DoStudy();
// // 	p.DoGame();
// 	/*----------------------面向对象版本----------------*/
// 	Person* pPerson = new Student();
// 	Decorator* pDec = new DecoratorGame(pPerson);
// 	pDec->DoBehavior();
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------Porxy(代理模式)模式----------------*/
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

/*----------------------工厂方法模式----------------*/
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
// 		cout << "本次计算结果为：" << endl;
// 		cout << res << endl;
// 	}
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------原型模式----------------*/
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

/*----------------------外观模式----------------*/
// int main()
// {
// 	Facade facade;
// 	facade.DoFirstMethod();
// 	facade.DoSecondMethod();
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------观察者模式----------------*/
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

/*----------------------抽象工厂模式----------------*/
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

/*----------------------状态模式----------------*/
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

/*----------------------适配器模式----------------*/
// int main()
// {
// 	Target* pTarget = new Adapter();
// 	pTarget->SetInfor(39, "James");
// 
// 	system("pause");
// 	return 0;
// }

/*----------------------桥模式----------------*/
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