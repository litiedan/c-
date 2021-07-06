#include<iostream>
using namespace std;
// 在c++中，函数的形参列表中的形参是可以有默认值的
// 语法： 返回值类型  函数名(参数=默认值){}

//形参没有默认值
int func01(int a ,int b , int c )
{
    return a+b+c;
}
//形参有默认值
// 
int func02(int a = 10 ,int b = 20, int c  = 30)
{
    return a+b+c;
}
//注意：如果 某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
int func03(int a,int b = 20, int c  = 30)
{
    return a+b+c;
}
// 如果函数声明有默认参数，函数实现就不能有默认参数
int func04(int a,int b, int c = 10);
int func04(int a,int b, int c)
{
    return a+b+c;
}



int main()
{
    cout<<func01(10,20,30)<<endl;//形参没有默认值，常规传参计算
    cout<<func02()<<endl;//形参有默认值，如果调用未传参，按默认值计算
    cout<<func02(10,10,10)<<endl;//形参有默认值，如果调用重新传参，按新值计算
    //某个形参及其后面的形参有默认值
    cout<<func03(10)<<endl;
    cout<<func03(10,10)<<endl;
    cout<<func03(10,10,10)<<endl;
    cout<<func04(10,10)<<endl;
    return 0;
}