#include<iostream>
using namespace std;
//继承中同名的处理
// 当子类与父类出现同名的成员，如何通过子类对象访问到子类或者父类中的同名的数据呢
// 访问子类同名成员  直接访问即可
// 访问父类同名成员  需要加作用域

class Base
{
public:
    Base()
    {
        m_a =  100;
    }
    int m_a;
    void func()
    {
        cout<<"base func 调用"<<endl;
    }
    void func(int a)
    {
        cout<<"base func(int a) 调用"<<endl;
    }
};

class Son : public Base
{
 public:
    Son()
    {
        m_a = 200;
    }   
    int m_a;
    void func()
    {
        cout<<"son func 调用"<<endl;
    }

};
void test01()
{
    Son s;
    cout<<s.m_a<<endl;//输出子类中的同名成员属性
    cout<<s.Base::m_a<<endl;//通过子类对象输出父类中的同名成员属性
}
void test02()
{
    Son s;
    s.func();//直接调用的是子类中的同名成员函数
    
    s.Base::func();//通过子类调用父类中的同名成员函数需要加作用域

    // s.func(100);//报错，如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏调父类中所有的同名成员函数
    s.Base::func(100);//如果想访问到被隐藏的父类中的同名成员函数，需要加作用域

}


int main()
{
    test01();
    test02();
    return 0;   
}
