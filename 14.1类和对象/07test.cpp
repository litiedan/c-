#include<iostream>
using namespace std;
#include<string>
// 类对象作为类成员
// C++类中的成员可以是另一个类的对象，我们称该成员为 对象成员


//
class  Student
{
public:
    string s_name;
    int s_score;
    Student(string sname)
    {
        s_name = sname;
        cout<<"stu构造函数"<<endl;
    }
};

class Teacher
{
public:    
    string t_name;
    Student t_stu;

    Teacher(string tname,string sname) : t_name(tname),t_stu(sname)
    {   
        cout<<"tea构造函数"<<endl;
    }
};
void test01()
{
    
    Teacher t1("zhao","li");
    cout<<t1.t_stu.s_name<<endl;
}


int main()
{
    test01();
    return 0;
}