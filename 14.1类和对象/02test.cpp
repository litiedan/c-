#include<iostream>
using namespace std;

// 构造函数的分类和调用
//     按参数分类：有参构造和无参构造（默认构造）
//     按类型分类：普通构造和拷贝构造

//     三种调用方式：括号法  显示法  隐式转化法

class Person
{
public:
        int age;
        //普通构造
        Person()
        {
            cout<<"Person无参构造函数"<<endl;
        }
        Person(int a)
        {
            age = a;
            cout<<"Person有参构造函数"<<endl;
        }
        //拷贝构造
        Person( const Person &p )
        {
            //将传入的对象身上的所有属性，拷贝到我身上
            age = p.age;
            cout<<"Person拷贝构造函数"<<endl;
        }

        ~Person()
        {
            cout<<"person析构函数"<<endl;
        }
};

//调用
void test01()
{
    // 1.括号法
    Person p;//默认构造函数的调用,注意不需要小括号
    Person p2(10);//有参构造函数的调用
    Person p3(p2);//拷贝构造函数的调用
    cout<<p2.age<<endl;
    cout<<p3.age<<endl;
    // 2.显示法
    Person p4;
    Person P5 = Person(10);//有参构造
    Person(10);//匿名对象  当前行执行结束后就会被回收
    Person p6 = Person(p2);//拷贝构造
    // 3.影式转换法
     Person p7 = 10;//相当于 Person P5 = Person(10);
     Person p8 = p2;//相当于 Person p6 = Person(p2);//拷贝构造


}


int main()
{
    test01();

    return 0;
}