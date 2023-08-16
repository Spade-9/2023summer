////写一个判断是否为素数的函数
//
//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>
//
//int is_prime(int a)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(a); j++)
//	{
//		if (a % j == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 99; i <= 999; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}