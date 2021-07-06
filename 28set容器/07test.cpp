#include<iostream>
#include<set>
using namespace std;

// set容器排序 仿函数指定排序规则

class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};


void test01()
{   
    // 默认构造
    set<int> s1;

    s1.insert(1);
    s1.insert(3);
    s1.insert(4);
    s1.insert(2);
    //所有元素插入时会被自动升序排序
    for(set<int>::iterator it=s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //指定排序规则为降序排序需要在插入数据时设置
    set<int,MyCompare> s2;//仿函数指定规则
    s2 .insert(1);
    s2 .insert(3);
    s2 .insert(4);
    s2 .insert(2);
    for(set<int,MyCompare>::iterator it=s2.begin();it!=s2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    test01();
    return 0;
}