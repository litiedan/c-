#include<iostream>
using namespace std;

// c++中函数的形参列表里可以有占位参数，用来占位，调用函数时必须填补该位置
// 语法：返回值类型  函数名(数据类型){}
void func01(int a,int)
//还可以有默认参数
// void func01(int a,int = 10)
{
    cout<<"func01"<<endl;
}


int main()
{
    // 占位参数必须填补
    func01(10,10);
    return 0;
}