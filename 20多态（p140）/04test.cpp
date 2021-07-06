#include<iostream>
using namespace std;

// 制作饮品流程：煮水-冲泡-倒入杯中-加入辅料
// 利用多态技术实现，提供抽象制作饮品基类，提供子类制作咖啡和茶叶

class AbstractDrinking
{
public:
//煮水
    virtual void Boil() = 0;

// 冲泡
    virtual void Brew() = 0;

// 倒入杯中
    virtual void PourInCup() = 0; 

// 加入辅料
    virtual void AddSomething() = 0;

 //制作饮品
    void makingDrinking()
    {
        Boil();
        Brew();
        PourInCup();
        AddSomething();
    }   
};

//制作咖啡
class Coffee : public AbstractDrinking
{
public:
//煮水
    void Boil()
    {
        cout<<"煮水"<<endl;
    }

// 冲泡
    void Brew()
    {
        cout<<"冲泡咖啡"<<endl;
    }

// 倒入杯中
    void PourInCup()
    {
        cout<<"倒入杯中"<<endl;
    } 

// 加入辅料
    void AddSomething()
    {
        cout<<"加入糖和牛奶"<<endl;
    }
};

//制作茶水
class Tea : public AbstractDrinking
{
public:
//煮水
    void Boil()
    {
        cout<<"煮水"<<endl;
    }

// 冲泡
    void Brew()
    {
        cout<<"冲泡茶叶"<<endl;
    }

// 倒入杯中
    void PourInCup()
    {
        cout<<"倒入茶杯中"<<endl;
    } 

// 加入辅料
    void AddSomething()
    {
        cout<<"加入枸杞"<<endl;
    }
};

void dowork(AbstractDrinking * abs)
{
    abs->makingDrinking();
    delete abs;
}

void test01()
{
    //制作咖啡
    cout<<"----------------制作咖啡--------------"<<endl;
    dowork(new Coffee);
    //制作咖啡
    cout<<"----------------制作茶水---------------"<<endl;
    dowork(new Tea);
}

int main()
{
    test01();
    return 0;
}