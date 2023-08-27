
////变种水仙花数(Lily Number):把任意数字,从中间拆分成两个数字,如果所有拆分后数字的乘积之和等于自身,就是一个Lily Numbe.
////例如:655=6*55+65*5
//
//
//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);//求次方的函数
//			sum += (i % k) * (i / k);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
