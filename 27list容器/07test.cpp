#include<iostream>
#include<list>
using namespace std;

//list反转和排序

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
    L1.push_back(3);
    L1.push_back(2);
    L1.push_back(9);
    L1.push_back(1);
    
//    revers()反转
    cout<<"反转前"<<endl;
    printList(L1);//3 2 9 1 
    cout<<"反转后"<<endl;

    L1.reverse();
    printList(L1);//1 9 2 3

}

bool myCompare(int v1,int v2)
{
    //降序就让第一个数大于第二个数
    return v1 > v2;
}

//排序
//所有不支持随机访问迭代器的容器，不可以用标准算法
void test02()
{
    list<int> L1;
    //尾插
    L1.push_back(3);
    L1.push_back(2);
    L1.push_back(9);
    L1.push_back(1);

    cout<<"排序前"<<endl;
    printList(L1);//3 2 9 1 
    cout<<"升序排序后"<<endl;
    L1.sort();
    printList(L1);

    cout<<"降序排序后"<<endl;
    L1.sort(myCompare);
    printList(L1);

}

int main()
{
    // test01();
    test02();
    return 0;
}