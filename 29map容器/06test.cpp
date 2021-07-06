#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<ctime>
using namespace std;

// 公司新招10个员工（A-J），需要指派到去哪个部门工作
// 员工信息有 姓名 工资组成；部门有 策划，美术，研发
// 随机给10名员工分配部门和工资
// 通过multimap进行信息的插入，key(部门编号)  value(员工)
// 分部门显示员工信息

// 实践步骤
// 1.创建10名员工，放到vector中
//2. 遍历vector容器，取出每个员工，进行随机分组
// 3.分组后，将员工部门编号作为key，具体员工作为value，放入到multimap中
// 4.分部门显示员工信息

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
    string m_Name;
    int m_Salary;
};

void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin();it!=m.end();it++)
    {
           cout<<"key:"<<(*it).first<<" value:"<<it->second<<endl;
    }
    cout<<endl;
}

void createWorker(vector<Worker> &v)
{
    string nameSeed = "ABCDEFGHIJ";
    for(int i = 0;i<10;i++)
    {
        Worker worker;
        worker.m_Name = "员工";
        worker.m_Name += nameSeed[i];

        worker.m_Salary = rand() % 10000 + 10000;//随机数10000-19999
        v.push_back(worker);
    }
}
void setGroup(vector<Worker> &v,multimap<int,Worker> &m)
{   
    for(vector<Worker>::iterator it = v.begin();it!=v.end();it++)
    {
        // 产生随机部门编号
        int deptId = rand() % 3;//0 1 2
        //将员工插入到分组中 key是部门编号，value是员工
        m.insert(make_pair(deptId,(*it)));
    }
}

void showWorkerByGroup(multimap<int,Worker> &m)
{
    cout<<"策划部门的信息_____________________"<<endl;
    multimap<int,Worker>::iterator pos = m.find(CEHUA);//找到策划人的位置
    int count = m.count(CEHUA);//统计策划部门的人数
    int index = 0;
    for(;pos!=m.end()&& index < count;pos++,index++)
    {
        cout<<"姓名："<<pos->second.m_Name<<"   工资："<<pos->second.m_Salary<<endl;
    }

    cout<<"美术部门的信息_____________________"<<endl;
    pos = m.find(MEISHU);//找到策划人的位置
    count = m.count(MEISHU);//统计策划部门的人数
    index = 0;
    for(;pos!=m.end()&& index < count;pos++,index++)
    {
        cout<<"姓名："<<pos->second.m_Name<<"   工资："<<pos->second.m_Salary<<endl;
    }
    cout<<"研发部门的信息_____________________"<<endl;
    pos = m.find(YANFA);//找到策划人的位置
    count = m.count(YANFA);//统计策划部门的人数
    index = 0;
    for(;pos!=m.end()&& index < count;pos++,index++)
    {
        cout<<"姓名："<<pos->second.m_Name<<"   工资："<<pos->second.m_Salary<<endl;
    }
}

int main()
{
    //随机种子  利用系统时间做随机 需要包含ctime头文件
    srand((unsigned int) time(NULL));
    //1.创建员工
    vector<Worker> vWorker;
    createWorker(vWorker);

    //测试
    for(vector<Worker>::iterator it = vWorker.begin();it!=vWorker.end();it++)
    {
        cout<<"姓名："<<it->m_Name<<"   工资："<<it->m_Salary<<endl;
    }

    //2.员工分组
    multimap<int,Worker> mWorker;
    setGroup(vWorker,mWorker);
    
    // 3.分组显示员工
    showWorkerByGroup(mWorker);

    return 0;
}