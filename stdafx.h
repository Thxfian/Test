#pragma once
#include <iostream>
#include <memory>
#include <cmath>
#include <vector>
using namespace std;
#include "DesignPatternDef.h"
//简单工厂模式
#include "CalCulate.h"
#include "CalCulateFactory.h"
#include "AddFactory.h"
#include "AddCal.h"
#include "SubCal.h"
#include "MulCal.h"
#include "DivCal.h"
//策略模式
#include "CashStrategy.h"
#include "CashCalculate.h"
#include "CashNormalCal.h"
#include "CashOffCal.h"
#include "CashReturnCal.h"
//装饰模式
#include "PersonOld.h"
#include "Person.h"
#include "Student.h"
#include "Worker.h"
#include "Decorator.h"
#include "DecoratorGame.h"
#include "DecoratorSport.h"
//代理模式
#include "Pursite.h"
#include "SchoolGirl.h"
#include "Proxy.h"
#include "GiveGift.h"
//工厂方法模式
#include "IFactory.h"
#include "AddFactory.h"
#include "SubFactory.h"
#include "MulFactory.h"
#include "DivFactory.h"
#include "SubCal.h"
#include "MulCal.h"
#include "DivCal.h"
//原型模式
#include "WorkExperience.h"
#include "Resume.h"
//外观模式
#include "Facade.h"
#include "MethodOne.h"
#include "MethodTwo.h"
#include "MethodThree.h"
//观察者模式
#include "Subject.h"
#include "Observer.h"
#include "BossSubject.h"
#include "NBAObserver.h"
//抽象工厂模式
#include "User.h"
#include "IUser.h"
#include "IServerFactory.h"
#include "SqlServerUser.h"
#include "AccessUser.h"
#include "SQLServerFactory.h"
#include "AccessFactory.h"
//状态模式
#include "State.h"
#include "MorningState.h"
#include "NoonState.h"
#include "Work.h"
//适配器模式
#include "Target.h"
#include "Adaptee.h"
#include "Adapter.h"
//桥模式
#include "IProduct.h"
#include "PhotoProduct.h"
#include "MusicProduct.h"
#include "GameProduct.h"
#include "IMobileBrand.h"
#include "AMobileBrand.h"
#include "BMobileBrand.h"