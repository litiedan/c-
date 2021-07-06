#include<iostream>
using namespace std;

// 拷贝构造函数的调用时机：
//1. 使用一个已经创建完成的对象来初始化一个新对象
//2. 值传递的方式给函数参数传值
//3. 以值方式返回局部对象

class Person
{
public:
    Person()
    {
        cout<<"Person默认函数构造"<<endl;
        
    }

    Person(int age)
    {
        m_age  = age;
        cout<<"Person有参函数构造"<<endl;
    }

    Person(const Person & p)
    {
        m_age  = p.m_age;
        cout<<"Person拷贝函数构造"<<endl;
    }



    ~Person()
    {
        cout<<"Person析构函数调用"<<endl;
    }


    int m_age;

};
//1. 使用一个已经创建完成的对象来初始化一个新对象,简单理解为复制一个类
void test01()
{
    Person p1(10);
    Person p2(p1);
    cout<<p2.m_age<<endl;
}
//2. 值传递的方式给函数参数传值(相当于将实参复制给形参，所以也会调用拷贝构造)
void dowork(Person p)
{

}

void test02()
{
    Person p3;
    dowork(p3);
}
//3. 以值方式返回局部对象
Person dowork02()
{
    Person p;
    p.m_age = 4;
    return p;
}

void test03()
{
    Person p4 = dowork02();
    cout<<p4.m_age<<endl;
}
int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}