#include<iostream>
#include<list>
using namespace std;

//list容器的 插入和删除

//头插、头删
//尾插、尾删
// 指定位置插入和删除
// 指定位置插入和删除 n个elem
//指定位置插入和删除 区间元素
// 清空容器
//删除指定数据元素

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
    //头插
    L1.push_front(10);
    L1.push_front(20);
    L1.push_front(30);
    L1.push_front(40);
    printList(L1);//40 30 20 10 1 2 3 4 

    //尾删
    L1.pop_back();
    printList(L1);//40 30 20 10 1 2 3 
    //头删
    L1.pop_front();
    printList(L1);//30 20 10 1 2 3 


    //insert()插入
    list<int>::iterator it = L1.begin();
    //list迭代器只能通过++的方式移动
    L1.insert(++it,100);//迭代器指定位置插入
    printList(L1);//30 100 20 10 1 2 3

    //erase()删除
    it = L1.begin();
    L1.erase(it);//迭代器位置删除
    printList(L1);//100 20 10 1 2 3 

    it = L1.begin();
    L1.erase(++it);//迭代器位置删除
    printList(L1);//100 10 1 2 3 

    // remove移除
    L1.remove(1);//移除与指定值的所有元素
    printList(L1);

    // clear()清空
    L1.clear();
    printList(L1);

}

int main()
{
    test01();
    return 0;
}