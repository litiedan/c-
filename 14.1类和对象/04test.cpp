#include<iostream>
using namespace std;

// 构造函数调用规则：
// 默认情况下c++编译器至少给一个类添加三个函数
// 1.默认构造函数（无参，函数体为空）
// 2.默认析构函数（无参，函数体为空）
// 3.默认拷贝函数，对属性进行值拷贝

// 规则
// 1.如果用户定义有参构造函数，c++不再提供默认无参构造，但是会提供默认拷贝构造。
// 2.如果用户定义拷贝构造函数。c++不会再提供其他普通构造函数
class Person
{
public:
    //无参（默认构造函数）
    Person()
    {
        cout<<"默认构造函数"<<endl;
    }
    ~Person()
    {
        cout<<"析构函数调用"<<endl;
    }
    Person(int age)
    {
        m_age  = age;
        cout<<"有参构造函数"<<endl;
    }
// 如果用户定义有参构造函数，c++不再提供默认无参构造，但是会提供默认拷贝构造,对属性进行值拷贝
    // Person(const Person & p)
    // {
    //     m_age  = p.m_age;
    //     cout<<"Person拷贝构造函数"<<endl;
    // }
    int m_age;
};

void test01()
{
    Person p1;
    p1.m_age = 10;
    Person p2(p1);
    cout<<p2.m_age<<endl;
}

void test02()
{
    Person p3(00);
    Person p4(p3);
    cout<<p4.m_age<<endl;
}


int main()
{
    cout<<"aaa"<<endl;
    test01();
    test02();
    return 0;
}