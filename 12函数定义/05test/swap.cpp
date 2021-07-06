#include"swap.h"
// 2.  .cpp源文件中写函数的定义"
//函数定义
void swap(int a ,int b)
{
    int t = a;
    a = b;
    b = t;
    cout<<a<<" "<<b<<endl;
}