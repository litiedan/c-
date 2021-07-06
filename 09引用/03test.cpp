#include<iostream>
using namespace std;

// 引用做函数返回值
// 注意不要返回局部变量引用
// 函数调用作为坐值

// int & test01()
// {
//     int a  =  10;//局部变量存放在内存四区中的栈区
//     return a;
// }
int & test02()
{
    static int a = 10;//静态变量存放在全局区，在程序结束后释放
    return a;
}

int main()
{
    // int &ref  = test01();
    int &ref  = test02();//ref是test02()的别名
    cout<<ref<<endl;
    test02() = 1000;//相当于 a = 1000   因为此处test02()就相当于是a的别名
    cout<<ref<<endl;
    return 0;
}