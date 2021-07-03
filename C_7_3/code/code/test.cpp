#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return  x - y;
//}
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add, Sub };//pfArr是一个函数指针数组
//
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return  x - y;
//}
//int Mul(int x, int y)
//{
//	return  x * y;
//}
//int Div(int x, int y)
//{
//	return  x / y;
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1.Add      2.Sub ******\n");
//	printf("****** 3.Mul      4.Div ******\n");
//	printf("*********** 0.Exit ***********\n");
//	printf("******************************\n");
//}
//int main()
//{
//	//计算器——计算整型的加、减、乘、除
//	int input = 0;
//	do
//	{
//		menu();
//		int x, y;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			break;
//		case 0:
//			printf("已经退出程序\n");
//			break;
//		default:
//			printf("选择有误，请重新选择\n");
//			break;
//		}
//	} while (input);
//
//
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return  x - y;
//}
//int Mul(int x, int y)
//{
//	return  x * y;
//}
//int Div(int x, int y)
//{
//	return  x / y;
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1.Add      2.Sub ******\n");
//	printf("****** 3.Mul      4.Div ******\n");
//	printf("*********** 0.Exit ***********\n");
//	printf("******************************\n");
//}
//int main()
//{
//	//计算器——计算整型的加、减、乘、除
//	int input = 0;
//	do
//	{
//		menu();
//		int(*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x, y;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//			printf("选择错误,重新选择\n");
//	} while (input);
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int(*p1)(int, int);//函数指针
//	int(*p2[4])(int, int);//函数指针数组
//	int(*(*p3)[4])(int, int) = &p2;//p3就是一个指向函数指针数组的指针
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return  x - y;
//}
//int Mul(int x, int y)
//{
//	return  x * y;
//}
//int Div(int x, int y)
//{
//	return  x / y;
//}
//int Calc(int(*p)(int, int))
//{
//	int x, y;
//	printf("请输入两个数:>");
//	scanf("%d%d", &x, &y);
//	return p(x, y);
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1.Add      2.Sub ******\n");
//	printf("****** 3.Mul      4.Div ******\n");
//	printf("*********** 0.Exit ***********\n");
//	printf("******************************\n");
//}
//int main()
//{
//	//计算器——计算整型的加、减、乘、除
//	int input = 0;
//	do
//	{
//		menu();
//		int x, y;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			break;
//		case 0:
//			printf("已经退出程序\n");
//			break;
//		default:
//			printf("选择有误，请重新选择\n");
//			break;
//		}
//	} while (input);
//
//
//
//	return 0;
//}

//void qsort(void* base, size_t num, size_t size, int(*compar)(const void*, const void*))
//{
//
//}
//void* 可以存放任意类型 
//base 中存放的是待排序数据中第一个对象的地址
//num 排序数据元素的个数
//size 排序数据中每个元素的大小（字节）
//为指向比较函数的函数指针，决定了排序的顺序

//#include <stdio.h>
//#include <stdlib.h>
////qosrt函数的使用者得实现一个比较函数
//int int_cmp(const void * p1, const void * p2)
//{
//	return (*(int *)p1 - *(int *)p2);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int com_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//void test1()//按照年龄来排序
//{
//	struct Stu s[] = { {"C",50},{"Java",25},{"Python",36} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), com_age);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//}
//int com_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//void test2()//按照名字来排序
//{
//	struct Stu s[] = { {"C",50},{"Java",25},{"Python",36} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), com_name);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//}
//int main()
//{
//	test1();//按照年龄来排序
//	printf("\n");
//	test2();//按照名字来排序
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
void Swap(char* p1, char* p2, int width)//将每个值的每个字节都进行交换
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}
void bubble_qsort(void* base, int sz, int width, int(*cmp)(const void *p1, const void *p2))
{
	int i = 0;
	for (int i = 0; i < sz - 1; i++)//趟数
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//每趟排序
		{
			//两个元素比较
			//用char的原因是不知道数据类型，但我们知道每个字节宽度，故用char将指针单位变为1就可
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int cmp_int(const void * p1, const void * p2)
{
	return (*(int *)p1 - *(int *)p2);
}
void test()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qsort(arr, sz, sizeof(int), cmp_int);
	int i = 0;
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	test();
	return 0;
}