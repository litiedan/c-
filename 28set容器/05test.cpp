#include<iostream>
#include<set>
using namespace std;

// set容器和multiset容器的区别



void printSet(set<int> &s)
{
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void printMulSet(multiset<int> &s)
{
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01()
{   
    // 默认构造
    set<int> s1;

    //插入方式只有insert()
    s1.insert(1);
    //判断是否能插入相同的值
    pair<set<int>::iterator,bool> ret = s1.insert(1);
    if (ret.second)
    {
        cout<<"set重复插入1成功"<<endl;
    }
    else
    {
        cout<<"set重复插入1失败"<<endl;
    }
    s1.insert(3);
    s1.insert(4);
    s1.insert(2);
    //所有元素插入时会被自动升序排序
    printSet(s1);//1 2 3 4

    multiset<int> ms1;
    ms1.insert(10);
    ms1.insert(10);
    ms1.insert(1);
    ms1.insert(1);
    ms1.insert(4);
    ms1.insert(5);
    printMulSet(ms1);
}

int main()
{
    test01();
    return 0;
}