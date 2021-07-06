#include<iostream>
using namespace std;

// 常量引用
// 常量引用主要用来修饰形参，防止误操作
// 在函数形参列表中， 可以加const修饰形参，防止形参修改实参
void  show(const int &val)
{
    // val = 1000;
    cout<<val<<endl;
}


int main()
{
    int a = 10;
    // int &ref = 10;//错误，引用必须引用合法的内存空间，
    const int & ref = 10;
    //加上const后，编译器会默认修改  int t = 10;  const int & ref  = t;
    //变为只读，不可修改
    show(a);
    cout<<a<<endl;
    return 0;
}