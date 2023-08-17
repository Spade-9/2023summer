////求最大值
//
//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>
//
//
//
//int main()
//{
//	//int arr[] = { 0 };//此处没有指定数组内元素的个数，就会根据初始化的内容来推算元素的个数
//	//即 int arr[]={0} 相当于 int arr[1]={0},后期放入内容会导致错误
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为:%d\n", max);
//	return 0;
//}
