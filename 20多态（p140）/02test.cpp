#include<iostream>
#include<string>
using namespace std;

// 分别利用普通写法和多态技术，实现两个操作数进行运算的计算器类

// 多态的优点
//     代码组织结构清晰
//     可读性强
//     利于前期和后期的扩展和维护


// 普通写法
class Calculator
{
public:
    int getResult(string oper)
    {
        if(oper == "+")
        {
            return m_num1+m_num2;
        }
        else if(oper == "-")
        {
            return m_num1 - m_num2;
        }
        else if(oper == "*")
        {
            return m_num1*m_num2;
        }
        //如果想扩展新的功能，需要修改源码
        //在真实的开发中提倡开闭原则   对扩展进行开放  对修改进行关闭
    }

    int m_num1;
    int m_num2;
};

void test01()
{
    Calculator cal;
    cal.m_num1 = 10;
    cal.m_num2 = 20;

    cout<<cal.m_num1<<"+"<<cal.m_num2<<"="<<cal.getResult("+")<<endl;
    cout<<cal.m_num1<<"-"<<cal.m_num2<<"="<<cal.getResult("-")<<endl;
    cout<<cal.m_num1<<"*"<<cal.m_num2<<"="<<cal.getResult("*")<<endl;
}

// 利用多态实现计算器
// 实现计算器抽象类
class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_num1;
    int m_num2;
};
//加法计算器类
class AddCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_num1 + m_num2;
    }
};
//减法计算器类
class SubCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_num1 - m_num2;
    }
};
//乘法计算器类
class MulCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_num1 * m_num2;
    }
};




void test02()
{
    // 多态的使用条件————父类的指针或者引用指向子类对象
    AbstractCalculator * abs ;

    // 加法运算
    abs = new AddCalculator;
    abs->m_num1 = 100;
    abs->m_num2 = 200;
    cout<<abs->m_num1<<"+"<<abs->m_num2<<"="<<abs->getResult()<<endl;
    //用完后记得销毁
    delete abs;

        // 减法运算
    abs = new SubCalculator;
    abs->m_num1 = 100;
    abs->m_num2 = 200;
    cout<<abs->m_num1<<"-"<<abs->m_num2<<"="<<abs->getResult()<<endl;
    //用完后记得销毁
    delete abs;

        // 乘法运算
    abs = new MulCalculator;
    abs->m_num1 = 100;
    abs->m_num2 = 200;
    cout<<abs->m_num1<<"*"<<abs->m_num2<<"="<<abs->getResult()<<endl;
    //用完后记得销毁
    delete abs;

}




int main()
{
    test01();
    test02();
    return 0;
}