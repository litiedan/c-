// 数组元素逆置
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    int arry[] = {300,350,200,400,250,1};
    int n = sizeof(arry)/sizeof(arry[0]);//获取数组长度
    int temp;
    for(int i = 0;i < n/2;i++)//一分为二，前后元素依次互换
    {
        // cout<<arry[i]<<endl;
        temp = arry[i];
        arry[i] = arry[n-i-1];
        arry[n-i-1] = temp;
    }
    for(int i = 0;i < n;i++)
    {
        cout<<arry[i]<<endl;
    }
    return 0;
}