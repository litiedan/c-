#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

// //////1.copy 容器内指定区间元素拷贝到另一容器内
// copy(iterator begin1,iterator end1,iterator begin2)
// 原容器的迭代器区间
// 目标容器的起始迭代器

// //////2.repalce 将区间内旧元素替换成新元素
// repalce(iterator begin,iterator end, oldvalue , newvalue)
// 替换区间
// 旧元素
// 新元素

// //////3.repalce_if 将区间内满足条件的元素替换成新元素
// repalce_if(iterator begin,iterator end, _pred , newvalue)
// 替换区间
// 旧元素
// 新元素

// //////4.swap 互换两个同类型容器的元素
// swsap(container c1,contioner c2)
// 容器c1
// 容器c2


// 遍历算法之   for_each
void print01(int val)
{
    cout<<val<<" ";
}

void test01()
{
    cout<<"copy 容器内指定区间元素拷贝到另一容器内"<<endl;
    vector<int> v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    vector<int> v2;
    v2.resize(v1.size());
    copy(v1.begin()+1,v1.end()-1,v2.begin());//拷贝截取1-8  剩余两个位置自动填充0
    for_each(v2.begin(),v2.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
}

void test02()
{
    cout<<"repalce 将区间内旧元素替换成新元素"<<endl;
    vector<int> v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    // 将5换成50  //满足条件的元素都会被替换
    replace(v1.begin(),v1.end(),5,50);
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
}

class Greater3
{
public:
    bool operator()(int val)
    {
        return val >= 3;
    }
};

void test03()
{
    cout<<"repalce_if 将区间内满足条件的元素替换成新元素"<<endl;
    vector<int> v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    // 将区间内大于3的元素替换成30
    replace_if(v1.begin(),v1.end(),Greater3(),30);
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
}

void test04()
{
    cout<<"swap 互换两个同类型容器的元素"<<endl;
    vector<int> v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }
    cout<<"before swap v1:  ";
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    vector<int> v2;
    for(int i = 100;i<110;i++)
    {
        v2.push_back(i);
    }
    cout<<"before swap v2:  ";
    for_each(v2.begin(),v2.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    // 将v1和v2互换
    swap(v1,v2);

    cout<<"after swap v1:  ";
    for_each(v1.begin(),v1.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    cout<<"after swap v2:  ";
    for_each(v2.begin(),v2.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;
}

int main()
{
    cout<<"------------------------test01----------------------"<<endl;
    test01();
    cout<<"------------------------test02----------------------"<<endl;
    test02();
    cout<<"------------------------test03----------------------"<<endl;
    test03();
    cout<<"------------------------test04----------------------"<<endl;
    test04();
    return 0;
}