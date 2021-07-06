#include <iostream>
using namespace std;

class Student{
public:
    Student(char *name, int age, float score);
    void show();
private:
    static int m_total;  //静态成员变量
private:
    char *m_name;
    int m_age;
    float m_score;
};

//初始化静态成员变量
int Student::m_total = 0;

Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score)
{
    m_total++;  //操作静态成员变量
}

void Student::show()
{
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<"（当前共有"<<m_total<<"名学生）"<<endl;
}

int main(){
    //创建匿名对象
    (new Student("小明", 15, 90)) -> show();
    cout<<"第一个进来"<<endl;
    (new Student("李磊", 16, 80)) -> show();
    cout<<"第2个进来"<<endl;
    (new Student("张华", 16, 99)) -> show();
    cout<<"第3个进来"<<endl;
    (new Student("王康", 14, 60)) -> show();
    cout<<"第4个进来"<<endl;

    return 0;
}