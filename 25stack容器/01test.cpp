#include<iostream>
#include<stack>
using namespace std;

// stack 是一种先进后出的数据结构，只有一个出口（栈）
// 栈中只有顶端的元素才可以被外界使用，因此不允许有遍历行为
// stack常用接口
// // 构造函数
// stack<T> sta;//默认构造
// stack(const stack &stk);

void test01()
{
    //特点：符合先进后出的数据结构
    stack<int> sta;

    // 入栈
    sta.push(10);
    sta.push(20);
    sta.push(30);
    sta.push(40);
    cout<<"栈的大小"<<sta.size()<<endl;
    // 只要栈不为空就出栈并输出
    while (! sta.empty())//判空
    {
        //查看栈顶元素
        cout<<"栈顶元素为："<<sta.top()<<endl;

        // 出栈
        sta.pop();
    }
    cout<<"栈的大小"<<sta.size()<<endl;
    
}

int main()
{
    test01();
    return 0;
}