#include<iostream>
using namespace std;

// c++ 允许一个类继承多个类
// class 子类名 : 继承方式 父类1, 继承方式 父类2
// class Son : public Base1,public Base2


class Base1
{
public:
    Base1()
    {
        m_a = 100;
        m_b = 100;
    }
    int m_a;
    int m_b;
};

class Base2
{
public:
    Base2()
    {
        m_b = 200;
    }
    int m_b;
};

//子类需要继承base1和base2

class Son : public Base1,public Base2
{
public:
    Son()
    {
        m_c = 300;
        m_d = 400;
    }
    int m_c;
    int m_d;
};

void test01()
{
    Son s;
    cout<<"sizeof Son:"<<sizeof(s)<<endl;
    cout<<"m_a: "<<s.m_a<<endl;
    //当父类中出现同名成员，需要加作用域区分
    cout<<"Base1::m_b: "<<s.Base1::m_b<<endl;
    cout<<"Base2::m_b: "<<s.Base2::m_b<<endl;
    cout<<"m_c: "<<s.m_c<<endl;
    cout<<"m_d: "<<s.m_d<<endl;
}

int main()
{
    test01();
    return 0;
}