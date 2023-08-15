////自定义一个函数


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>

//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 9;
//	int b = 10;
//	int jsy = 1;
//	int qs = 0;
//	int sum = 0;
//	sum = ADD(a, b);
//
//	printf("sum=%d", sum);
//
//	return 0;
//}


////下面的函数Swap无法实现想要的交换效果
//void Swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
//
//
//int main()
//{
//	int a = 9;
//	int b = 99;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

////更改
//void Swap2(int*pa,int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 9;
//	int b = 99;
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}