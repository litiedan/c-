#pragma once
#include <string>
#include "CBase.h"


class CTest
{
public:
	std::string Name;
	Fun fun;
	CBase base;
public:
	CTest(std::string InName);
	~CTest();

	void CoutIn(int InA);
};

