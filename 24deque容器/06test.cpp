#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
using namespace std;

// 有5名选手(ABCDE),10个评委分别对每一个选手打分，去掉最高分和最低分，取平均分
//选手类
class Person
{
public:
    Person(string name,int score)
    {
        this->m_name = name;
        this->m_socre = score;
    }
    string m_name;
    int m_socre;

};


void creatPerson(vector<Person> &v)
{
    string nameSeed = "ABCDE";
   for(int i = 0;i<5;i++)
    {
        string name = "选手";
        name = name + nameSeed[i];

        int score = 0;
        Person p(name,score);
        v.push_back(p);

    }
}
//打分
void setScore(vector<Person> &v)
{
    for(vector<Person>::iterator it = v.begin();it!=v.end();it++)
    {
        deque<int> d;
        for(int i=0;i<10;i++)
        {
            int score = rand() % 41 + 60;//60-100
            d.push_back(score);
        }
        cout<<"选手："<<it->m_name<<"   打分"<<endl;
        for(deque<int>::iterator dit = d.begin();dit!= d.end();dit++)
        {
            cout<<*dit<<" ";
        }
        cout<<endl;
        //排序
        sort(d.begin(),d.end());
        //去除最高分和最低分
        d.pop_front();
        d.pop_back();
        int sum= 0;
        //遍历分数求和
        for(deque<int>::iterator dit = d.begin();dit!= d.end();dit++)
        {
            sum += *dit;
        }
        //求平均分
        int avg = sum/d.size();
        //给分数赋值
        it->m_socre = avg;

    }
}
void showScore(vector<Person> &v)
{
    for(vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        cout<<"姓名："<<it->m_name<<"   平均分："<<it->m_socre<<endl;
    }
}

int main()
{
    //1. 创建5名选手
    vector<Person> v;
    creatPerson(v);
    // 测试
    // for (vector<Person>::iterator it = v.begin();it!=v.end();it++)
    // {
    //     cout<<"姓名："<<(*it).m_name<<"------分数："<<(*it).m_socre<<endl;
    // }
    
    //2. 给5名选手打分
    setScore(v);

    //3. 显示最后得分
   cout<<"-------------------------------------"<<endl;
    cout<<"最终得分"<<endl;
    showScore(v);
    return 0;
}