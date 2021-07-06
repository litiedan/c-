#include<iostream>
using namespace std;
#include<string>
//3个老师，每个老师五个学生
struct Student
{

    string name;
    int score;
};

struct Teacher
{
    string name;
    Student student[5];
};
void allocateSpace(Teacher teacher[],int len)
{   
    string  nameSeed = "ABCDE";
    for(int i = 0;i < len ;i++)
    {
        teacher[i].name = "T_";
        teacher[i].name += nameSeed[i];
        for(int j = 0;j<5;j++)
        {
            teacher[i].student[j].name = "s_";
            teacher[i].student[j].name += nameSeed[j];
            int random = rand() % 101; 
            teacher[i].student[j].score  = random;
        }
    }
}
void printInfo(Teacher teacher[],int len)
{
    for(int i = 0;i <len;i++)
    {
        cout<<"老师姓名"<<teacher[i].name<<endl;
        for(int j = 0;j<5;j++)
        {   
            cout<<"\t学生姓名"<<teacher[i].student[j].name<<endl;
            cout<<"\t \t学生分数"<<teacher[i].student[j].score<<endl;
        }
    }
}
int main()
{
    Teacher teacher[3];
    int len = sizeof(teacher)/sizeof(teacher[0]);

    allocateSpace(teacher,len);
    printInfo(teacher,len);
    return 0;
}