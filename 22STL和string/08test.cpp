#include<iostream>
#include<string>
using namespace std;

// string的查找和替换
//字符串比较
//单个字符的存取

//查找
void test01()
{
    string str1 = "abcdedefg"; 
    //find()函数
    int pos = str1.find("de");//查找函数，存在返回位置下标，不存在返回-1
    if(pos == -1)
    {
        cout<<"未找到"<<endl;
    }
    else{
        cout<<pos<<endl;
    }
    //rfind()函数
    pos = str1.rfind("de");
    cout<<pos<<endl;
    //find()是从左往右找，rfind 是从右往左找
}

//替换
void test02()
{
    string str1 = "abcdedefg"; 
    //将从pos开始的n个字符替换为字符串str
    str1.replace(1,3,"1111");
    cout<<str1<<endl;
}

//字符串比较（ascll码）  campare()     主要用来比较两个字符串是否相等
void test03()
{
    string str1 = "hellow";
    string str2 = "hellow";
    string str3 = "aellow";
    string str4 = "zellow";

    if(str1.compare(str2)==0)
    {
        cout<<str1.compare(str2)<<"    str1 等于 str2"<<endl;
    }
    if(str1.compare(str3) > 0)
    {
        cout<<str1.compare(str3)<<"    str1 大于 str3"<<endl;
    }
    if(str1.compare(str4) < 0)
    {
        cout<<str1.compare(str4)<<"    str1 小于 str4"<<endl;
    }
}

//单个字符的存取
void test04()
{
    string str1 = "hellow";
    cout<<"str1.size(): "<<str1.size()<<endl;//size()函数返回字符串的长度
    // cout<<str1<<endl;
    // 1.通过[]访问单个字符
    for(int i = 0; i < str1.size();i++)
    {
        cout<<str1[i]<<" ";
    }
    cout<<endl;

    //2.通过at方式访问单个字符
    for(int i = 0;i < str1.size();i++)
    {
        cout<<str1.at(i)<<" ";
    }
    cout<<endl;
    //3.修改单个字符
    str1[0] = 'a';
    str1.at(1)='b';
    cout<<str1<<endl;
}


int main()
{
    cout<<"--------------------test01()-----------------"<<endl;
    test01();
    cout<<"--------------------test02()-----------------"<<endl;
    test02();
     cout<<"--------------------test03()-----------------"<<endl;
    test03();
     cout<<"--------------------test04()-----------------"<<endl;
    test04();
    return 0;
}