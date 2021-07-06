#include<iostream>
using namespace std;
#include<vector>
// vector的数据结构和容器非常相似，也称为单端数组
// 与数组不同的是可以动态扩展（并不是在原空间之后添加，而是换一块更大的空间进行拷贝，然后释放掉原空间）

// vector -----不能在头部进行操作，只允许尾插和尾删（类似于栈）
//vector的迭代器是允许随机访问的迭代器

// vector构造函数

void prientVector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01()
{
    vector<int> v1;//默认构造，无参构造
    for(int i = 0; i<10;i++)
    {
        v1.push_back(i);
    }
    prientVector(v1);

    //通过区间方式进行构造  
    vector<int> v2( v1.begin()+1 , v1.end()-1 );//参数为分别是迭代器的开始和结束，截取一段赋值给v2
    prientVector(v2);

    //通过n个elem方式构造
    vector<int> v3(10,100);//表示10个100赋值给v3
    prientVector(v3);
    //拷贝构造
    vector<int> v4(v3);//表示将v3赋值给v4
    prientVector(v4);

}


int main()
{
    test01();
    return 0;
}