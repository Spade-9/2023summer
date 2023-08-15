//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
////计算阶层
//
//int main()
//{
//	int a = 1;
//	int i = 1;
//	int b = 0;
//	printf("你希望计算多少的阶层?\n");
//	scanf("%d", &b);
//	for (i == 1; i <= b; i++)
//		a = a * i;
//
//	printf("结果是:%d\n", a);
//
//	return 0;
//}
//
//
//
////计算阶层和
//
//int jieceng(int x)
//{
//	int y = 1;
//	int i = 1;
//	int z = x + 1;
//	for (i == 1; i < z; i++)
//		y = y * i;
//	return y;
//}
//
//int main()
//{
//	//int a = 1;
//	//a = jieceng(3);
//	//printf("%d\n", a);
//	int c = 0;
//	printf("你希望计算1的阶层到几的阶层的和？");
//	int a = 0;
//	scanf("%d", &a);
//	int i = 1;
//	for (i = 1; i <= a; i++)
//	{
//		int b = 1;
//		b = jieceng(i);
//		c = c + b;
//
//	}
//	printf("结果为:%d", c);
//	return 0;
//}
//
//
//
////改良
//
//int main()
//{
//	int a = 1;
//	int i = 1;
//	int b = 0;
//	printf("你希望计算1的阶层到几的阶层的和？\n");
//	scanf("%d", &b);
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= b; n++)
//	{
//		a = 1;
//		for (i = 1; i <= n; i++)
//		{
//			a = a * i;
//		}
//		sum = sum + a;
//
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//
//
//
////终极改良
//
//int main()
//{
//	int a = 1;
//	int i = 1;
//	int b = 0;
//	printf("你希望计算1的阶层到几的阶层的和？\n");
//	scanf("%d", &b);
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= b; n++)
//	{
//		a = a * n;
//		sum = sum + a;
//
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
