#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>
using namespace std;

// 常用的排序算法
// merge 两个有序序列合并后依然是有序序列
// merge(iterator begin1,iterator end1,iterator begin2,iterator end2,iterator begin3);
// 容器1的区间
// 容器2的区间
// 容器3的起始迭代器

void myPrint(int val)
{
    cout<<val<<"    ";
}

void test01()
{   
    srand((unsigned int) time(NULL));//随机种子
    // 原序列v
    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(20);
    v.push_back(2);
    v.push_back(11);
    v.push_back(3);

    // 默认升序排序
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;

    // 原序列vv
    vector<int> vv;
    for(int i = 0;i<10;i++)
    {
        vv.push_back(i);
    }
    for_each(vv.begin(),vv.end(),myPrint);
    cout<<endl;
    
    // 目标容器vvv，需要提前分配空间
    vector<int> vvv;
    vvv.resize(v.size()+vv.size());

    // 合并排序
    merge(v.begin(),v.end(),vv.begin(),vv.end(),vvv.begin());
    for_each(vvv.begin(),vvv.end(),myPrint);
    cout<<endl;


}


int main()
{

     test01();
    return 0;
}