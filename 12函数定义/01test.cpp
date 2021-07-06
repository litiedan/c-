#include<iostream>
using namespace std;
// //函数的定义
// 1.返回值类型
// 2.函数名
// 3.参数列表
// 4.函数体语句
// 5.return 表达式
////////////////////////////////////
// 返回值类型 函数名(参数列表)
// {
//     函数体语句;
//     return表达式;
// }
////////////////
//注意函数需要写在main函数前
int sum(int a1,int b1)
{   
    //此处的a,b在函数定义时，并没有实际的数据，只是一个形式上的参数，所以被成为形参
    return a1+b1;
}
int main()
{
    int a = 0;
    int b = 1;
    //此处的a,b才是实参，当调用函数时，实参的值回传给形参
    int c = sum(a,b);
    cout<<c<<endl;
    return 0;
}
