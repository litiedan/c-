#pragma once
#include <iostream>
#include "point.h"
using namespace std;
class Circle
{
public:
    //设置半径
    void setR(int r);


    //获取半径
    int getR();

    //设置圆心
    void setCenter(point certer);

    //获取圆心
    point getCenter();

private:
    int m_R;
    //在类中可以让另一个类作为本类中的成员，比如在圆类中调用点类
    point m_certer;
};