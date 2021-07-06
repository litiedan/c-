#include<iostream>
using namespace std;

// 引用做函数参数
// 作用：函数传参时，可以利用引用的技术让形参修饰实参
// 优点：，产生的效果和地址传递一样，但是更简单直观，可以简化指针修改实参

// 1.值传递
void swap01(int a, int b)
{
    int t = a;
    a  = b;
    b = t;
    cout<<"swap01:  "<<"a:"<<a<<"    b:"<<b<<endl;
}
// 2.地址传递
void swap02(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    cout<<"swap02:  "<<"a:"<<*a<<"    b:"<<*b<<endl;

}
// 3.引用传递
void swap03(int &a , int &b)//应用起别名，此处别名和原名相同
{
    int t = a;
    a = b;
    b = t;
    cout<<"swap03:  "<<"a:"<<a<<"    b:"<<b<<endl;
}



int main()
{
    int a = 10;
    int b = 20;
    cout<<"a:"<<a<<"    b:"<<b<<endl;
    // swap01(a,b);//值传递，形参不会修饰实参
    // swap02(&a,&b);//地址传递，形参会修饰实参
    swap03(a,b);//引用传递，形参会修饰实参
    cout<<"main:  "<<"a:"<<a<<"    b:"<<b<<endl;
    return 0;
}