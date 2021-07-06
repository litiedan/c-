#include<iostream>
using namespace std;

// ++递增运算符重载
class MyIntegar
{
    friend ostream & operator<<(ostream &cout ,MyIntegar &myIntegar);
public:
    MyIntegar();
    //重载前置++运算符
    MyIntegar & operator++();
    //重置后置++运算符

private:
    int m_Num;
};
MyIntegar::MyIntegar()
{
    m_Num = 0;
}
MyIntegar & MyIntegar::operator++()
{
//     先进行++运算
//     再将自身作为返回
    m_Num++;
    return *this;
}
void test01()
{
    int a = 10;
    cout<<++a<<" "<<a<<endl;// 11  11

    int b = 10;
    cout<<b++<<" "<<b<<endl;// 10   11
}
//重载<<运算符
ostream & operator<<(ostream &cout ,MyIntegar &myIntegar)//本质 operator<<(cout,p) 简化cout<<p
{
    cout<<myIntegar.m_Num;
    return cout;
}


void test02()
{
    MyIntegar myIntegar;
    cout<<++myIntegar<<endl;
}


int main()
{   
    // test01();
    test02();
    return 0;
}