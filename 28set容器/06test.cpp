#include<iostream>
#include<string>
#include<set>
using namespace std;

// pair对组的创建
// 成对出现的数据，利用对组可以返回两个数据

void test01()
{
    //第一种方式
    pair<string,int> p("Tom",10);
    cout<<"姓名："<<p.first<<" 年龄："<<p.second<<endl;

    // 第二种方式
    pair<string,int> p2 = make_pair("li",20);
    cout<<"姓名："<<p2.first<<" 年龄："<<p2.second<<endl;
}

int main()
{
    test01();
    return 0;
}