#include<iostream>
#include<set>
using namespace std;

// 统计set容器的大小以及交换set容器

// empty() //判空
// size()       //大小
// swap()    //交换

//遍历set
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
    //判空
    if (s1.empty())
    {
        cout<<"s1为空"<<endl;
    }
    else
    {
        cout<<"s1不为空"<<endl;
        cout<<"set的大小为："<<s1.size()<<endl;
    }


    set<int> s2;
    //插入方式只有insert()
    s2.insert(10);
    s2 .insert(30);
    s2 .insert(40);
    s2 .insert(20);
    cout<<"交换前"<<endl;
    printSet(s1);
    printSet(s2);
    //swap交换
    cout<<"交换后"<<endl;
    s1.swap(s2);
    printSet(s1);
    printSet(s2);


}


int main()
{
    test01();
    return 0;
}