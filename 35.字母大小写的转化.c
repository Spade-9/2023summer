//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//
////大写字母变小写,小写字母变大写
////多组输入,每一行输入一个字母
//
//int main()
//{
//	char ch = 0;
//	//while (scanf("%c", &ch) == 1)
//	while (scanf("%c", &ch) != EOF)
//		//scanf读取成功,返回读取到的;失败,返回EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c", ch - 32);
//		//else
//		//	printf("%c", ch + 32);
//		//getchar();//处理\n
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c", ch + 32);
//		printf("\n");
//	}
//	
//	return 0;
//}

//注:库函数中大小写转换的函数
//所需头文件为:#include <ctype.h>
//while (scanf("%c", &ch) != EOF)
//{
//	if(islower(ch)
//		printf("%c",toupper(ch));
//	else if(isupper)
//		printf("%c",tolower(ch));	
//}