#include<iostream>
using namespace std;

// const修饰成员函数
// 1.常函数
// 2.常对象

class Person
{

public:
        //常函数
        // this指针的本质 是指针常量，指针的指向是不能修改的。
        // 所以this指针不能修改指向，但是this指针指向的值是可以修改的
        // 在本例中就相当于  const Person * const this 
        // 在成员函数后 加 const 修饰的是this指向，让指针的指向的值也不可以修改  
        void show()  const
        {
            // m_a = 100;//报错
            m_b = 110;
        }
        int m_a;
        // 加关键字 mutable，表示在常函数中也可以修改这个值
        mutable int m_b;
};

void test01()
{
    Person p1;
    p1.show();
}

// void test02()
// {
//     const Person p2;//在对象前加const 变为常对象
//     p2.show();
    
// }



int main()
{
    test01();
    return 0;
}