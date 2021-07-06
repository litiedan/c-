#include<iostream>
#include<string>
using namespace std;

// string的构造函数
// string 是c++风格的字符串，而本质上是一个类
// 内部封装了很多成员方法：查找find，拷贝copy，删除delete等

// //string的构造函数
//     1.string();             //创建一个空的字符串
//     2.string(const char *s);    //使用字符串s初始化
//     3.string(const string& str);    //使用一个string对象初始化一个string对象
//     4.string(int n,char c); //使用n个字符c初始化
void test01()
{
    string s1 = "hellow world";//默认构造
    cout<<"s1:  "<<s1<<endl;
    const char * str = "hellow world";
    string s2(str);
    cout<<"s2:  "<<s2<<endl;
    string s3(s2);
    cout<<"s3:  "<<s3<<endl;
    string s4(10,'a');
    cout<<"s4:  "<<s4<<endl;
}


int main()
{
    test01();
    return 0;
}