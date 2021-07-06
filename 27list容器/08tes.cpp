#include<iostream>
#include<list>
#include<string>
using namespace std;

//自定义数据类型的高级排序
//Person 属性有姓名 年龄  身高
// 排序规则：按照年龄升序，年龄相同，再按身高降序

class Person
{
public:
    string m_name;
    int m_age;
    int m_hight;
    Person(string name,int age,int hight)
    {
        this->m_name = name;
        this->m_age = age;
        this->m_hight = hight;
    }
};
//指定排序规则(回调函数)
bool camparePerson(Person &p1,Person &p2)
{
    //按照年龄升序，相同的情况下按身高降序
    if (p1.m_age == p2.m_age)
    {
        return p1.m_hight>p2.m_hight;
    }
    return p1.m_age < p2.m_age;
}
void test01()
{   
    //准备数据
    list<Person> L;
    Person p1("a",21,158);
    Person p2("b",21,155);
    Person p3("c",22,157);
    Person p4("d",19,157);
    Person p5("e",19,160);
    //插入数据
    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    //排序前
    for(list<Person>::iterator it = L.begin();it!=L.end();it++)
    {
        cout<<"姓名："<<(*it).m_name<<" 年龄："<<(*it).m_age<<" 身高："<<(*it).m_hight<<endl;
    }
    //排序后
    cout<<"------------------------------------"<<endl;
    cout<<"排序后："<<endl;

    L.sort(camparePerson);
    for(list<Person>::iterator it = L.begin();it!=L.end();it++)
    {
        cout<<"姓名："<<(*it).m_name<<" 年龄："<<(*it).m_age<<" 身高："<<(*it).m_hight<<endl;
    }

}

int main()
{
    test01();
    return 0;
}