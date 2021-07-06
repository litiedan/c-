//
//  数组中的每个元素都是相同的数据元素
// 数组是由连续的内存位置组成的

// // 定义方式
// 数据类型 数组名[数组长度];
// 数据类型 数组名[数组长度] = {val1,val2.....};
// 数据类型 数组名[] = {val1,val2.....};
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // 数据类型 数组名[数组长度];
    int a[3];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    // 数据类型 数组名[数组长度] = {val1,val2.....};
    float b[3] = {10,20,30.5};
    int i = 0;
    while ( i <3)
    {
        cout<<b[i]<<endl;
        i++;
    }
    // 数据类型 数组名[] = {val1,val2.....};
    float c[] = {10,20,30.5};
    int j = 0;
    while ( j <3)
    {
        cout<<c[j]<<endl;
        j++;
    }

    return 0;
}