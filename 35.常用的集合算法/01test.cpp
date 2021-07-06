#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
using namespace std;

// 算数生成属于小型算法使用时包含的头文件为 #include<numeric>

//原容器的集合必须是有序序列

// //////1.set_intersection   求两个容器的交集
// set_intersection(iterator begin1,iterator end1,iterator begin2,iterator end2,iterator begin3)
// 容器1的迭代器区间
// 容器2的迭代器区间
// 目标容器的起始迭代器


// //////2.set_union  求两个容器的并集
// set_union(iterator begin1,iterator end1,iterator begin2,iterator end2,iterator begin3)
// 容器1的迭代器区间
// 容器2的迭代器区间
// 目标容器的起始迭代器

// //////3.set_difference  求两个容器的差集
// set_difference(iterator begin1,iterator end1,iterator begin2,iterator end2,iterator begin3)
// 容器1的迭代器区间
// 容器2的迭代器区间
// 目标容器的起始迭代器





// 遍历算法之   for_each
void print01(int val)
{
    cout<<val<<" ";
}

void test01()
{
    cout<<"1.set_intersection   求两个容器的交集"<<endl;
    
    vector<int> v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    vector<int> v2;
    for(int i = 6;i<16;i++)
    {
        v2.push_back(i);
    }
    for_each(v2.begin(),v2.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
    // 求两个容器的交集
    vector<int> v3;
    v3.resize(min(v1.size(),v2.size()));//求较小值的算法 min()
    vector<int>::iterator it=  set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());//返回的迭代器是容器中的交集的最后一个位置
    for_each(v3.begin(),it,print01);//此处为遍历交集内容  不能遍历整个容器
    cout<<endl;

}

void test02()
{
    cout<<"2.set_union  求两个容器的并集"<<endl;
    vector<int> v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    vector<int> v2;
    for(int i = 6;i<16;i++)
    {
        v2.push_back(i);
    }
    for_each(v2.begin(),v2.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
    // 求两个容器的并集
    vector<int> v3;
    v3.resize(v1.size()+v2.size());//
    vector<int>::iterator it=  set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());//返回的迭代器是容器中的交集的最后一个位置
    for_each(v3.begin(),it,print01);//此处为遍历并集内容  不能遍历整个容器
    cout<<endl;
}

void test03()
{
    cout<<"3.set_difference  求两个容器的差集"<<endl;
    vector<int> v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    vector<int> v2;
    for(int i = 6;i<16;i++)
    {
        v2.push_back(i);
    }
    for_each(v2.begin(),v2.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
    // 求两个容器的差集有两种情况
    // v1差v2 与  v2差v1结果不同
    vector<int> v3;
    v3.resize(min(v1.size(),v2.size()));//求较小值的算法 min()
    vector<int>::iterator it= set_difference (v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());//返回的迭代器是容器中的交集的最后一个位置
    for_each(v3.begin(),it,print01);//此处为遍历差集内容  不能遍历整个容器
    cout<<endl;

    vector<int> v4;
    v4.resize(min(v1.size(),v2.size()));//求较小值的算法 min()
    it= set_difference (v2.begin(),v2.end(),v1.begin(),v1.end(),v4.begin());//返回的迭代器是容器中的交集的最后一个位置
    for_each(v4.begin(),it,print01);//此处为遍历差集内容  不能遍历整个容器
    cout<<endl;
}


int main()
{
    cout<<"------------------------test01----------------------"<<endl;
    test01();
    cout<<"------------------------test02----------------------"<<endl;
    test02();
    cout<<"------------------------test03----------------------"<<endl;
    test03();
    return 0;
}