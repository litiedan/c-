//一维数组名的用途
// 1.可以统计整个数组在内存中的长度
// 2.可以获取数组在内存中的首地址
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // 数据类型 数组名[数组长度] = {val1,val2.....};
    int arry[3] = {10,20,30};
    int i = 0;
    while ( i <3)
    {
        cout<<arry[i]<<endl;
        i++;
    }
    cout<<sizeof(arry)<<endl;//整个数组在内存中的长度
    cout<<sizeof(arry[0])<<endl;//数组中单个元素在内存中的长度
    cout<<"数组中元素个数:"<<sizeof(arry)/sizeof(arry[0])<<endl;
    cout<<"数组的首地址:"<<arry<<endl;
    cout<<"数组的首个元素的地址:"<<&arry[0]<<endl;
    cout<<"数组的第二个元素的地址:"<<&arry[1]<<endl;
    return 0;
}