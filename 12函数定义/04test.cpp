#include<iostream>
using namespace std;
// //函数声明
// 返回值类型 函数名(形参列表)
// 告诉编译器函数名称，以及如何调用函数。函数的主体可以单独定义；
//函数声明可以多次，但是函数定义只能有一次

//若不进行函数声明，函数必须写在main函数前。
//在main函数前进行函数声明后，即提前告诉编译器此函数的存在，函数主体就可以放在main函数后

//函数声明   
int max(int a, int b);


int main()
{
    cout<<max(1,2)<<endl;
    return 0;
}

//定义函数
int max(int a, int b)
{
    return a > b ? a : b;
}