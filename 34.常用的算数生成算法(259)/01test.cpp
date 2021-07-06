#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
using namespace std;

// 算数生成属于小型算法使用时包含的头文件为 #include<numeric>

// //////1.accumulate 计算区间内容器元素的累计和
// accumulate(iterator begin,iterator end,value)
// 容器的迭代器区间
// value的起始值

// //////2.fill  向容器中填充指定的元素
// fill(iterator begin,iterator end,value)
// 容器的迭代器区间
// value为填充值




// 遍历算法之   for_each
void print01(int val)
{
    cout<<val<<" ";
}

void test01()
{
    cout<<"1.accumulate 计算区间内容器元素的累计和"<<endl;
    vector<int> v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
    // 累加求和，初始值是0
    int sum = accumulate(v1.begin(),v1.end(),0);
    cout<<"区间内元素和为："<<sum<<endl;

}

void test02()
{
    cout<<"2.fill  向容器中填充指定的元素"<<endl;
    vector<int> v1;
    v1.resize(10);

    // 将容器元素都填充成50
    fill(v1.begin(),v1.end(),50);
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
}


int main()
{
    cout<<"------------------------test01----------------------"<<endl;
    test01();
    cout<<"------------------------test02----------------------"<<endl;
    test02();
    return 0;
}