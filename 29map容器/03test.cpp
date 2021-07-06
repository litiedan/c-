#include<iostream>
#include<map>
using namespace std;

// map插入和删除

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
    // 插入
    // 第一种
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(4,40));

    // 第二种
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));

    // 第三种
    m.insert(map<int,int>::value_type(5,50));

    // 第四种
    m[6] = 60;

    printMap(m);

    // 也可以利用中括号通过key访问value
    cout<<m[2]<<endl;

    // 删除
    m.erase(m.begin());//删除第一个元素
    m.erase(3);//删除key为3的元素
    printMap(m);

    // m.erase(m.begin(),m.end());//按照区间清空
    m.clear();
    printMap(m);

}
int main()
{
    test01();

    return 0;
}