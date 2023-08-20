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
//	int arr[3][4] = {0};
//	int i = 0;
//
//	//向一个二维数组中放入元素
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//打印一个二维数组的内容
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////二维数组的数组名理解
//int main()
//{
//	int arr[3][4];
//
//	printf("该数组行数为：%d\n", sizeof(arr)/sizeof(arr[0]));
//	printf("该数组列数为：%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	return 0;
//}