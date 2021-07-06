#include<iostream>
using namespace std;
#include "swap.h"

// //函数分文件编写，让代码更清晰
// 1.  .h头文件中写函数的声明
// 2.  .cpp源文件中写函数的定义

// //函数声明
// void swap(int a ,int b);

int main()
{   
    swap(1,2);
    return 0;
}

// //函数定义
// void swap(int a ,int b)
// {
//     int t = a;
//     a = b;
//     b = t;
//     cout<<a<<" "<<b<<endl;
// }