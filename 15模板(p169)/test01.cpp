#include<iostream>
using namespace std;
//泛型编程
//模板的概念
// 建立通用的模具，大大提高复用性，不可以直接使用，只是一个框架，也不是万能的
 
// 两种模板机制：函数模板和类模板
// 函数模板：建立一个通用函数，其 函数返回值类型 和 形参类型 可以不具体制定，用一个虚拟的类型来代表

// 用法：  
// template<typename T>
// // 函数声明或定义
// template   声明创建模板
// typename  表明其后面的符号是一种数据类型，可以用class代替
// T  通用的数据类型，名称可以替换，通常是大写字母

//实现两个整型交换
void swapInt(int &a,int &b)
{
    int temp = a;
    a = b;
    b =temp;
}
//实现两个浮点型交换
void swapDouble(double &a,double &b)
{
    double temp = a;
    a = b;
    b =temp;
}

//两个函数除了函数名和 形参类型 其余逻辑部分及其相似，就可以用模板
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要保持，T是一个通用数据类型
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b =temp;
}


int main()
{
    int a = 10;
    int b = 20;
    double c = 10.1;
    double d = 20.1;    
    swapInt(a,b);
    swapDouble(c,d);
    cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl;

    //利用函数模板实现交换,有两种方法
    
    // 1.自动类型推导
    mySwap(a,b);
    // 2.显示指定类型
    mySwap<double>(c,d);

    cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl;

    return 0;
}