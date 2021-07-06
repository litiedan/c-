#include<iostream>
#include<map>
using namespace std;

// map排序，默认key升序排序
//如果想修改排序方式，可以自己写仿函数
class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        // 降序
        return v1>v2;
    }
};

void test01()
{
    //创建map容器
    //默认构造
    map<int,int,MyCompare> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    //自定义排序输出
    for(map<int,int,MyCompare>::iterator it = m.begin();it!=m.end();it++)
    {
           cout<<"key:"<<(*it).first<<" value:"<<it->second<<endl;
    }
}
int main()
{
    test01();

    return 0;
}