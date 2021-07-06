#include<iostream>
using namespace std;
#include<vector>

// // 对vector容器的容量和大小操作
// empty()  //判空
// capacity()   //容量
// size()   //大小
//resize()   //修改大小，大则填充，小则删除
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
    vector<int> v1;
    for(int i = 0; i<10;i++)
    {
        v1.push_back(i);
    }
    prientVector(v1);

    //判空 
    if(v1.empty())//1为空
    {
        cout<<v1.empty()<<" v1为空"<<endl;
    }
    else
    {
        cout<<v1.empty()<<" v1不为空"<<endl;
        cout<<"v1的容量为："<<v1.capacity()<<endl;//容量永远大于size
        cout<<"v1的大小为："<<v1.size()<<endl;
    }
    //重新设置容器大小
    // 如果比原来的短，超出的部分会被删除掉
    // 如果比原来的长，会进行填充，可以指定默认填充，不指定则默认为0
    v1.resize(5);
    prientVector(v1);//0 1 2 3 4 
    v1.resize(8);
    prientVector(v1);//0 1 2 3 4 0 0 0
    v1.resize(10,2);
    prientVector(v1);//0 1 2 3 4 0 0 0 2 2
}

int main()
{
    test01();
    return 0;
}