//��Ϸ�����ʵ��


#define _CRT_SECURE_NO_WARNINGS 

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

////��һ���汾
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡ����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//��ӡ�ָ���
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	printf("\n");
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0; 
	int y = 0;
	printf("�������\n");
	while (1)
	{
		printf("����������(�� ��):");
		scanf("%d %d", &x, &y);
		//���귶Χ�Ϸ����ж�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ��,������ѡ��\n");
			}
		}
		else
		{
			printf("�����������,����������\n");
		}
	}

}void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;//0--2
		y = rand() % col;//0--2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//����������˾ͷ���1
//��������0
int Full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

////��һ���汾
//char Judge(char board[ROW][COL], int row, int col)
//{
//	//��
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//	//��
//	int j = 0;
//	for (j = 0; j < col; j++)
//	{
//		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
//		{
//			return board[1][j];
//		}
//	}
//	//�Խ���
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	//ƽ��
//	if (Full(board, row, col))
//	{
//		return 'Q';
//	}
//	//��Ϸ����
//	return 'C';
//}

char Judge(char board[ROW][COL], int row, int col)
{
	//��
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int x = 0;
		for (x = 0; x < col - 2; x++)
		{
			if (board[i][x] == board[i][x + 1] && board[i][x + 1] == board[i][x + 2] && board[i][x] != ' ')
			{
				return board[i][x];
			}
		}
	}
	//��
	int j = 0;
	for (j = 0; j < col; j++)
	{
		int y = 0;
		for (y = 0; y < row - 2; y++)
		{
			if (board[y][j] == board[y + 1][j] && board[y + 1][j] == board[y + 2][j] && board[y][j] != ' ')
			{
				return board[y][j];
			}
		}
	}
	//�Խ���
	int a = 0;
	for (a = 0; a < row - 2; a++)
	{
		int b = 0;
		for (b = 0; b < col - 2; b++)
		{
			if (board[a][b] == board[a + 1][b + 1] && board[a][b] == board[a + 2][b + 2] && board[a][b] != ' ')
			{
				return board[a][b];
			}
		}

	}
	for (a = 0; a < row - 2; a++)
	{
		int b = col;
		for (b = 0; b > 2; b--)
		{
			if (board[a][b] == board[a + 1][b - 1] && board[a][b] == board[a + 2][b - 2] && board[a][b] != ' ')
			{
				return board[a][b];
			}
		}

	}

	//ƽ��
	if (Full(board, row, col))
	{
		return 'Q';
	}
	//��Ϸ����
	return 'C';
}