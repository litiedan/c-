#include<iostream>
using namespace std;
#include<string>

class Building//建筑物类
{
    friend class GoodGay;//GoodGay是本类的友元类，可以访问本类中的私有属性
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




//// 类做友元
class GoodGay
{
public:
    GoodGay();
    void visit();//参观函数    访问Building中的属性
    Building * building;
};

GoodGay::GoodGay()
{
    //创建建筑物对象
    building = new Building;
}
void GoodGay::visit()
{
    cout<<"好基友类正在访问： "<<building->m_SittingRoom<<endl;
    cout<<"好基友类正在访问： "<<building->m_BadRoom<<endl;
}



void test01()
{
    GoodGay goodgay;
    goodgay.visit();
}



int main()
{
    test01();
    return 0;
}