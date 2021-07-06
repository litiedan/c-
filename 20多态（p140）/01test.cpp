#include<iostream>
using namespace std;

// 多态是c++面向对象三大特性之一
// 多态分为两类
//     静态多态：函数重载和重载运算符等 复用函数名
//     动态多态：派生类和虚函数实现运行时多态
// 区别：
//     1.静态多态的函数地址早绑定-编译阶段
//     2.动态多态的函数地址晚绑定-运行阶段

// 动态多态满足条件
//     有继承关系
//     子类重写父类的虚函数
// 动态多态的使用
//     父类的指针或者引用执行子类对象



// 动物类
class Animal
{
public:
    virtual void speak()
    {
        cout<<"animal speaking"<<endl;
    }
};
// 猫类
class Cat : public Animal
{
public:
    void speak()
    {
        cout<<"cat speaking"<<endl;
    }
};
// 狗类
class Dog : public Animal
{
public:
    void speak()
    {
        cout<<"dog speaking"<<endl;
    }
};
//执行说话的函数
// 地址早绑定
// 如果想执行让猫说话，则不能在编译阶段绑定
void doSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);//父子类会强制类型转化
    Dog dog;
    doSpeak(dog);
}

void test02()
{
    cout<<"sizeof Animal = "<<sizeof(Animal)<<endl;//空类的大小是1
}

int main()
{
    test01();
    test02();
    return 0;
}