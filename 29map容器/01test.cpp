#include<iostream>
#include<map>
using namespace std;

// map/multimap容器基本概念
// map中所有元素都是pair
// pair中第一个元素为key值，起到索引作用，第二个元素为value值
// 所有元素都会根据元素的key值自动排序
// 本质：
    // map/multimap容器属于关联式容器，底层结构式用二叉树实现的
// 优点：
//     可以根据key值迅速找到value值
// map和multimap的区别
//     map不允许有重复的key值，multimap可以

// 构造和赋值
void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin();it!=m.end();it++)
    {
           cout<<"key:"<<(*it).first<<" value:"<<it->second<<endl;
    }
    cout<<endl;
}

void test01()
{
    //创建map容器
    //默认构造
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    printMap(m);

    // 拷贝构造
    map<int,int> m2(m);
     printMap(m2);

     //赋值构造
     map<int,int> m3;
     m3 = m2;
     printMap(m3);

}
int main()
{
    test01();

    return 0;
}