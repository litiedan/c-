#include<iostream>
using namespace std;

// 深拷贝和浅拷贝
// 浅拷贝：简单的复制拷贝操作
// 深拷贝：在堆区重新申请空间进行拷贝操作

class Person
{
public:
    Person()
    {
        cout<<"Person的默认构造函数调用"<<endl;
    }
    Person(int age)
    {
        m_age = age;
        cout<<"Person的有参构造函数调用"<<endl;
    }
    Person(int age,int height)
    {
        m_age = age;
        m_height =new int(height);
        cout<<"Person的有参构造函数重载调用"<<endl;
    }
    Person(const Person & p)
    {
        m_age  = p.m_age;
        // m_height  = p.m_height;//编译器默认执行的但是会有冲突的代码
        m_height = new int (*p.m_height);
        cout<<"Person拷贝构造函数"<<endl;
    }




    ~Person()
    {
        //析构代码，将堆区开辟的数据做释放
        //浅拷贝的问题是，堆区的内存重复释放
        if(m_height != NULL)
        {
            delete m_height;
            m_height = NULL;
        }
        cout<<"Person的析构函数调用"<<endl;
    }
    int m_age;
    int *m_height;
};


void test01()
{
    Person p1;
    p1.m_age = 10;
    cout<<p1.m_age<<endl;
    Person p2(p1);
    //虽然没有写拷贝构造函数，但是编译器会提供默认拷贝构造函数实现浅拷贝
    cout<<p2.m_age<<endl;
}

void test02()
{
    Person p3(11,160);
    cout<<p3.m_age<<" "<<*(p3.m_height)<<endl;
    Person p4(p3);
    //虽然没有写拷贝构造函数，但是编译器会提供默认拷贝构造函数实现浅拷贝
   cout<<p4.m_age<<" "<<*(p4.m_height)<<endl;
}



int main()
{

    // test01();
    test02();
    return 0;
}