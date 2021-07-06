#include<iostream>
using namespace std;
//利用操作符  ->  可以通过结构体指针访问结构体属性
struct student
{
    //成员列表
    string name; 
    int age;
    int score;
};


int main()
{
    student stu = {"zhang",18,100};
    //通过指针指向结构体变量
    student * p = &stu;
    //通过指针访问结构体变量中的数据
    stu.name = "sss";
    p->age = 14;

    //stu是结构体变量
    //p是指向结构体变量的指针变量
    //访问结构体属性
    //一方面 可以  stu.属性
    //另一方面 等效的  p->属性
    
    cout<<p->name<<" "<<stu.age<<" "<<p->score<<endl;
    return 0;
}