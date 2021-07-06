#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

// 常用查找算法----二分法   查找   有序序列   的   指定元素
//   bool binary_search(iterator begin,iterator end,value) //查找指定元素，查到返回true   否则返回false
//迭代器区间
// 注意在无序序列里不能使用

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
    for_each(v.begin(),v.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
    int value = 8;
    bool it = binary_search(v.begin() , v.end(),value);//查找迭代器区间有没有相邻重复元素
    if(it)
    {
        cout<<"找到了"<<value<<endl;
    }
    else
    {
        cout<<"未找到"<<value<<endl;
    }

}

int main()
{
    test01();
    return 0;
}