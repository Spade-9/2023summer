////汉诺塔问题

//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>
//
//int count = 0;
//
//void move(char pos1, char pos2)
//{
//	count++;
//	printf("%c->%c  ", pos1, pos2);
//}
//
//
//void Hanoi(int n, char pos1, char pos2,char pos3)
////n:代表盘子的个数
////pos1：起始位置
////pos2：中转位置
////pos3：目的位置
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		Hanoi(n - 1, pos1, pos3, pos2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入杆上的盘子数：");
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//	printf("\n");
//	printf("总移动次数为：%d\n", count);
//	return 0;
//}