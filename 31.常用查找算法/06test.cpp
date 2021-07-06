#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

// 常用查找算法----统计元素数据
//   count_if(iterator begin,iterator end,_Pred) //统计指定条件元素出现的次数
//迭代器区间
//谓词  指明统计条件


// 遍历算法之   for_each
void print01(int val)
{
    cout<<val<<" ";
}



// 1.统计内置数据类型

class Greater2
{
public:
    bool operator()(int val)
    {
        return val > 2;
    }
};

void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);

    for_each(v.begin(),v.end(),print01);//此处为遍历整个容器并做打印操作
    cout<<endl;

    int num = count_if(v.begin() , v.end(),Greater2());//查找迭代器区间有没有相邻重复元素
    cout<<"大于2的元素个数为："<<num<<endl;

}

// 2.统计自定义数据类型

class Person
{
public:
    string m_name;
    int m_age;
    Person(string name,int age);
    bool operator == (const Person & p);
};

Person::Person(string name,int age)
{
    this->m_name = name;
    this->m_age = age;
}
bool Person::operator==(const Person & p)
{
    if(this->m_age == p.m_age)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//遍历打印

class MyPrint
{
public:
    int operator()(Person & p)
    {
        cout<<p.m_name<<":"<<p.m_age<<"   ";
    }
};

class AgeGreater20
{
public:
    bool operator()(const Person & p)
    {
        return p.m_age > 20;
    }
};

void test02()
{
    vector<Person> v;
    Person p1("a",10);
    Person p2("b",20);
    Person p3("c",30);
    Person p4("d",50);
    Person p5("e",50);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for_each(v.begin(),v.end(),MyPrint());//此处为遍历整个容器并做打印操作
    cout<<endl;

    int num = count_if(v.begin() , v.end(),AgeGreater20());//统计大于20岁的人
    cout<<"大于20岁的人有："<<num<<"个"<<endl;

}

int main()
{
    test01();
    cout<<"---------------------------------"<<endl;
    test02();
    return 0;
}