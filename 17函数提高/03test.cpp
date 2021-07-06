#include<iostream>
using namespace std;

// 函数重载
// 作用，函数名可以相同，提高复用性
// 需要满足的条件：
//     同一作用域下
//     函数名称相同
//     函数参数类型不同，或者个数不同，或者顺序不同
// 函数的返回值不可以作为函数重载的条件
void func01()
{
    cout<<"func01"<<endl;
}
void func01(int )
{
    cout<<"func01的func01(int )重载"<<endl;
}
void func01(double )
{
    cout<<"func01的func01(double )重载"<<endl;
}
void func01(double,int)
{
    cout<<"func01的func01(double,int)重载"<<endl;
}
void func01(int,double)
{
    cout<<"func01的func01(int,double)重载"<<endl;
}

//引用作为重载条件
void func02(int &a)
{
    cout<<"func02的func02(int &a)重载"<<endl;
}

void func02(const int &a)
{
    cout<<"func02的func02(const int &a)重载"<<endl;
}
//函数重载碰到默认参数
//当函数调用时func03(10);
//就会出现二义性，所以报错
void func03(int a,int b = 10)
{
    cout<<"func03的func03(int a,int b)重载"<<endl;
}
void func03(int a)
{
    cout<<"func03的func03(int a)重载"<<endl;
}


int main()
{
    int a = 1;
    func01();
    func01(1);
    func01(3.14);
    func01(1,3.14);
    func01(3.14,1);
    func02(a);
    func02(10);
    // func03(10);
    func03(10,10);
    return 0;
}

