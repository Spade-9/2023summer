////��ŵ������

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
////n:�������ӵĸ���
////pos1����ʼλ��
////pos2����תλ��
////pos3��Ŀ��λ��
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
//	printf("��������ϵ���������");
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//	printf("\n");
//	printf("���ƶ�����Ϊ��%d\n", count);
//	return 0;
//}