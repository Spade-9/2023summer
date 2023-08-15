////设计一个关机程序
//
//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	//shutdown -s -t 60命令电脑在60s后关闭  (shutdown -a可取消操作)
//	//system()  用于执行系统命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意,你的电脑将在1分钟内关机,如果输入:我是猪,可取消关机\n请输入:");
//	char input[20] = {0};
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//strcmp:用于比较两个字符串
//	{
//		system("shutdown -a");
//		printf("取消关机成功");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
