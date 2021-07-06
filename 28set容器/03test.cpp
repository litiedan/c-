#include<iostream>
#include<set>
using namespace std;

// 统计set容器的插入和删除

// insert 
// clear 
// erase 



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

    //删除迭代器所在位置的元素
    s1.erase(s1.begin());
    printSet(s1);//2 3 4 

    //删除指定数据元素
    s1.erase(3);//2 4
    printSet(s1);

    //删除区间内容
    s1.erase(s1.begin(),s1.end());
    printSet(s1);//

    s1.clear();//清空
}


int main()
{
    test01();
    return 0;
}