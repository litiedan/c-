#include<iostream>
using namespace std;
#include<vector>

// // // 对vector容器的插入和删除
// push_back(ele) //尾插元素ele--进栈
// pop_back()  //删除最后一个元素--出栈
// insert(const_iterator pos,ele)//迭代器指向位置pos插入元素ele
// insert(const_iterator pos,int count,ele)//迭代器指向位置pos插入count个元素ele
// erase(const_iterator pos)//删除迭代器指向的元素
// erase(const_iterator start,const_iterator end)//删除迭代器从start到end之间的元素，
// clear()//删除容器中所有元素


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
    for(int i = 0; i<5;i++)
    {
        //尾插法
        v1.push_back(i);
    }
    prientVector(v1);//0 1 2 3 4 

    //尾删
    v1.pop_back();
    prientVector(v1);//0 1 2 3 

    // 插入
    v1.insert(v1.begin(),100);//第一个参数是迭代器，表示插入的位置，第二个参数是插入的数据
    prientVector(v1);//100 0 1 2 3 

    // 插入n个相同的数据
    v1.insert(v1.begin()+2,3,22);//第一个参数是迭代器，表示插入的位置，第二个参数是插入的数据的个数，第三参数是插入的数据
    prientVector(v1);//100 0 22 22 22 1 2 3 

    // 删除
    v1.erase(v1.begin());//参数是迭代器，表示删除迭代器位置的数据
    prientVector(v1);//0 22 22 22 1 2 3 

    //删除区间
    v1.erase(v1.begin()+1,v1.end()-1);//参数是两个迭代器，表示删除迭代器区间的数据
    prientVector(v1);//0 3 

    //清空
    v1.clear();
    prientVector(v1);//


}

int main()
{
    test01();
    return 0;
}