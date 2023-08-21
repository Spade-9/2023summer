
//测试游戏的逻辑


#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include "game.h"


menu()
{
	printf("----------------------------------\n");
	printf("          三 子 棋 游 戏          \n");
	printf("                                  \n");
	printf("          1:play  0:exit          \n");
	printf("----------------------------------\n");
}



void game()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	char board[ROW][COL] = { 0 };
	//初始化棋盘的函数
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	//下棋
	char ret = 0;
	while(1)
	{
		//玩家
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = Judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = Judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n\n");
	}
	else
	{
		printf("平局\n\n");
	}
}


int main()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n\n");
			break;
		default:
			printf("选择错误!\n\n");
			break;
		}
	} while (input);
	return 0;
}
