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
//	int len = my_strlen(arr); printf("len=%d\n", len);
//	return 0;
//}
