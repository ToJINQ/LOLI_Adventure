// LOLI_Adventure.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"


int main()
{
	Battlefield * bf = Battlefield::CreateBattlefield();
	Player * loli = new Player;
	Monster * uncle = new Monster;
	loli->Health(56);
	uncle->Health(40);
	bf->WhoseBattlefield(loli, uncle);
	bf->Start();
	WaitAnyKey();
	return 0;
}