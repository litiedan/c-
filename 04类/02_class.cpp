#include <iostream>
using namespace std;

    //类在设计中，可以把属性和行为放在不同的权限下，加以控制
    //访问权限有三种
    //public 公共权限，类内可以访问，类外可以访问。
    //protected 保护权限，类内可以访问，类外不能访问。  继承中，子类可以访问父类
    //private 私有权限，类内可以访问，类外不能访问。 继承中，子类不可以访问父类

class Person{

public:
    //公共权限
    //姓名
    string m_Name;

protected:
    string m_Car;

private:
    string m_Password;

public:
    void func()
    {
        //类内可以访问所有权限的属性
        m_Name = "zhang";
        m_Car = "audi";
        m_Password = "123";
    }

};
int main(){
    // 通过类创建对象叫实例化
    Person p1;
    p1.func();//运行公共权限成员函数，给对象赋值
    cout<<p1.m_Name<<endl;//zhang
    p1.m_Name = "李四";//修改公共成员属性
    // p1.m_Car = "diao"//报错，m_Car为保护权限，类外不能访问
    // p1.m_Password = "654"//报错，m_Passwordm_Car为保护权限，类外不能访问
    cout<<p1.m_Name<<endl;//李四
    return 0;
}