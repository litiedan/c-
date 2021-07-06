#include<iostream>
using namespace std;

// 左移运算符重载

class Person
{
    friend ostream & operator<<(ostream &cout ,Person &p);
    friend void test01();
private:
    //通常不会利用成员函数重载左移运算符，因为无法实现cout在左侧
    // void operator<<();
    int m_a;
    int m_b;
};
ostream & operator<<(ostream &cout ,Person &p)//本质 operator<<(cout,p) 简化cout<<p
{
    cout<<"m_a="<<p.m_a<<"    "<<"m_b="<<p.m_b<<endl;
    return cout;
}
void test01()
{
    Person p1;
    p1.m_a = 10;
    p1.m_b = 20;

    cout<<p1.m_a<<endl;
    cout<<p1.m_b<<endl;
    // operator<<(cout,p1);//operator<<是全局函数名   cout 默认是ostream类的对象，p1是person类的对象
    cout<<p1<<endl;//经过运算符重载后上一行代码可以简化
}



int main()
{
    test01();
    return 0;
}