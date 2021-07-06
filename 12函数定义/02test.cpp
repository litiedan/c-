#include<iostream>
using namespace std;
void swap(int a1,int a2)
{   
    cout<<"交换前"<<a1<<" "<<a2<<endl;
    int temp;
    temp = a1;
    a1 = a2;
    a2 = temp;
    cout<<"交换后"<<a1<<" "<<a2<<endl;
}
int main()
{
    int a = 0;
    int b = 1;
    //当我们做值传递的时候，函数的形参发生改变，并不会影响实参
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}