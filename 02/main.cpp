//writed by zhang ning 2018/3/5 20:11
//本程序用来求解位姿变换问题
#include <iostream>
#include <cmath>
using namespace std;

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
// Eigen 几何模块
#include <eigen3/Eigen/Geometry>

int main( int argc, char** argv)
{
  Eigen::Vector3d p1,t1,t2;
  p1 << 0,0,0;
  t1 << 0.021,-1.500,0.107;

// 四元数Eigen::Quaterniond 的正确初始化顺序为Eigen::Quaterniond(w,x,y,z)
// 而 coeffs的顺序是（x,y,z,w）,w 为实部，前三者为虚部
// 因为要表示相反的旋转，故输入为q1的共轭，即实部不变，虚部变为相反数
  Eigen::Quaterniond q1 = Eigen::Quaterniond(-0.503,0.497,0.497,0.503).normalized();
  cout << q1.coeffs().transpose() << endl;


  Eigen::Vector3d pw = q1*(p1-t1);  //数学上是qpq-1

  cout << pw << endl;
  cout << pw[0] << endl;
  cout << pw[1] << endl;
  cout << pw[2] << endl;

  return 0;
}