//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>

//int main()
//{
//	int n = 0;
//	printf("你希望输入多少个数字？");
//	scanf("%d", &n);
//	int arr[20];
//	int i = 0;
//	printf("请输入数字:");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//找出最大最小值
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//
//	printf("%d\n", max - min);
//}

////若已知输入数字的范围(比如0～100),还可以简化成如下代码
//int main()
//{
//	int n = 0;
//	printf("你希望输入多少个数字？");
//	scanf("%d", &n);
//	int arr[20];
//	int i = 0;
//
//	int max = 0;
//	int min = 100;
//
//	printf("请输入数字:");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d\n", max - min);
//}