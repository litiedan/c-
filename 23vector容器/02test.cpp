#include<iostream>
using namespace std;
#include<vector>

// 给vector容器进行赋值

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

    //赋值

    //1.operator=
    vector<int> v2,v3,v4;
    v2 = v1;
    prientVector(v2);

    //2.assign()
    v3.assign(v1.begin(),v1.end());
    prientVector(v3);

    //3.n个elem赋值
    v4.assign(10,100);
    prientVector(v4);
}

int main()
{
    test01();
    return 0;
}