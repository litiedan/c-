#include<iostream>
#include<fstream>
using namespace std;

// 文件类型分为两种：
//     文本文件---文件以文本的ASCII码形式存储在计算机中
//     二进制文件——文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂他们
// 操作文件三大类
//     1.写操作--ofstream
//     2.读操作--ifstream
//     3.读写操作--fstream

// 写文件步骤如下：
//     1.包含头文件 #include<fstream>
//     2.创建流对象 ofstream ofs
//     3.打开文件  ofs.open("文件路径",打开方式)
//     4.写数据  ofs<<"写入的数据";
//     5.关闭文件   ofs.close();

// 文件打开方式
// ios::in         为读文件打开
// ios::out      为写文件打开
// ios::ate       初始位置-文件尾
// ios::app     追加方式写文件
// ios::trunc  如果文件存在先删除，再创建
// ios::binary 二进制方式

// 文件打开方式可以配合使用  利用 |  操作符
// 如利用二进制方式写文件  ios :: binary | ios :: out
  
void test01()
{
    ofstream ofs;
    ofs.open("test.txt",ios::out);
    ofs<<"写入的数据:"<<endl;
    ofs<<"靠"<<endl;
    ofs<<"自"<<endl;
    ofs<<"己"<<endl;
     ofs.close();
}
int main()
{
    test01();
    return 0;
}