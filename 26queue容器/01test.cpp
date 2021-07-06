#include<iostream>
#include<queue>
using namespace std;

// queue是一种先进先出的数据结构，有两个出口
// 队列
void test01()
{
    //默认构造
    queue<int> q;
    //入队--尾插
    q.push(10);
    cout<<"队头："<<q.front()<<" 队尾"<<q.back()<<endl;
    q.push(20);
    cout<<"队头："<<q.front()<<" 队尾"<<q.back()<<endl;
    q.push(30);
    cout<<"队头："<<q.front()<<" 队尾"<<q.back()<<endl;
    q.push(40);
    cout<<"队头："<<q.front()<<" 队尾"<<q.back()<<endl;
    cout<<"队列的大小为："<<q.size()<<endl;

    
    while (!q.empty())//判空
    {
        cout<<"队头："<<q.front()<<" 队尾"<<q.back()<<endl;

        //出队---头删
        q.pop();
    }
    cout<<"队列的大小为："<<q.size()<<endl;
}
int main()
{
    test01();
    return 0;
}