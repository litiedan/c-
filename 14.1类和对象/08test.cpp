#include<iostream>
using namespace std;

// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量

class Person
{
public:
        //静态成员函数
        static void func()
        {
            m_a = 100;//静态成员函数可以访问静态成员变量
            // m_b = 200;//静态成员函数不可以访问非静态成员变量
            cout<<"//静态成员函数func调用"<<endl;

        }
        static int m_a;//静态成员变量必须类内声明
        int m_a;//

        // 静态成员函数也是有作用权限的
    private:
        static void func2()
        {
            cout<<"//静态成员函数func2调用"<<endl;
        }

};

int Person::m_a  = 0;////静态成员变量必须类外初始化
//静态成员函数两种访问方式
void test01()
{
//    1.通过对象访问
    Person p1;
    p1.func();
//     2.通过类名访问
    Person::func();

    // Person::func2();//类外访问不到私有的静态成员函数



}


int main()
{
    test01();
    return 0;
}