////struct函数的运用
// 
// 
// 
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//
//struct BOOK
//{
//	char name[30];
//	char author[30];
//	short price;
//};
//
//int main()
//{
//	struct BOOK book1 = { "人鱼陷落","麟潜",99 };
//	printf("书名:%s\n", book1.name);
//	printf("作者:%s\n", book1.author);
//	printf("价格:%d\n", book1.price);
//	book1.price = 999;
//	printf("炒出来的价格:%d\n\n", book1.price);
//
//	struct BOOK* a = &book1;
//	//printf("书名:%s\n", (*a).name);
//	//printf("作者:%s\n", (*a).author);
//	//printf("价格:%d\n", (*a).price);
//	printf("书名;%s\n", a->name);
//	printf("作者:%s\n", a->author);
//	printf("价格:%d\n", a->price);
//	return 0;
//}
