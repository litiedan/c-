#include<iostream>
#include<deque>
using namespace std;
// deque容器大小操作
    // deque.empty();//判空
    // deque.size();//返回容器中元素个数
    // deque.resize(num);//重新指定容器的长度，若变长则以默认值填充新位置，
    //                                 //若变短，的尾部超出容器长度的元素被删除
    // deque.resize();//重新指定容器的长度，若变长则以elem填充新位置，
    //                         //若变短，的尾部超出容器长度的元素被删除


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
    
    if(d1.empty())
    {
        cout<<"d1为空"<<endl;
    }
    else
    {
         cout<<"d1不为空"<<endl;
         cout<<"d1的大小为："<<d1.size()<<endl;
          cout<<"deque没有容量的概念"<<endl;
    }

    // 重新指定大小
    d1.resize(15);//size变大默认填充为0
    printDeque(d1);//0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 
    d1.resize(20,2);//size变大，修改默认填充为2
    printDeque(d1);//0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 2 2 2 2 2
    d1.resize(5);//size变小，删除超出的末尾部分
    printDeque(d1);//0 1 2 3 4 

}
int main()
{
    
    test01();
    
    return 0;
}