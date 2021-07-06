#include<iostream>
#include<deque>
#include<algorithm>//标准算法头文件
using namespace std;
// // deque容器数据存取  以及  deque容器的排序  
// sort(iterator beg,iterator end)//对beg和end区间内容进行排序

    //通过中括号访问元素
    // 通过at()访问元素
    // 访问第一个和最后一个元素

void printDeque(deque<int> &d)
{   
    for(deque<int>::iterator it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}


void test01()
{
    deque<int> d1;
    d1.push_back(10);//尾插
    d1.push_back(20);
    d1.push_front(100);//头插
    d1.push_front(200);
    d1.push_front(300);

    //通过中括号访问元素
    for (int i = 0; i < d1.size(); i++)
    {
        cout<<d1[i]<<" ";
    }
    cout<<endl;

    // 通过at()访问元素
    for (int i = 0; i < d1.size(); i++)
    {
        cout<<d1.at(i)<<" ";
    }
    cout<<endl;
    cout<<"第一个元素是："<<d1.front()<<endl;
    cout<<"最后一个元素是："<<d1.back()<<endl;
    
    //排序
    sort(d1.begin(),d1.end());//默认升序排序
    printDeque(d1);
}



int main()
{
    
    test01();
    return 0;
}