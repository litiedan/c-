#include<iostream>
#include<list>
using namespace std;

//list容器的  赋值  和  交换

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

    //operator=赋值
    list<int> L2 = L1;
    printList(L2);

    // assign区间赋值
    list<int> L3;
    L3.assign(L2.begin(),L2.end());
    printList(L3);

    // assign  n个elem赋值
    list<int> L4;
    L3.assign(10,100);
    printList(L4);
}


// swap交换
void test02()
{
    list<int> L5,L6;
    L5.assign(3,5);
    L6.assign(4,6);
    cout<<"交换前"<<endl;
    printList(L5);
    printList(L6);

     cout<<"交换后"<<endl;

     L5.swap(L6);
     
    printList(L5);
    printList(L6);

}
int main()
{
    // test01();
    test02();
    return 0;
}