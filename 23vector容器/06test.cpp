#include<iostream>
using namespace std;
#include<vector>

// // // vector容器互换
// v1.swap(v2)//交换v1和v2的内容
void printVector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01()
{
    vector<int> v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2;
    for(int i = 10;i>0;i--)
    {
        v2.push_back(i);
    }
    printVector(v2);

    cout<<"交换后"<<endl;
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

// 实际用途
// 巧用swap可以收缩内存空间
void test02()
{
    vector<int> v;
    for(int i = 0;i<10000;i++)
    {
        v.push_back(i);
    }
    cout<<"v的容量为："<<v.capacity()<<endl;//16384
    cout<<"v的大小为："<<v.size()<<endl;//10000
    v.resize(3);//重新指定大小
    cout<<"v的容量为："<<v.capacity()<<endl;//16384
    cout<<"v的大小为："<<v.size()<<endl;//3
    // resize后容器的实际大小变小，但是容量依旧很大，造成资源浪费

    //巧用swap收缩内存
    // vector<int> (v)//匿名对象，当前行执行完后会被直接回收
    vector<int> (v).swap(v);        //
    cout<<"v的容量为："<<v.capacity()<<endl;//3
    cout<<"v的大小为："<<v.size()<<endl;//3
}

int main()
{
    // test01();
    test02();
    return 0;
}