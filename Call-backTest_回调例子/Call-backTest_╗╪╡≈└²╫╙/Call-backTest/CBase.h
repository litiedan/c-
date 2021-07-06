#ifndef CBASE
#define CBASE

#pragma once
#include <functional>
#include <vector>

typedef std::function<void(int)> Fun;

class CBase
{
public:
	CBase();
	~CBase();

	void SetFun(Fun& fun);

	void ClearFun(Fun& fun);

	static void Run(int InA);

	static void whileBase();
};


#endif
