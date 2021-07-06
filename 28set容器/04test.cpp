#include<iostream>
#include<set>
using namespace std;

// 统计set容器的查找和统计

// find()   返回迭代器的位置
// count()  返回0、1



void printSet(set<int> &s)
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
    s1.insert(3);
    s1.insert(4);
    s1.insert(2);
    //所有元素插入时会被自动升序排序
    printSet(s1);//1 2 3 4

    //find查找
    //如果找到，返回元素所在的位置
    //如果未找到，返回容器end()
    set<int>::iterator pos = s1.find(3);
    if (pos!=s1.end())
    {
        cout<<"找到元素"<<*pos<<endl;
    }
    else
    {
        cout<<"未找到元素"<<endl;
    }

    // count()统计
    //要么是0，要么是1
    int num = s1.count(2);
    cout<<"统计2的个数为："<<num<<endl;
    num = s1.count(20);
    cout<<"统计20的个数为："<<num<<endl;

}

int main()
{
    test01();
    return 0;
}