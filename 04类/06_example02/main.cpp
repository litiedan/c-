#include <iostream>
#include <string>
using namespace std;
class point
{
public:
    void setX(int x)
    {
        m_x = x;
    }
    void setY(int y)
    {
        m_y = y;
    }
    int getX()
    {
        return m_x;
    }
    int getY()
    {
        return m_y;
    }
private:
    int m_x;
    int m_y;
};
class Circle
{
public:
    //设置半径
    void setR(int r)
    {
        m_R = r;
    }

    //获取半径
    int getR()
    {
        return m_R;
    }
    //设置圆心
    void setCenter(point certer)
    {
        m_certer = certer;
    }
    //获取圆心
    point getCenter()
    {
        return m_certer;
    }
private:
    int m_R;
    //在类中可以让另一个类作为本类中的成员，比如在圆类中调用点类
    point m_certer;
};

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