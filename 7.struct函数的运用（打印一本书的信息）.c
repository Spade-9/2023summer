////struct����������
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
//	struct BOOK book1 = { "��������","��Ǳ",99 };
//	printf("����:%s\n", book1.name);
//	printf("����:%s\n", book1.author);
//	printf("�۸�:%d\n", book1.price);
//	book1.price = 999;
//	printf("�������ļ۸�:%d\n\n", book1.price);
//
//	struct BOOK* a = &book1;
//	//printf("����:%s\n", (*a).name);
//	//printf("����:%s\n", (*a).author);
//	//printf("�۸�:%d\n", (*a).price);
//	printf("����;%s\n", a->name);
//	printf("����:%s\n", a->author);
//	printf("�۸�:%d\n", a->price);
//	return 0;
//}