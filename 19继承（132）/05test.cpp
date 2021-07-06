#include<iostream>
using namespace std;

// 继承中的同名静态成员的处理方式

class Base
{
public: 
    static int m_a;
    // //静态成员属性的特点：
    // 1.编译阶段分配内存
    // 2.所有对象共享同一份数据
    // 3.类内声明，类外初始化
    static void func()
    {
        cout<<"base static func"<<endl;
    }

};

int Base::m_a = 100;

class Son : public Base
{
public: 
    static int m_a;
    static void func()
    {
        cout<<"son static func"<<endl;
    }
};
int Son::m_a = 200;

//同名静态成员属性
void test01()
{
    // 1.通过对象访问
    cout<<"通过对象访问"<<endl;
    Son s;
    cout<<"son 下的 m_a: "<<s.m_a<<endl;//200
    cout<<"Base 下的 m_a: "<<s.Base::m_a<<endl;//100
    // 2.通过类名访问
    cout<<"通过类名访问"<<endl;
    cout<<"son 下的 m_a: "<<Son::m_a<<endl;
    cout<<"Base 下的 m_a: "<<Base::m_a<<endl;
    //第一个::代表通过类名的方式访问  第二个::代表访问父类作用域下
    cout<<"Base 下的 m_a: "<<Son::Base::m_a<<endl;
}

// 同名静态成员函数
void test02()
{
    // 1.通过对象访问
    cout<<"通过对象访问"<<endl;
    Son s;
    s.func();
    s.Base::func();

    // 2.通过类名访问
    cout<<"通过类名访问"<<endl;
    Son::func();
    Base::func();
    Son::Base::func();


}



int main()
{
    test01();
    test02();
    return 0;
}