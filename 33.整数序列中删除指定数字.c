//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//
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
//	int del = 0;
//	printf("请输入你希望删除的数字:");
//	scanf("%d", &del);

//	int j = 0;//j作为下标锁定的位置用来存放不删除的数据
//	for (i = 0;i<n;i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];//此处++后置
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//for (i = 0; i < n; i++)
//	//{
//	//	if (arr[i] == del)
//	//	{
//	//		continue;
//	//	}
//	//	printf("%d ", arr[i]);
//	//}
//
//	return 0;
//}