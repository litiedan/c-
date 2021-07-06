#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime>
using namespace std;

// 常用的排序算法
// random_shuffle

void myPrint(int val)
{
    cout<<val<<"    ";
}

void test01()
{   
    srand((unsigned int) time(NULL));//随机种子
    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(20);
    v.push_back(2);
    v.push_back(11);
    v.push_back(3);
    // 遍历
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
    // 默认升序排序
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
    // 随机打乱
    random_shuffle(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;


}


int main()
{

     test01();
    return 0;
}