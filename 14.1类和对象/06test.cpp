#include<iostream>
using namespace std;
// 初始化列表
// c++提供了初始化列表语法，用来初始化属性
// 语法： 构造函数() : 属性1(值1)，属性2(值2).....{}

class Person
{
public:
// //传统初始化列表
//     Person(int a,int b,int c)
//     {
//         m_a = a;
//         m_b = b;
//         m_c = c;
//     }
//初始化列表
    Person(int a,int b,int c) : m_a(a),m_b(b),m_c(c)
    {

    }
    int m_a,m_b,m_c;
};
void test01()
{
    // Person p(10,20,30);//传统初始化
    Person p(20,30,10);//初始化列表
    cout<<"m_a: "<<p.m_a<<endl;
    cout<<"m_b: "<<p.m_b<<endl;
    cout<<"m_c: "<<p.m_c<<endl;
}

int main()
{
    test01();
    return 0;
}