// LOLI_Adventure.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"

int main()
{
	Battlefield * bf = Battlefield::CreateBattlefield();
	Player * loli = new Player;
	Monster * uncle = new Monster;
	loli->Health(160); loli->WhoAmI("LOLI");
	uncle->Health(160); uncle->WhoAmI("怪蜀黍");
	bf->WhoseBattlefield(loli, uncle);
	bf->Start();
	return 0;
}