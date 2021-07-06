//二维数组
// 数据类型 数组名[行数][列数];
// 数据类型 数组名[行数][列数] = {{数据1,数据2},{数据3,数据4}....};
// 数据类型 数组名[行数][列数] = {数据1,数据2,数据3,数据4....};
// 数据类型 数组名[][列数] = {数据1,数据2,数据3,数据4....};
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

    int arry1[2][3];
    arry1[0][0] = 1;
    arry1[0][1] = 2;
    arry1[0][2] = 3;
    arry1[1][0] = 4;
    arry1[1][1] = 5;
    arry1[1][2] = 6;
    print2array(arry1);
    cout<<endl;

    int arry2[2][3] = {{1,2,3},
                                        {4,5,6}};
    print2array(arry2);
    cout<<endl;

    int arry3[2][3] = {1,2,3,4,5,6};
    print2array(arry3);
    cout<<endl;

    int arry4[][3] = {1,2,3,4,5,6};
    print2array(arry4);

    return 0;
}