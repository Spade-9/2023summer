
//������Ϸ���߼�


#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include "game.h"


menu()
{
	printf("----------------------------------\n");
	printf("          �� �� �� �� Ϸ          \n");
	printf("                                  \n");
	printf("          1:play  0:exit          \n");
	printf("----------------------------------\n");
}



void game()
{
	srand((unsigned int)time(NULL));//������������������
	char board[ROW][COL] = { 0 };
	//��ʼ�����̵ĺ���
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	//����
	char ret = 0;
	while(1)
	{
		//���
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = Judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//����
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = Judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n\n");
	}
	else
	{
		printf("ƽ��\n\n");
	}
}


int main()
{
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n\n");
			break;
		default:
			printf("ѡ�����!\n\n");
			break;
		}
	} while (input);
	return 0;
}
