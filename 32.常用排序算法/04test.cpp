#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>
using namespace std;

// 常用的排序算法
// reverse 将容器倒置
// reverse(iterator begin,iterator end);
// 容器区间

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

    // 倒置
    reverse(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;


}


int main()
{

     test01();
    return 0;
}