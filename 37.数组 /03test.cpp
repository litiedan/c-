// 获取数组中的最大值
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    int arry[] = {300,350,200,400,250};
    int n = sizeof(arry)/sizeof(arry[0]);//获取数组长度
    int max = 0;
    for(int i = 0;i < n;i++)
    {
        // cout<<arry[i]<<endl;
        if(arry[i]>max)
        {
            max = arry[i];
        }
    }
    cout<<max<<endl;//
    return 0;
}