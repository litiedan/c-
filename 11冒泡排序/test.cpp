#include<iostream>
using namespace std;
int main()
{
    //冒泡排序（升序）
    //1.比较相邻的元素，如果第一个比第二个大，就交换位置
    //2.依次对每一对相邻的元素做同样的工作，执行完毕后，找到第一个最大值
    //3.重复以上步骤，每次比较次数-1，直到排序完成
    //
    //排序总轮数 = 元素个数-1
    //每轮对比次数 = 元素个数 - 排序轮数 - 1
    int a[9] = {2,3,4,1,0,8,7,9,5};
    for(int i = 0; i < 9; i++)
    {
        cout<<a[i]<<"";
    }
    int temp; 
    for(int m = 0; m < 9-1 ; m++)
    {   
        for(int n = 0; n < 9 - m - 1; n++)
        {
            if(a[n]>a[n+1])
            {
            temp = a[n];
            a[n] = a[n+1];
            a[n+1] = temp;
            }
        }
    }
    cout<<endl;
    for(int i = 0; i < 9; i++)
    {
        cout<<a[i]<<"";
    }
    cout<<endl;
    return 0;
}