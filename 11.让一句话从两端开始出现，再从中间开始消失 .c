////让一句话从两端开始出现，再从中间开始消失 
// 
// 
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>

//int main()
//{
//	char arr1[] = "我是TFBOYS的粉丝!!I am a fan of TFBOYS!!";
//	char arr2[] = "                                        ";
//	char arr3[] = "                                        ";
//	int left = 0;
//	int a = 1;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//数组最后的\0也有一个下标
//	int right = strlen(arr1) - 1;
//	int b = strlen(arr1) - 2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		arr2[a] = arr1[a];
//		arr2[b] = arr1[b];
//		printf("%s\n", arr2);
//		Sleep(1000);//暂停0.1秒
//		system("cls");//清空内容
//		left += 2;
//		right -= 2;
//		a += 2;
//		b -= 2;
//	}
//
//	while (a >= b && right >= 0)
//	{
//		arr1[left] = arr3[left];
//		arr1[right] = arr3[right];
//		arr1[a] = arr3[a];
//		arr1[b] = arr3[b];
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//		left += 2;
//		right -= 2;
//		a += 2;
//		b -= 2;
//	}
//
//	return 0;
//}