#include<iostream>
#include<list>
using namespace std;

//list容器的  大小操作

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
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(3);
    L1.push_back(4);
    printList(L1);

    //判空
    if (L1.empty())
    {
        cout<<"list是空的"<<endl;
    }
    else
    {
        cout<<"list不为空"<<endl;
        cout<<"list的元素个数是："<<L1.size()<<endl;
    }

    // resize() 重新指定大小
    L1.resize(10);//size变长，默认填充0
    printList(L1);
    L1.resize(12,99);//size变长，指定填充99
    printList(L1);
    L1.resize(2);//size变小，删除超出部分
    printList(L1);
}

int main()
{
    test01();
    return 0;
}