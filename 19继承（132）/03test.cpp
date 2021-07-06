#include<iostream>
using namespace std;
//继承中的对象模型
//从父类继承的成员，哪些属于子类
class Base
{
public:
    Base();
    ~Base();
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};
Base::Base()
{
    cout<<"Base的构造函数"<<endl;
}
Base::~Base()
{
    cout<<"Base的析构函数"<<endl;
}
class Son : public Base
{
public:
    Son();
    ~Son();
public:
    int m_d;
};
Son::Son()
{
    cout<<"Son的构造函数"<<endl;
}
Son::~Son()
{
    cout<<"Son的析构函数"<<endl;
}
void test01()
{
    cout<<"sizeof Base: "<<sizeof(Base)<<endl;//12
    cout<<"sizeof Son: "<<sizeof(Son)<<endl;//16
    //说明父类中的所有非静态成员属性都会继承到子类中
    //父类中私有成员属性是被编译器隐藏了，因此访问不到，但是也被继承了
}
void test02()
{
    Son s;
    //继承中的构造函数和析构函数顺序
    //构造父类再构造子类
    //析构子类再析构父类
}
int main()
{
    test01();
    test02();
    return 0;
}



