#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

// 常用查找算法
//   find()   //查找指定元素   
// 找到返回迭代器位置   
// 未找到返回end()

//查找内置数据类型
void test01()
{
    vector<int> v;
    for(int i = 0; i< 10;i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it = find(v.begin() , v.end() , 5);//查找迭代器区间有没有元素5
    if(it == v.end())
    {
        cout<<"没有找到"<<endl;
    }
    else
    {
        cout<<"找到:"<<*(it)<<endl;
    }

}
// 查找自定义数据类型
class Person
{
public:
    string m_name;
    int m_age;
    Person(string name,int age);
    //重载==运算符  底层find知道如何对比
    bool operator==(const Person & p)
    {
        if(this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

Person::Person(string name,int age)
{
    this->m_name = name;
    this->m_age = age;
}


void test02()
{
    vector<Person> v;
    Person p1("a",10);
    Person p2("b",20);
    Person p3("c",30);
    Person p4("d",40);
    Person p5("e",50);

    

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    Person pp("e",50);

    vector<Person>::iterator it = find(v.begin() , v.end() , pp);//查找迭代器区间有没有Person pp
    if(it == v.end())
    {
        cout<<"没有找到"<<endl;
    }
    else
    {
        cout<<"找到:"<<it->m_name<<" 年龄："<<it->m_age<<endl;
    }
}

int main()
{
    test01();
    test02();
    return 0;
}