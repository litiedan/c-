#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int t = a;
    a = b;
    b = t;
    cout<<a<<" "<<b<<endl;
}
void swap2(int * a,int * b)
{   
    //将地址解引用后做交换，即交换了地址下的值
    int t = *a;
    *a = *b;
    *b = t;
    cout<<*a<<" "<<*b<<endl;
}
void swap3(int * pa,int * pb)
{   
    int *t = pa;
    pa = pb;
    pb = t;
    cout<<pa<<" "<<pb<<endl;//交换的是形参的地址，不会影响实参的地址
    cout<<*pa<<" "<<*pb<<endl;
}
//指针和函数
//
//利用
int main()
{   
    int a = 10;
    int b = 20;
    
    //值传递，实参不会改变
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    //地址传递，可以修饰实参
    swap2(&a,&b);
    cout<<a<<" "<<b<<endl;

    cout<<&a<<" "<<&b<<endl;
    swap3(&a,&b);
    cout<<&a<<" "<<&b<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}