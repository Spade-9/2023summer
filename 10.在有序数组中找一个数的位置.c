////��������������һ������λ��
//
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
////��˳������
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("������������ҵ����֣�");
//	scanf("%d", &k);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("û�ҵ�\n");
//	return 0;
//}
//
//
////�۰�����㷨 / ���ֲ����㷨
//int main()
//{
//	int k = 0;
//	printf("������������ҵ�����:");
//	scanf("%d", &k);
//	int arr[] = { 1,2,4,5,6,8,9,10,11,13,16,19,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ���,�±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//
//
//	return 0;
//}