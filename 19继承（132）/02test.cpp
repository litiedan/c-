#include<iostream>
using namespace std;
// 继承的语法 class 子类 : 继承方式 父类
// // 继承方式：公共继承 保护继承 私有继承

class Base1
{
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};
// 公共继承
class Son1 : public Base1
{
public:
    void func()
    {
        m_a = 10;//父类中的公共权限成员  子类中依然是公共权限
        m_b = 20;//父类中的保护权限成员  子类中依然是保护权限
        // m_c = 30;////父类中的私有权限成员  子类访问不到
    }
};

void test01()
{
    Son1 son1;
    son1.func();
    cout<<son1.m_a<<endl;
    // cout<<son1.m_b<<endl;//保护权限，类外不能访问
    // cout<<son1.m_c<<endl;//私有权限，子类不能访问
}


// 保护继承
class Son2 : protected Base1
{
public:
    void func()
    {
        m_a = 10;//父类中的公共权限成员  子类中变成保护权限
        m_b = 20;//父类中的保护权限成员  子类中依然是保护权限
        // m_c = 30;////父类中的私有权限成员  子类访问不到
    }
};

void test02()
{
    Son2 son2;
    son2.func();
    // cout<<son2.m_a<<endl;//保护权限，类外不能访问
    // cout<<son2.m_b<<endl;//保护权限，类外不能访问
    // cout<<son2.m_c<<endl;//私有权限，子类不能访问
}

// 私有继承
class Son3 : protected Base1
{
public:
    void func()
    {
        m_a = 10;//父类中的公共权限成员  子类中变成私有成员
        // m_b = 20;//父类中的保护权限成员  子类中变成私有成员
        // m_c = 30;////父类中的私有权限成员  子类访问不到
    }
};

void test03()
{
    Son3 son3;
    son3.func();
    // cout<<son3.m_a<<endl;//私有权限，类外不能访问
    // cout<<son3.m_b<<endl;//私有权限，类外不能访问
    // cout<<son3.m_c<<endl;//私有权限，子类不能访问
}


int main()
{   
    // test01();
    // test02();
    test03();
    return 0;
}