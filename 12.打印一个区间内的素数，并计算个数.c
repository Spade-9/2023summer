#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//��ӡ100��200�����������������

////1.�Գ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//		
//	}
//	printf("%d\n", count);
//	return 0;
//}


//2.
//i�������������i=a*b��a��b������һ������<=����i  ( ���ǽ������j<=i,��Ϊj<=sqrt(i),i==j��Ϊj>sqrt(i),���Լ���i������ʱ���жϴ��� )
//sqrt  ��ƽ������ѧ�⺯��
#include <math.h>
//int main()
//{
	//int a = 0;
	//int b = 0;
	//printf("��ϣ����ӡ���ٵ����ٵ�����?(��������һ�����ֺ󰴻س���)\n");
	//scanf("%d\n%d", &a, &b);
	//int i = 0;
	//int count = 0;
	//for (i = a; i <= b; i++)
	//{
	//	
	//	int j = 0;
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i == 1)
	//		{
	//			break;
	//		}
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (i!=1&j>sqrt(i))
	//	{
	//		count++;
	//		printf("%d\n", i);
	//	}
	//}
	//printf("�ܹ���%d������\n", count);
//	return 0;
//}


////3.��ǰ�ų�ż��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��ϣ����ӡ���ٵ����ٵ�����?(��������һ�����ֺ󰴻س���)\n");
//	scanf("%d\n%d", &a, &b);
//	int i = 0;
//	int count = 0;
//	printf("\n\n%d��%d�������У�\n", a, b);
//	if (a % 2 == 0)
//	{
//		for (i = a+1; i <= b; i+=2)
//		{
//
//			int j = 0;
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (i == 1)
//				{
//					break;
//				}
//				if (i % j == 0)
//				{
//					break;
//				}
//			}
//			if (i != 1 & j > sqrt(i))
//			{
//				count++;
//				printf("%d\n", i);
//			}
//		}
//		printf("�ܹ���%d������\n", count);
//	}
//
//	else
//	{
//		for (i = a ; i <= b; i += 2)
//		{
//
//			int j = 0;
//			for (j = 2; j <= sqrt(i); j+=2)
//			{
//				if (i == 1)
//				{
//					break;
//				}
//				if (i % j == 0)
//				{
//					break;
//				}
//			}
//			if (i != 1 & j > sqrt(i))
//			{
//				count++;
//				printf("%d\n", i);
//			}
//		}
//		printf("�ܹ���%d������\n", count);
//	}
//    return 0;
//}
//
