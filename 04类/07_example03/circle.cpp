#include "circle.h"

void Circle::setR(int r)
{
    m_R = r;
}

//获取半径
int Circle::getR()
{
    return m_R;
}
//设置圆心
void Circle::setCenter(point certer)
{
    m_certer = certer;
}
//获取圆心
point Circle::getCenter()
{
    return m_certer;
}
