// LOLI_Adventure.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"


int main()
{
	Battlefield * bf = Battlefield::CreateBattlefield();
	Player * loli = new Player;
	Monster * uncle = new Monster;
	loli->Health(16);
	uncle->Health(8);
	bf->WhoseBattlefield(loli, uncle);
	bf->Start();
	_getch();
	return 0;
}