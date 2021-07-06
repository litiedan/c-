#include<iostream>
using namespace std;
//32位操作系统c++指针占4个字节
//64位操作系统c++指针占8个字节
int main()
{   
    int a = 10;
    int *p;
    float b = 10.0;
    float *q = &b;
    p = &a;
    //等同于  
    //int *p = &a;
    cout<<&a<<endl;
    cout<<*(&a)<<endl;
    cout<<b<<endl;
    cout<<q<<endl;
    cout<<"sizeo(int)："<<sizeof(a)<<endl;
    cout<<"sizeo(指针)："<<sizeof(p)<<endl;
    cout<<"sizeo(指针)："<<sizeof(int *)<<endl;
    return 0;
}