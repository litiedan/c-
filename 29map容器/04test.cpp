#include<iostream>
#include<map>
using namespace std;

// // map查找和统计
// find(key)
// count(key)
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

    // find(key)查找
    //返回值是表示位置的迭代器
    map<int,int>::iterator pos = m.find(4);
    if(pos!=m.end())
    {
        cout<<"查找到了元素key="<<(*pos).first<<" value="<<(*pos).second<<endl;
    }
    else
    {
        cout<<"未找到元素"<<endl;
    }
    // count()统计
    //返回值是一个整数
    //因为map容器中不允许有重复key，所以返回值是0或1
    //multimap容器允许有重复key，则可以返回0和正整数
    int num;
    num = m.count(3);
    cout<<"num = "<<num<<endl;
}
int main()
{
    test01();

    return 0;
}