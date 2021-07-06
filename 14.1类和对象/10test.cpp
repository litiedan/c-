#include<iostream>
using namespace std;

// this指针概念
// 1.解决名称冲突
// 2.返回对象本身用*this


class Person
{
public:
// 1.解决名称冲突
    Person(int age)
    {
        // this指针指向被调用的成员函数所属的对象
        this->age = age;
    }   

    // 2.返回对象本身用*this

    //要返回引用&
    Person &PersonaddPerson(Person &p)
    {
        this->age += p.age;
        //  this指针是指向p2的指针，*this就表示p2这个对象本体
        return *this;
    }   
    int age;

};

void test01()
{   

    Person p1(18);

    cout<<p1.age<<endl;
}

void test02()
{
    Person p2(11);
    Person p3(12);
    //链式编程思想
    p2.PersonaddPerson(p3).PersonaddPerson(p3).PersonaddPerson(p3);
    cout<<p2.age<<endl;
}


int main()
{
    // test01();
    test02();
    return 0;
}