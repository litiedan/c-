#include<iostream>
using namespace std;
#include<vector>

// // // 对vector中数据的存取操作

// at(int dex)//返回索引dex所指的数据
// operator[];//返回索引dex所指的数据
// front();//返回容器中的第一个数据
// back();//返回容器中最后一个数据


void prientVector(vector<int> &v)
{   
    //利用迭代器访问容器中的元素
    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01()
{
    vector<int> v1;
    for(int i = 0; i<10;i++)
    {
        //尾插法
        v1.push_back(i);
    }
    prientVector(v1);

    //利用中括号的方式访问容器中的元素
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    //利用at()的方式访问容器中的元素
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;

    //获取第一个元素
    cout<<"第一个元素为："<<v1.front()<<endl;
    // 获取最后一个元素    
    cout<<"最后一个元素为："<<v1.back()<<endl;

}

int main()
{
    test01();
    return 0;
}