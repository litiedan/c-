#include<iostream>
#include<map>
using namespace std;

// // map大小和交换
// size
// swap
// empty
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
    //empty判空
    if(m.empty())
    {
        cout<<"m为空"<<endl;
    }
    else
    {
        cout<<"m不为空"<<endl;
        //size大小
        cout<<"m的大小为："<<m.size()<<endl;
        printMap(m);
        
    }
}

void test02()
{
    // swap交换
    map<int,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(4,40));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(3,30));
    
    map<int,int> m2;
    m2.insert(pair<int,int>(1,100));
    m2.insert(pair<int,int>(4,400));
    m2.insert(pair<int,int>(2,200));
    m2.insert(pair<int,int>(3,300));
    cout<<"交换前："<<endl;
    printMap(m1);
    printMap(m2);

    cout<<"交换后："<<endl;
    m1.swap(m2);
    printMap(m1);
    printMap(m2);


}
int main()
{
    test01();
    test02();
    return 0;
}