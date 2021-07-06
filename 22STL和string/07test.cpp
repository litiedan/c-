#include<iostream>
#include<string>
using namespace std;

// string 字符串拼接
void test01()
{
    string str1 = "我";
    str1 += "爱玩游戏";
    cout<<str1<<endl;
    str1 += ':';
    cout<<str1<<endl;
    string str2 = "lol-DNF";
    str1 += str2;
    cout<<str1<<endl;

    string str3 = "I";
    str3.append(" love");
    cout<<str3<<endl;

    str3.append("game abcde",4);
    cout<<str3<<endl;

    str3.append(str2,4,3);//从第0项开始截取3个字符后追加
    cout<<str3<<endl;

}
int main()
{
    test01();
    return 0;
}