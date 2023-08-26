//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>


//实现字符串逆序


////循环
//int main()
//{
//	char arr[] = "abcdef";
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int right = sz - 2;
//	int right = strlen(arr);
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

////递归
//void reverse_string(char* str)
//{
//	//abcdefg
//	//1.a放在一个临时区
//	char tmp = *str;
//	//2将g放在a的位置.
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	//3.g的位置放上"\0",使得"bcde"成为一个字符串(因为字符串以\0结尾)
//	*(str + len - 1)='\0';
//	//4.逆序中间的
//	if (strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);
//	}
//	//5.把a放上去
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}


//void reverse_string(char str[], int left,int right)
//{
//	char tmp = str[left];
//	str[left] = str[right];
//	str[right] = tmp;
//	if (left+1 < right-1)
//	{
//		reverse_string(str, left + 1, right - 1);
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = strlen(arr)-1;
//	reverse_string(arr,left,right);
//	printf("%s\n", arr);
//}
