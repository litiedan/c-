#include<iostream>
#include<deque>
using namespace std;
// // deque容器的插入和删除
//两端的插入和删除
// push_bach();
// push_front()
// pop_back()
// pop_front()

  //insert插入
  //erase删除
    //clear清空
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
    printDeque(d1);//10 20 
    
    d1.push_front(100);//头插
    printDeque(d1);//100 10 20

    d1.pop_back();//尾删
    printDeque(d1);//100 10 

    d1.pop_front();//头删
    printDeque(d1);//10 
}

void test02()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);//200 100 10 20 

    //insert插入
    d1.insert(d1.begin(),1000);//第一个参数表示迭代器所在的位置，第二个参数表示要插入的数据
    printDeque(d1);//1000 200 100 10 20
    d1.insert(d1.begin(),2,33);//第一个参数表示迭代器所在的位置，第二个参数表示要插入的数据的个数，第三个参数表示要插入的数据
    printDeque(d1);//33 33 1000 200 100 10 20
    
    //按区间插入
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d2.push_back(4);
    d1.insert(d1.begin(),d2.begin(),d2.end());////第一个参数表示迭代器所在的位置，第二个参数和第三个表示要插入的数据的区间
    printDeque(d1);//1 2 3 4 33 33 1000 200 100 10 20 

    // erase删除
    d1.erase(d1.begin()+1);//参数为迭代器所在位置，表示删除该位置的元素
    printDeque(d1);//1 3 4 33 33 1000 200 100 10 20

    // 按区间方式删除
    d1.erase(d1.begin()+3,d1.end());//参数是两个迭代器，表示删除迭代器区间的内容
    printDeque(d1);//1 3 4 

    //clear清空
    d1.clear();
    printDeque(d1);//
}

int main()
{
    
    // test01();
    test02();
    return 0;
}