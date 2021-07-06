#include<iostream>
using namespace std;

// 在多态中，通常父类中的虚函数的实现 是毫无意义的，主要都是调用子类重写的内容
// 因此可以将虚函数改为纯虚函数
// 语法 ： virtual 返回值类型 函数名 (参数列表) = 0;
//  当类中有了纯虚函数，这个类也称为   抽象类；

// 抽象累的特点
//     无法实例化对象
//     子类必须重写抽象类中的纯虚函数，否则也属于抽象类

class Base
{
public:
    virtual void func() = 0;//纯虚函数
};
class Son : public Base
{
public:
    void func()
    {
        cout<<"子类重写抽象类中点纯虚函数"<<endl;
    }
};

void test01()
{
    Base * base;
    base = new Son;
    base->func();
}
int main()
{
    test01();
    return 0;
}