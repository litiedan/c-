#include<iostream>
using namespace std;
#include<string>
class Building;//逐行编译，需要提前声明一下Building类
//// 成员函数做友元
class GoodGay
{
public:
    GoodGay();
    void visit();//使其可以访问Building中的私有属性
    void visit2();//使其不能访问Building中的私有属性
    Building * building;
};
class Building//建筑物类
{
    //GoodGay下的visit()是本类的友元函数，可以访问本类中的私有属性
    friend void  GoodGay::visit();
public:
    Building();
    string m_SittingRoom; //客厅
private:
    string m_BadRoom;//卧室
};

//类外写成员函数
Building::Building()
{
        m_SittingRoom="客厅";
        m_BadRoom = "卧室";
}

GoodGay::GoodGay()
{
    //创建建筑物对象
    building = new Building;
}
void  GoodGay::visit()
{
    cout<<"visit函数正在访问："<<building->m_SittingRoom<<endl;
    cout<<"visit函数正在访问："<<building->m_BadRoom<<endl;
}
void  GoodGay::visit2()
{
    cout<<"visit2函数正在访问："<<building->m_SittingRoom<<endl;
    //  cout<<"visit2函数正在访问："<<building->m_BadRoom<<endl;
}
void test01()
{
    GoodGay goodgay;
    goodgay.visit();
    goodgay.visit2();
}
int main()
{
    test01();
    return 0;
}