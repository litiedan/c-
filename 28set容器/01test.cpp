#include<iostream>
#include<set>
using namespace std;

// set基本概念（关联式容器）
// 所有元素都会在插入时被自动排序
// set/multiset属于关联式容器，底层结构是二叉树实现

// 区别：
//     set不允许容器中有重复的元素
//     multiset中允许有重复元素
//#include<set>中也包含multiset


// 构造函数  插入  遍历

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

    // 拷贝构造
    set<int> s2(s1);
    printSet(s2);

    //赋值
    set<int> s3;
    s3 = s1;
    printSet(s2);

}


int main()
{
    test01();
    return 0;
}