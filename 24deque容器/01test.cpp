#include<iostream>
#include<deque>
using namespace std;
// deque容器的基本概念
// 功能：双端数组，可以对头端进行插入和删除操作  类似于（双向链表）
// // deque与vecto的区别
//     vector对于头部的插入删除效率低，数据量越大，效率越低
//     deque相对而言，对头部的插入删除速度会比vector块
//     vector访问元素时的速度会比deque快，这与两者的内部实现有关

// deque构造函数

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
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    deque<int> d2(d1.begin(),d1.end());
    printDeque(d2);

    deque<int> d3(10,100);
    printDeque(d3);

    deque<int> d4(d3);
    printDeque(d4);

}
int main()
{
    
    test01();
    
    return 0;
}