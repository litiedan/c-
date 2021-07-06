#include<iostream>
#include<list>
using namespace std;

//list数据存取

void printList(const list<int> &L)
{
    for(list<int>::const_iterator it = L.begin();it!=L.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01()
{
    list<int> L1;
    //尾插
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(3);
    L1.push_back(4);
    printList(L1);//1 2 3 4 


    //L1[0]  链表不可以用中括号访问数据元素
    //L1.at()  也一样，不可以访问list元素
    //因为list是链表，不是连续的线性空间存储数据，迭代器也是不支持随机访问的

    cout<<"第一个元素："<<L1.front()<<endl;
    cout<<"最后一个元素："<<L1.back()<<endl;

    //迭代器
    list<int>::iterator it = L1.begin();
    // it = it + 1;  //不支持随机访问
    it++;//支持递增递减双向
    cout<<"迭代器位置的元素："<<*it<<endl;
    
    it--;
    cout<<"迭代器位置的元素："<<*it<<endl;
    
    ++it;
    cout<<"迭代器位置的元素："<<*it<<endl;
    
    --it;
    cout<<"迭代器位置的元素："<<*it<<endl;
    
}

int main()
{
    test01();
    return 0;
}