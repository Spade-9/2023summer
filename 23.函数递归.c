//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>

////ʷ����򵥵ĵݹ�
// 
//int main()
//{
//	main();
//	return 0;
//}


////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺1234�������1 2 3 4 .
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
//	//�ݹ�
//	print(num);
//	return 0;
//}


////��д��������������ʱ���������ַ����ĳ��ȡ�
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
//	//�˴�����ʹ��str++����Ϊ��++�Ǻ��õģ�str����ȥ֮���++��
//	//Ҳ��ò�Ҫʹ��++str����Ϊ������Ȼ����ȥ�Ľ��һ���ˣ����ᵼ��str�ı�
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


////��n�Ľײ㡣
//
////�ݹ�ķ�ʽ
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//////�����ķ�ʽ
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


////���n��쳲�������
//////�ݹ�
////int Fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);//��������ָ��ʽ������2 �Ĵη���
////}
//
////����
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