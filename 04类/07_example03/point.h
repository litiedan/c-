#pragma once
#include <iostream>
using namespace std;
//点类
class point
{
public:
    void setX(int x);

    void setY(int y);

    int getX();

    int getY();

private:
    int m_x;
    int m_y;
};