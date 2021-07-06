#include<iostream>
#include<vector>
using namespace std;

// vector预留空间，减少vector在动态扩展容量时的扩展次数

// reverse(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问

void test01()
{
    
    vector<int> v1;
    //预留空间
    v1.reserve(100000);
    //如果不预留空间，自动分配的容量可能不够，就会反复开辟新空间
    int num = 0;
    int *p = NULL;
    for (int i = 0; i < 100000; i++)
    {
        v1.push_back(i);

        if(p!=&v1[0])
        {
            p = &v1[0];
            num++;
        }
    }
    cout<<num<<endl;
}

int main()
{
    test01();
    return 0;
}