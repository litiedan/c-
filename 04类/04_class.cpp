#include <iostream>
#include <string>
using namespace std;

    //成员属性设置为私有
    //1.可以自己控制读写权限
    //2.对于写可以检测数据的有效性

struct Person{
//成员属性设置为私有，类外不可以访问。但是可以通过设置公共的成员函数来实现对成员属性的访问。
public:
    //写姓名
    void setName(string name)
    {
        m_name = name;
    }
    //读姓名
    string getName()
    {
        return m_name;
    }
    //读姓名
    int getAge()
    {
        return m_age;
    }
    //写lover
    void setLover(string name)
    {
        m_Lover = name;
    }
    //写成绩（设置范围，成绩必须在0-100）
    void setScore(int score)
    {   
        if(score>=0 && score<=101)
        {
            m_score = score;
        }
        else
        {
            cout<<"错误"<<endl;
            m_score = 0;
            return;
        }
    }
    //读成绩
    int getScore()
    {
        return m_score;
    }
private:
    string m_name; 
    int m_age = 0;//初始化为0岁
    string m_Lover;
    int m_score;
//m_name设置为私有权限，但是设置的公共的成员函数读写接口，所以在类外可读可写    
//m_age设置为私有权限，但是设置的公共的成员函数只读接口，所以在类外可读不可写    
//m_Lover设置为私有权限，但是设置的公共的成员函数只写接口，所以在类外不可读可写   

};
int main(){
    // 通过类创建对象叫实例化
    Person p1;
    p1.setName("zhang");
    cout<<p1.getName()<<endl;
     cout<<p1.getAge()<<endl;
    // p1.m_age = 2;//报错，私有权限类外不能访问
    p1.setLover("li");
    // cout<<p1.m_Lover<<endl;//报错，私有属性未提供公共接口，不能访问
    p1.setScore(18);
    cout<<p1.getScore()<<endl;
    p1.setScore(118);
    cout<<p1.getScore()<<endl;
    return 0;
}