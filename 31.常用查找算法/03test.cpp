#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

// 常用查找算法
//   adjacent_find(iterator begin,iterator end)//查找相邻重复元素
//迭代器区间
//返回相邻元素的第一个位置的迭代器

// 遍历算法之   for_each
void print01(int val)
{
    cout<<val<<" ";
}


void test01()
{
    vector<int> v;
    for(int i = 0; i< 10;i++)
    {
        v.push_back(i);
    }
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    for_each(v.begin(),v.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
    vector<int>::iterator it = adjacent_find(v.begin() , v.end() );//查找迭代器区间有没有相邻重复元素
    if(it == v.end())
    {
        cout<<"没有找到"<<endl;
    }
    else
    {
        cout<<"找到相邻重复的元素:"<<*(it)<<endl;
    }

}

int main()
{
    test01();
    return 0;
}