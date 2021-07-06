#include<iostream>
#include<set>
#include<string>
using namespace std;

// set容器排序 存放自定义数据类型

class Person
{
public:
    Person(string name,int age)
    {
        this->m_name = name;
        this->m_age  = age;

    }
    string m_name;
    int m_age;
};

class comparePerson
{
public:
    bool operator()(const Person &p1,const Person &p2)
    {
        //按照年龄降序
        return p1.m_age>p2.m_age;
    }
};
void test01()
{   
    // 自定义的数据类型都会指定排序规则
    set<Person,comparePerson> s1;

    Person p1("liu",20);
    Person p2("guan",21);
    Person p3("zhang",22);
    Person p4("zhao",14);

    s1.insert(p1);
    s1.insert(p3);
    s1.insert(p4);
    s1.insert(p2);
    
    for(set<Person>::iterator it=s1.begin();it!=s1.end();it++)
    {
        cout<<"姓名： "<<(*it).m_name<<" 年龄："<<(*it).m_age<<endl;
    }
    cout<<endl;
}

int main()
{
    test01();
    return 0;
}