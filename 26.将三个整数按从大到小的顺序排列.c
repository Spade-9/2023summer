////将三个整数按从大到小的顺序排列
//
//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>
//
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//int tmp = 0;
//	//if (a < b)
//	//{
//	//	tmp = a;
//	//	a = b;
//	//	b = tmp;
//	//}
//	//if (a < c)
//	//{
//	//	tmp = a;
//	//	a = c;
//	//	c = tmp;
//	//}
//	//if (b < c)
//	//{
//	//	tmp = b;
//	//	b = c;
//	//	c = tmp;
//	//}
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&b, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}