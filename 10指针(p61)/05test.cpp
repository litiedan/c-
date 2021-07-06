#include<iostream>
using namespace std;
//指针和数组
//利用指针访问数组中的元素
int main()
{
    int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
    cout<<arr[0]<<endl;
    int * p = arr;//数组名就是数组的首地址
    cout<<&arr[10]<<endl;
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*p<<endl;
    p++;//指针后移一位（此处为整形指针变量，表示地址后移四个字节）
    cout<<*p<<endl;
    cout<<*(++p)<<endl;//先+1再运行
    cout<<*(p++)<<endl;//先运行再+1
    cout<<*(++p)<<endl;//先+1再运行
    //利用指针访问数组元素
    int * p2 = arr;//数组名就是数组的首地址
    for(int i = 0;i < 10;i++)
    {
        cout<<*p2<<endl;
        p2++;
    }
    return 0;
}