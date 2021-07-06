#include<iostream>
using namespace std;
#include<string>
// 在程序里，有些私有属性也想让类外的一些特殊的函数或类进行访问，就需要用到友元技术

// 关键字 friend

// 三种实现：
// 全局函数做友元
// 类做友元
// 成员函数做友元

class Building//建筑物类
{
    //goodgay全局函数是Building的友元，可以访问私有成员
    friend void goodgay(Building &building);
public:
    Building()
    {
        m_SittingRoom="客厅";
        m_BadRoom = "卧室";
    }

public:
    string m_SittingRoom; //客厅

private:
    string m_BadRoom;//卧室

};

//全局函数
void goodgay(Building &building)
{   
    cout<<"好基友的全局函数正在访问："<<building.m_SittingRoom<<endl;
    cout<<"好基友的全局函数正在访问："<<building.m_BadRoom<<endl;//私有属性在类外访问不到，可以通过友元访问
}

void test01()
{
    Building building;
    goodgay(building);
}



int main()
{
    test01();
    return 0;
}