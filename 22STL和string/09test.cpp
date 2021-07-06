#include<iostream>
#include<string>
using namespace std;

//字符串的插入和删除
//从字符串中获取想要的子串

//字符串的插入和删除
void test01()
{
    string str = "hellow";
    //插入
    str.insert(1,"11");//在第1个位置后插入"11"
    cout<<str<<endl;
    //删除
    str.erase(1,2);//第1个位置后删除两个字符
    cout<<str<<endl;
}

//从字符串中获取想要的子串
void test02()
{
    string str = "abcdef";
    string subStr = str.substr(1,3);//第1个位置后取出3个字符并返回
    cout<<subStr<<endl;
}

//从邮件的地址中获取用户信息
void test03()
{
    string email = "lizeqi@163.com";
    int pos = email.find('@');//找到@所在的位置返回pos
    string userName = email.substr(0,pos);//取出@前的内容（从第0个位置截取pos个）
    cout<<userName<<endl;
}


int main()
{
    cout<<"--------------------test01()-----------------"<<endl;
    test01();
    cout<<"--------------------test02()-----------------"<<endl;
    test02();
     cout<<"--------------------test03()-----------------"<<endl;
    test03();
    return 0;
}