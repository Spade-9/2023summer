//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <string.h>

////ͳ��һ�����Ķ�������1�ĸ���
//int main()
//{
//	int a = 3;
//	int i = 0;
//	for (; a != 0;a=a>>1)
//	{
//		int j = 0;
//		j = a & 1;
//		i += j;
//	}
//
//	return 0;
//}


////���ű��ʽ
//int main()
//{
//	int a = 1;
//	int b = 5;
//	int c = (a++, a += 3, b = a + b, a > b);
//	printf("%d\n", c);
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	double height;
//};
//
//void set_stu(struct Stu* ps)
//{
//	//strcpy((*ps).name, "�׳���");
//	//(*ps).age = 20;
//	//(*ps).height = 188.0;
//	strcpy(ps->name, "�׳���");
//	ps->age = 20;
//	ps->height = 188.0;
//}
//
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.height);
//}
//
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}