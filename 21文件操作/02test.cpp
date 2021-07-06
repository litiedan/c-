#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// 读文件步骤如下：
//     1.包含头文件 #include<fstream>
//     2.创建流对象 ifstream ifs
//     3.打开文件并判断是否打开成功  ifs.open("文件路径",打开方式)  ifs.is_open()
//     4.读数据  四种方法
//     5.关闭文件   ifs.close();

void test01()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
        return ;
    }

    // 读数据
    // // 第一种
    // char buf[1024] = { 0 };//初始化全为0
    // while(ifs >> buf)
    // {
    //     cout<<buf<<endl;
    // }

    // // 第二种
    // char buf2[1024] = { 0 };//初始化全为0
    // while(ifs.getline(buf2,sizeof(buf2)))
    // {
    //     cout<<buf2<<endl;
    // }

    // 第三种
    string buf3;
    while(getline(ifs,buf3))
    {
        cout<<buf3<<endl;
    }
     ifs.close();
}
int main()
{
    test01();
    return 0;
}