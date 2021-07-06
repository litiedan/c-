#include<iostream>
#include<vector>
#include<algorithm>//标准算法的头文件
using namespace std;

// vector容器存放内置数据类型
void myPrint(int val)
{
    cout<<val<<endl;
}


void test01()
{
    //创建vector容器，数组
    vector<int> v;
    //插入数据
    v.push_back(10);//尾插
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // //第一种遍历方式
    // // 通过迭代器访问容器中的数据
    // vector<int>::iterator itBegin = v.begin();//起始迭代器   指向容器中的第一个元素
    // vector<int>::iterator itEnd = v.end();//结束迭代器   指向容器中的最后一个元素的下个元素
    
    // while(itBegin != itEnd)
    // {
    //     cout<<*itBegin<<endl;
    //     itBegin++;
    // }

    // // 第二种遍历方式
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

        // 第三种遍历方式  for_each()遍历算法
    for_each(v.begin(),v.end(),myPrint);//回调函数
}


int main()
{   
    test01();
    return 0;
}