////在有序数组中找一个数的位置
//
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
////按顺序挨着找
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("请输入你想查找的数字：");
//	scanf("%d", &k);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标为:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("没找到\n");
//	return 0;
//}
//
//
////折半查找算法 / 二分查找算法
//int main()
//{
//	int k = 0;
//	printf("请输入你想查找的数字:");
//	scanf("%d", &k);
//	int arr[] = { 1,2,4,5,6,8,9,10,11,13,16,19,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标为:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//
//
//	return 0;
//}