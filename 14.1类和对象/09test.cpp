#include<iostream>
using namespace std;

// 成员变量和成员函数是分开存储的

// 只有非静态成员变量  ,属于类的对象上


class Person
{
    int m_a;//非静态成员变量  ,属于类的对象上
    static int m_b;  //静态成员变量  ,不属于类的对象上

    void func()//非静态成员函数 ,不属于类的对象上
    {

    }
    static void func1()//静态成员函数 ,不属于类的对象上
    {

    }
};
int Person::m_b = 1;
void test01()
{
    Person p1;
    //空对象占用的内存空间为：1
    //因为c++会为每个空对象也分配一个字节的空间，为了区分空对象占内存的位置
    // 因为每个空对象也应该有一个独一无二的内存地址
    cout<<"size of p1： "<<sizeof(p1)<<endl;
}

void test02()
{
    Person p2;
    cout<<"size of p2： "<<sizeof(p2)<<endl;
}




int main()
{
    // test01();
    test02();
    return 0;
}