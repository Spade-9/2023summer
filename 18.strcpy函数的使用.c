#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	char arr1[] = "ºæ…Ÿ“ª";
	char arr2[20] = "####";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}