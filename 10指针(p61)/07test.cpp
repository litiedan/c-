#include<iostream>
using namespace std;
//封装一个函数，利用冒泡排序，实现对整形数组的升序排序
void bubbleSort(int * arr,int len)//参数分别是数组的首地址和数组长度
{
    for(int i = 0;i < len-1;i++)
    {
        for(int j = 0;j<len - i - 1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
}
int main()
{   
    int arr[10] = {3,6,9,8,5,2,0,1,4,7};
    int len = sizeof(arr)/sizeof(arr[0]);//整个数组的size除以数组某一个元素的size
    bubbleSort(arr,len);
    for(int i = 0;i < 10;i++)
    {
        cout<<arr[i]<<endl;
    }
    int * p = arr; 
    for(int i = 0;i < 10;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}