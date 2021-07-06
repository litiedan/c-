#include<iostream>
using namespace std;

// 菱形继承
// 一个基类同时被两个派生类继承
// 这两个派生类又同时被一个类继承
// 又称为钻石继承

// 动物类
// -羊类  -驼类
// --羊驼类
// 羊驼类会继承两份来自动物类的成员 只需要一份即可


// 动物类
class Animal
{
public:
    int m_age;
};
// 利用虚继承可以解决菱形继承的问题  virtual
//Animal 变为虚基类
// 羊类
class Sheep : virtual public Animal{};
//驼类
class Tuo : virtual public Animal{};
// 羊驼类
class SheepTuo : public Sheep,public Tuo{};

void test01()
{
    SheepTuo st;
    st.Sheep::m_age = 18;
    st.Tuo::m_age = 19;
    st.m_age = 20;
    //当菱形继承，两个父类拥有相同的数据，需要加作用域以区分
    //这份数据只有一份即可，菱形继承导致两份造成资源浪费
    //虚继承之后则不需要
    cout<<"st.Sheep::m_age: "<<st.Sheep::m_age<<endl;
    cout<<"st.Tuo::m_age: "<<st.Tuo::m_age<<endl;
    cout<<"st.m_age: "<<st.m_age<<endl;
    

}

int main()
{
    test01();
    return 0;
}