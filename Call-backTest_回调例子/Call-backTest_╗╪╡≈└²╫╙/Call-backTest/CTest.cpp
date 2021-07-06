#include "pch.h"
#include "CTest.h"
#include <iostream>

CTest::CTest(std::string InName)
{
	Name = InName;
	fun = std::bind(&CTest::CoutIn, this, std::placeholders::_1);

	base.SetFun(fun);
}


CTest::~CTest()
{
	base.ClearFun(fun);
}

void CTest::CoutIn(int InA)
{
	std::cout<<"����"<< Name <<",��֪ͨ���"<< InA <<std::endl;
}
