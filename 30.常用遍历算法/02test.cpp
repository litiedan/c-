#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// 遍历算法之   transform 搬运容器到另一个容器中
// // transform(iterator begin1,iterator end1,iterator begin2, _func)
// 参数列表分别是
// 原容器开始迭代器
// 原容器结束迭代器
// 目标容器开始迭代器
// 函数或者函数对象

class Transform
{
public:
    int operator()(int v)
    {
        return v*100;
    }
};

class MyPrint
{
public:
    int operator()(int val)
    {
        cout<<val<<" ";
    }
};

void test01()
{

    vector<int> v;
    for(int i = 0;i<10;i++)
    {
        v.push_back(i);
    }

    vector<int> vTarget;//目标容器

    vTarget.resize(v.size());//目标容器需要提前开辟空间

    transform(v.begin(),v.end(),vTarget.begin(),Transform());
    cout<<"搬运前："<<endl;
    for_each(v.begin(),v.end(),MyPrint());
    cout<<endl;
    cout<<"搬运后："<<endl;
    for_each(vTarget.begin(),vTarget.end(),MyPrint());
    cout<<endl;
}
int main()
{
    test01();
    return 0;
}