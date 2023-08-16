//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>
//
//
////二分查找
////在一个有序数组中查找具体的一个数，如果找到了就返回该数字的下标，没找到就返回-1
//
//int binary_search(int arr[], int a, int b)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//该处错误  数组在传参时，仅仅传过去数组内首元素的地址
//	//所以本质上传过来的arr是一个指针，占8个字节
//
//	int left = 0;
//	int right = b - 1;
//	
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//
//int main()
//{
//	int arr[] = { -9,-8,-5,-2,-1,0,2,4,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到对应的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
