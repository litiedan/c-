// 算法主要是由头文件<algorithm><functional><numeric>组成
// <algorithm>是所有STl头文件中最大的一个，范围涉及到 比较、交换、查找、遍历、复制、修改等
// <functional>体积很小，只包括几个在序列上面进行简单数学运算的模板函数
// <numeric>定义了一些模板类，用以声明函数对象
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// 遍历算法之   for_each
void print01(int val)
{
    cout<<val<<" ";
}

class print02
{
public:
    void operator()(int val)
    {
        cout<<val<<" ";
    }
};


void test01()
{
    vector<int> v;
    for(int i = 0; i< 10;i++)
    {
        v.push_back(i);
    }
    //遍历操作  遍历迭代器区间并执行函数操作
    for_each(v.begin(),v.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
    //仿函数
    for_each(v.begin(),v.end(),print02());
    cout<<endl;
}
int main()
{
    test01();
    return 0;
}