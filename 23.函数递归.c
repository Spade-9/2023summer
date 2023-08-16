//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>

////史上最简单的递归
// 
//int main()
//{
//	main();
//	return 0;
//}


////接受一个整型值（无符号），按照顺序打印它的每一位。例如：1234，输出：1 2 3 4 .
// 
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	return 0;
//}


////编写函数不允许创建临时变量，求字符串的长度。
//
////my_strlen("jsy")
////1+my_srelen("sy")
////1+1+my_strlen("s")
////1+1+1+my_strlen("")
////1+1+1+0
////3
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	//此处不可使用str++，因为此++是后置的，str传进去之后才++；
//	//也最好不要使用++str，因为这样虽然传进去的结果一样了，但会导致str改变
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "jsy";
//	int len = my_strlen(arr); printf("len=%d\n", len);
//	return 0;
//}
