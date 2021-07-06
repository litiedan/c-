// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include "pch.h"
#include <iostream>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
#include <cmath>

Eigen::Vector3d LocationCalculate(Eigen::Quaterniond InCameraRotate, Eigen::Vector3d InCameraLocation, Eigen::Vector3d InPointLocation)
{
	Eigen::Matrix3d RQuat = InCameraRotate.toRotationMatrix();
	Eigen::Matrix4d TranCa(4, 4);
	TranCa(0, 0) = RQuat(0, 0);			TranCa(0, 1) = RQuat(0, 1);			TranCa(0, 2) = RQuat(0, 2);			TranCa(0, 3) = InCameraLocation[0];
	TranCa(1, 0) = RQuat(1, 0);			TranCa(1, 1) = RQuat(1, 1);			TranCa(1, 2) = RQuat(1, 2);			TranCa(1, 3) = InCameraLocation[1];
	TranCa(2, 0) = RQuat(2, 0);			TranCa(2, 1) = RQuat(2, 1);			TranCa(2, 2) = RQuat(2, 2);			TranCa(2, 3) = InCameraLocation[2];
	TranCa(3, 0) = 0;					TranCa(3, 1) = 0;					TranCa(3, 2) = 0;					TranCa(3, 3) = 1;

	Eigen::MatrixXd TranPoi(4, 1);
	TranPoi(0, 0) = InPointLocation[0];		  
	TranPoi(1, 0) = InPointLocation[1];	
	TranPoi(2, 0) = InPointLocation[2];	
	TranPoi(3, 0) = 1;					
	Eigen::MatrixXd MapPoi(4, 1);
	MapPoi =  TranCa * TranPoi;
	return Eigen::Vector3d(MapPoi(0,0), MapPoi(1,0), MapPoi(2,0));
}

int main()
{ 
	//Camera在Map下的位置
	//double CameraRotate[4] = {0.500,-0.500,0.500,0.505};//w x y z
	double CameraRotate[4] = {0.500,0.500,-0.500,-0.505};//w x y z
	double CameraLocation[3] = {0.100,0.000,1.500};//x y z

	//空间一点在Camera下的位置
	double PointLocation[3] = { -0.28,0.05,3.07 };//x y z

	Eigen::Quaterniond q1 = Eigen::Quaterniond(CameraRotate[0], CameraRotate[1], CameraRotate[2], CameraRotate[3]).normalized();
	Eigen::Vector3d InCameraLocation(CameraLocation[0], CameraLocation[1],CameraLocation[2]);
	Eigen::Vector3d InPointLocation(PointLocation[0], PointLocation[1], PointLocation[2]);

	Eigen::Vector3d point = LocationCalculate(q1, InCameraLocation, InPointLocation);

	std::cout << point[0] << "  " << point[1] << "  " << point[2] << "  " << std::endl;

	return 0;
}


