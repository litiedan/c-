#include<iostream>
#include<string>
#include<vector>
using namespace std;

// vector容器中存放自定义数据类型
class Person
{
public:
    Person(string name,int age)
    {
            this->m_name = name;
            this->m_age = age;
    }
    string m_name;
    int m_age;

};

void test01()
{
    vector<Person> v;
    Person p1("a",10);
    Person p2("aa",20);
    Person p3("aaa",30);
    Person p4("aaaa",40);
    Person p5("aaaaa",100);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

// 遍历容器中的数据
    for(vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        cout<<"姓名"<<(*it).m_name<<endl;
        cout<<"年龄"<<it->m_age<<endl;
    }
}
//存放自定义数据类型的指针
void test02()
{
    vector<Person *> v;
    Person p1("a",10);
    Person p2("aa",20);
    Person p3("aaa",30);
    Person p4("aaaa",40);
    Person p5("aaaaa",100);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

// 遍历容器中的数据
    for(vector<Person *>::iterator it = v.begin();it != v.end();it++)
    {
        cout<<"姓名"<<(*it)->m_name<<endl;
        cout<<"年龄"<<(*it)->m_age<<endl;
    }
}

int main()
{   
    // test01();
    test02();
    return 0;
}