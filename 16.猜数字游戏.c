////猜数字游戏


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
////猜数字游戏
////1.电脑生成随机数
////2.猜数字后告诉你偏大还是偏小
////3.游戏可反复进行
//
//
//void menu()
//{
//	printf("-------------------------------------\n");
//	printf("         1:开始游戏   0:退出         \n");
//	printf("-------------------------------------\n");
//}
//
//void game()
//{
//	//1. 生成随机数
//	//srand((unsigned int)time(NULL));//需要一个总在变化的数字
//	//时间戳  当前计算机的时间-计算机的起始时间(1970.1.1.0:0:0)=xxxx(秒)
//	
//	//rand生成0到RAND_MAX的随机数  其中RAND_MAX为32767
//	int ret = 0;
//	ret = rand()%100+1;//生成1--100的随机数
//	//printf("%d\n", ret);
//
//	//2. 猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n\n");
//		}
//		else
//		{
//			printf("猜对了!!!");
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
//		printf("开始游戏选择1,退出游戏选择0：");
//		scanf("%d", &input);
//		printf("\n");
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		printf("\n\n");
//	} while (input);
//	return 0;
//}
