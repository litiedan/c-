#include<iostream>
using namespace std;
int main()
{
    //引用，给变量起别名
    //int a=1; a 是内存中的一块区域。若想用b也访问这一块内存，就用到了引用。
    //基本用法  数据类型 &别名 = 原名

    
    int a = 10;
    //int &b;  //错误的,引用必须初始化
    int &b = a;

    int c = 20;
    //b = c;   //这是赋值操作，引用初始化后不能改变
    
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    b = 100;

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}