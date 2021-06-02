#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	char* pc = "hello world!";//将字符串首字符'h'地址放入pc
//
//	printf("%c\n", *pc);//结果为：h
//	printf("%s\n", pc);//结果为：hello world!
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello world!";
//	char str2[] = "hello world!";
//	const char* str3 = "hello world!";
//	const char* str4 = "hello world!";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if(str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int arr[10];//整型数组——存放整型的数组
//char ch[5];//字符数组——存放字符的数组
//
////指针数组——存放指针的数组
//int* parr[5];//整型指针数组，有五个元素，每个元素是一个整形指针


//#include <stdio.h>
//int main()
//{/*
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}*/
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 2,3,4,5,6 };
//	int c[5] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float b = 9.0;
//	printf("%d", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	int (*parr)[5] = &arr;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int(*pi)[5] = &arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(*pi+i));
//	}
//
//	return 0;
//}

#include <stdio.h>
//void print1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)   
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

void print2(int(*p)[5], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	//print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}