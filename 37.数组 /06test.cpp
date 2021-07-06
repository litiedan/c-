//二维数组名称的用途
//1. 查看内存空间的大小
//2.查看在内存中的地址
#include <iostream>
using namespace std;

void print2array(int array[2][3])
{
    for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout<<array[i][j]<<"    ";
        }
        cout<<endl;
    }
}

int main(int argc, const char * argv[])
{


    int arry2[2][3] = {{1,2,3},
                                        {4,5,6}};
    print2array(arry2);
    cout<<"二维数组占用的内存空间："<<sizeof(arry2)<<endl;
    cout<<"二维数组第一行占用的内存空间："<<sizeof(arry2[0])<<endl;
    cout<<"二维数组第一个元素占用的内存空间："<<sizeof(arry2[0][0])<<endl;
    cout<<"二维数组的行数："<<sizeof(arry2)/sizeof(arry2[0])<<endl;
    cout<<"二维数组的列数："<<sizeof(arry2[0])/sizeof(arry2[0][0])<<endl;

    cout<<"二维数组的首地址："<<arry2<<endl;
    cout<<"二维数组第一行的首地址："<<arry2[0]<<endl;
    cout<<"二维数组第一个元素的首地址："<<&arry2[0][0]<<endl;
    cout<<"二维数组第二行的首地址："<<arry2[1]<<endl;
    return 0;
}