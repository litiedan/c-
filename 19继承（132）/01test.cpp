#include<iostream>
using namespace std;

// 定义一些类时，下级别的成员除了拥有上一级的共性还有自己的特性
//继承的好处，减少重复代码
// 格式
// class 子类 : 继承方式 父类
//子类 也称为派生类
// 父类 也称为 基类

//子类中的成员包含两大部分
// 一类是从基类继承过来的，表现其共性
// 另一类是自己增加的成员，表现其特性


// // 普通实现页面
// // JAVA页面
// class JAVA
// {
// public:
//     void header()
//     {
//         cout<<"首页、公开课、登录、注册、（公共头部）"<<endl;
//     }
//     void footer()
//     {
//         cout<<"帮助中心，交流合作，占内地图、（公共底部）"<<endl;
//     }
//     void left()
//     {
//         cout<<"JAVA、Python、C++、（公共分类列表）"<<endl;
//     }
//     void content()
//     {
//         cout<<"JAVA学科视频"<<endl;
//     }
// };

// // Python页面
// class Python
// {
// public:
//     void header()
//     {
//         cout<<"首页、公开课、登录、注册、（公共头部）"<<endl;
//     }
//     void footer()
//     {
//         cout<<"帮助中心，交流合作，占内地图、（公共底部）"<<endl;
//     }
//     void left()
//     {
//         cout<<"JAVA、Python、C++、（公共分类列表）"<<endl;
//     }
//     void content()
//     {
//         cout<<"Python学科视频"<<endl;
//     }
// };

// // C++页面
// class CPP
// {
// public:
//     void header()
//     {
//         cout<<"首页、公开课、登录、注册、（公共头部）"<<endl;
//     }
//     void footer()
//     {
//         cout<<"帮助中心，交流合作，占内地图、（公共底部）"<<endl;
//     }
//     void left()
//     {
//         cout<<"JAVA、Python、C++、（公共分类列表）"<<endl;
//     }
//     void content()
//     {
//         cout<<"C++学科视频"<<endl;
//     }
// };


//继承实现公共页面
class BasePage
{
public:
    void header()
    {
        cout<<"首页、公开课、登录、注册、（公共头部）"<<endl;
    }
    void footer()
    {
        cout<<"帮助中心，交流合作，占内地图、（公共底部）"<<endl;
    }
    void left()
    {
        cout<<"JAVA、Python、C++、（公共分类列表）"<<endl;
    }
};
//JAVA页面继承公共页面
class JAVA: public BasePage
{
public:
    void content()
    {
        cout<<"JAVA学科视频"<<endl;
    }
};
//Python页面继承公共页面
class Python: public BasePage
{
public:
    void content()
    {
        cout<<"Python学科视频"<<endl;
    }
};
//C++页面继承公共页面
class CPP: public BasePage
{
public:
    void content()
    {
        cout<<"C++学科视频"<<endl;
    }
};

void test01()
{
    cout<<"JAVA下载视频页面如下::::::::"<<endl;
    JAVA ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout<<"------------------------------------------"<<endl;
    cout<<"Python下载视频页面如下::::::::"<<endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout<<"------------------------------------------"<<endl;
    cout<<"C++下载视频页面如下::::::::"<<endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}


int main()
{
    test01();
    return 0;
}