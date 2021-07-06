#include "pch.h"
#include "CBase.h"
#include <windows.h>
std::vector<Fun> AllFuns;

CBase::CBase()
{
}


CBase::~CBase()
{
}

void CBase::SetFun(Fun& fun)
{
	AllFuns.push_back(fun);
}

void CBase::ClearFun(Fun& fun)
{
	//从vector中删除指定的某一个元素 
	for (std::vector<Fun>::iterator iter = AllFuns.begin(); iter != AllFuns.end(); iter++)
	{ 
		if ((*iter).target<void(int)>() == fun.target<void(int)>())
		{
			AllFuns.erase(iter);
			break;
		}
	}
}

void CBase::Run(int InA)
{
	for (Fun& CurrentFun : AllFuns)
	{
		CurrentFun(InA);
	}
}

void CBase::whileBase()
{
	int i = 0;
	while (true)
	{
		i++;
		if (i > 100) i = 0;
		Run(i);

		Sleep(1000);
	}
}

