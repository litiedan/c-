//g++编译含多个cpp文件的代码时，需要同时编译
//g++ main.cpp point.cpp circle.cpp
#include <iostream>
#include <string>
#include "point.h"
#include "circle.h"
using namespace std;
//判断点和圆的位置关系
void isInCircle(Circle c,point p)
{
    //点到圆心的距离的平方
    int dis = (c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY())+(c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX());
    if(dis == c.getR()*c.getR())
    {
        cout<<"点在圆上"<<endl;
    }
    else if(dis > c.getR()*c.getR())
    {
        cout<<"点在圆外"<<endl;
    }
    else
    {
        cout<<"点在圆内"<<endl;
    }
}
int main()
{
    point p1,p2;
    
    p1.setX(0);
    p1.setY(1);
    p2.setX(0);
    p2.setY(3);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;

    Circle c1;
    c1.setR(2);
    c1.setCenter(p1);
    cout<<c1.getR()<<endl;
    cout<<c1.getCenter().getX()<<endl;
    cout<<c1.getCenter().getY()<<endl;

    isInCircle(c1,p2);

    return 0;

}