// 算法主要是由头文件<algorithm><functional><numeric>组成
// <algorithm>是所有STl头文件中最大的一个，范围涉及到 比较、交换、查找、遍历、复制、修改等
// <functional>体积很小，只包括几个在序列上面进行简单数学运算的模板函数
// <numeric>定义了一些模板类，用以声明函数对象
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 vector<int> n1;
vector<int> n2;
static int min,max;
// 遍历算法之   for_each
void func01(int val)
{
    if(val<min)
    
    cout<<val<<" ";
}
void test01()
{
    int n;
    cin >> n;
    int num_coin;
    vector<int> v;
    for(int i = 0; i< n;i++)
    {
        cin >>num_coin;
        v.push_back(num_coin);
    }
    int min = v[0];
    int max = v[0];
    //遍历操作  遍历迭代器区间并执行函数操作
    for_each(v.begin(),v.end(),func01);//此处为遍历整个容器并做打印操作

    
    cout<<endl;
}
int main()
{
    test01();
    return 0;
}