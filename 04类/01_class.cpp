#include <iostream>
using namespace std;
const double PI = 3.1415926;
class Circle{
    //类中的属性和行为  统一称为 成员
    //属性 又叫成员属性，成员变量
    //行为 又叫成员函数，成员方法
public:
    //属性
    //半径
    int m_r;

    //行为
    //获取圆的周长
    double calculate()
    {
        return 2 * PI * m_r;
    }

};
class Student{
public:
    //属性
    //姓名，学号
    string name;
    int id;

    //行为
    //给姓名赋值
    void setName(string inputname)
    {
        name = inputname;
    }
    //展示学生信息
    void show()
    {
        cout<<"姓名"<<name<<endl;
        cout<<"学号"<<id<<endl;
    }
    
    //
};

int main(){
    // 通过类创建对象叫实例化
    Circle c1;
    c1.m_r = 10;
    cout<<"周长为："<<c1.calculate()<<endl;

    Student s1,s2;
    s1.name = "zhang";//给成员属性赋值
    s1.id = 2011;
    s1.show();//调用成员函数

    s2.setName("li");
    s2.id = 2012;
    s2.show();

    return 0;
}