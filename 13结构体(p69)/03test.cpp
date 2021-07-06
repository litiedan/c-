#include<iostream>
using namespace std;
struct student
{
    //成员列表
    string name; 
    int age;
    int score;
};
struct teacher
{
    //成员列表
    int id;
    string name; 
    int age;
    student stu[10];//结构体内可以嵌套结构体，嵌套需要提前定义
};
//打印学生信息函数
//1.值传递
void printstudent(student st)
{
    st.name = "wang";
    cout<<"值传递仅仅改变形参的值"<<st.name<<" "<<st.age<<" "<<st.score<<endl;
}
//2.地址传递
void printstudent2(student * pst)
{
    pst->name = "zhao";
    cout<<"地址传递可以改变实参的值"<<pst->name<<" "<<pst->age<<" "<<pst->score<<endl;//指针变量访问结构体属性需要  ->
}


int main()
{   
    teacher teacher;

    teacher.stu[0].name = "wang";
    teacher.stu[0].age = 12;
    teacher.stu[0].score = 55;

    cout<<teacher.stu[0].score<<endl;

    //结构体做函数参数
    //将学生传入到一个参数中，打印学生身上的所有信息
    student s1;
    s1 = {"li",14,55};
    cout<<s1.name<<" "<<s1.age<<" "<<s1.score<<endl;
    printstudent(s1);
    cout<<s1.name<<" "<<s1.age<<" "<<s1.score<<endl;
    printstudent2(&s1);
    cout<<s1.name<<" "<<s1.age<<" "<<s1.score<<endl;
    return 0;
}