//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>
//
//
////���ֲ���
////��һ�����������в��Ҿ����һ����������ҵ��˾ͷ��ظ����ֵ��±꣬û�ҵ��ͷ���-1
//
//int binary_search(int arr[], int a, int b)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//�ô�����  �����ڴ���ʱ����������ȥ��������Ԫ�صĵ�ַ
//	//���Ա����ϴ�������arr��һ��ָ�룬ռ8���ֽ�
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
//		printf("�Ҳ�����Ӧ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
