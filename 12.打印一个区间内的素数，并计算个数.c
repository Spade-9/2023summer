#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//打印100到200的素数，并计算个数

////1.试除法
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
//i如果不是素数，i=a*b，a和b中至少一个数字<=根号i  ( 于是将上面的j<=i,改为j<=sqrt(i),i==j改为j>sqrt(i),可以减少i是素数时的判断次数 )
//sqrt  开平方的数学库函数
#include <math.h>
//int main()
//{
	//int a = 0;
	//int b = 0;
	//printf("你希望打印多少到多少的素数?(请在输入一个数字后按回车键)\n");
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
	//printf("总共有%d个素数\n", count);
//	return 0;
//}


////3.提前排除偶数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("你希望打印多少到多少的素数?(请在输入一个数字后按回车键)\n");
//	scanf("%d\n%d", &a, &b);
//	int i = 0;
//	int count = 0;
//	printf("\n\n%d到%d的素数有：\n", a, b);
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
//		printf("总共有%d个素数\n", count);
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
//		printf("总共有%d个素数\n", count);
//	}
//    return 0;
//}
//
