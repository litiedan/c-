#include<iostream>
using namespace std;

struct student
{
    //成员列表
    string name; 
    int age;
    int score;
};

int main()
{
    //结构体数组
    student arr[3] = 
    {
        {"zhang",18,100},
        {"wang",14,55},
        {"li",15,88}
    };
    cout<<arr[1].name<<endl;
    arr[1].name = "dao";
    cout<<arr[1].name<<endl;

    for(int i = 0;i<3;i++)
    {   
        cout<<i<<endl;
        cout<<arr[i].name<<" ";
        cout<<arr[i].age<<" ";
        cout<<arr[i].score<<endl;
    }
    return 0;
}