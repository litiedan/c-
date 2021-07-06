#include<iostream>
using namespace std;
// // 运算符重载的概念：对已有运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
// 对于内置的数据类型，编译器知道如何进行运算，比如两个整型相加等。
// 但是对于自定义数据类型，则需要重载了  编译器提供的加号重载名称  operator+
class Person
{
public:
    int m_a;
    int m_b;
    Person PAP(Person &p);
    Person operator+(Person &p);   
};
//通过成员函数自定义求和
Person Person::PAP(Person &p)
{
    //将传入的person (&p) 的a和b分别加上本person(this)中的a和b，后返回另一个person(temp)
    Person temp;
    temp.m_a = this->m_a + p.m_a;
    temp.m_b = this->m_b + p.m_b;
    return temp;
} 
//1.通过成员函数重载+号运算符  将成员函数名称换成系统默认的operator+即可
Person Person::operator+(Person &p)
{
    //将传入的person (&p) 的a和b分别加上本person(this)中的a和b，后返回另一个person(temp)
    Person temp;
    temp.m_a = this->m_a + p.m_a;
    temp.m_b = this->m_b + p.m_b;
    return temp;
}
//2.通过全局函数重载+号运算符  将成员函数名称换成系统默认的operator+即可    
Person operator+(Person &p1,Person &p2)
{
    Person temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;
    return temp;
}
//3.重载运算符也可以进行函数重载    
Person operator+(Person &p1,int a)
{
    Person temp;
    temp.m_a = p1.m_a + a;
    temp.m_b = p1.m_b + a;
    return temp;
}

void test01()
{
    //p3的a和b的值分别是p1的和p2的和
    Person p1,p2,p3;
    p1.m_a = 1;
    p1.m_b = 2;
    p2.m_a = 3;
    p2.m_b = 4;
    p3 = p1.PAP(p2);
    cout<<p3.m_a<<endl;
    cout<<p3.m_b<<endl;
}
void test02()
{
    Person p1,p2,p3;
    p1.m_a = 1;
    p1.m_b = 2;
    p2.m_a = 3;
    p2.m_b = 4;
    p3 = p1.operator+(p2);//实质也是调用成员函数进行计算，只不过将成员函数名称设置为系统定义的operator+
    // p3 = p1 + p2;//将成员函数名称设置为系统定义的operator+，就可以将上一行代码简化为p3=p1+p2
    cout<<p3.m_a<<endl;
    cout<<p3.m_b<<endl;
}
void test03()
{
    Person p1,p2,p3;
    p1.m_a = 1;
    p1.m_b = 2;
    p2.m_a = 3;
    p2.m_b = 4;
    p3 = operator+(p1,p2);//实质也是调用成员函数进行计算，只不过将成员函数名称设置为系统定义的operator+
    // p3 = p1 + p2;//将成员函数名称设置为系统定义的operator+，就可以将上一行代码简化为p3=p1+p2
    cout<<p3.m_a<<endl;
    cout<<p3.m_b<<endl;
}
//函数重载    
void test04()
{
    Person p1,p3;
    p1.m_a = 1;
    p1.m_b = 2;
    // p3 = operator+(p1,100);//实质也是调用成员函数进行计算，只不过将成员函数名称设置为系统定义的operator+
    p3 = p1 + 100;//将成员函数名称设置为系统定义的operator+，就可以将上一行代码简化为p3=p1+p2
    cout<<p3.m_a<<endl;
    cout<<p3.m_b<<endl;
}
int main()
{
    test01();
    test02();
    test03();
    test04();
    //注意test02(),test03()下的函数重载内容只能有一个，否则编译时会报operator+不明确

    return 0;
}