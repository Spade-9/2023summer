//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>

////冒泡排序
//// 一趟冒泡排序让一个数据来到它最终应该出现的位置
//// 
////数组传参时有两种写法  1.数组  2.指针
//
////形参是数组的形式(直观,容易理解)
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i - 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//}
//
//
//int main()
//{
//	//把数组的数据排成升序
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	//趟数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


