////��������Ϸ


//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//
//
//
//
////��������Ϸ
////1.�������������
////2.�����ֺ������ƫ����ƫС
////3.��Ϸ�ɷ�������
//
//
//void menu()
//{
//	printf("-------------------------------------\n");
//	printf("         1:��ʼ��Ϸ   0:�˳�         \n");
//	printf("-------------------------------------\n");
//}
//
//void game()
//{
//	//1. ���������
//	//srand((unsigned int)time(NULL));//��Ҫһ�����ڱ仯������
//	//ʱ���  ��ǰ�������ʱ��-���������ʼʱ��(1970.1.1.0:0:0)=xxxx(��)
//	
//	//rand����0��RAND_MAX�������  ����RAND_MAXΪ32767
//	int ret = 0;
//	ret = rand()%100+1;//����1--100�������
//	//printf("%d\n", ret);
//
//	//2. ������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n\n");
//		}
//		else
//		{
//			printf("�¶���!!!");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ʼ��Ϸѡ��1,�˳���Ϸѡ��0��");
//		scanf("%d", &input);
//		printf("\n");
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//		printf("\n\n");
//	} while (input);
//	return 0;
//}
