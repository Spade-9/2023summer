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
//	int len = my_strlen(arr); 
//	printf("len=%d\n", len);
//	return 0;
//}


////求n的阶层。
//
////递归的方式
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//////迭代的方式
////int factorial(int n)
////{
////	int i = 0;
////	int fac = 1;
////	for (i = 1; i <= n; i++)
////	{
////		fac *= i;
////	}
////	return fac;
////}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fac = factorial(n);
//	printf("fac=%d\n", fac);
//	return 0;
//}


////求第n个斐波那契数
//////递归
////int Fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);//计算量成指数式暴增（2 的次方）
////}
//
////迭代
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fib = Fib(n);
//	printf("%d\n", fib);
//	return 0;
//}