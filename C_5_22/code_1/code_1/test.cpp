#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	/*int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p <==> %p\n", &arr[i], p + i);
//	}*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", 2[arr]);//结果为：3
//	printf("%d\n", arr[2]);//结果为：3
//	printf("%d\n", p[2]);  //结果为：3
//	printf("%d\n", 2[p]);  //结果为：3
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int a[5][5] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		int j = 0, cnt = n;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0) a[i][j] = n - i;
//			else a[i][j] = a[i][j-1] + n - j + 1;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//			printf("%-5d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int x = n - 1, y = n - 1;
//	int i = 0;
//	for (i = 0; i < 2 * n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (i != j)
//			{
//				printf("%d", 0);
//			}
//			else
//			{
//				printf("%d", (i < j ? i : n) + 1);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int min(int a, int b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	n = 2 * n - 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= n; j++)
//		{
//			int x = min(min(i, j), min(n - i + 1, n - j + 1));
//			printf("%d ", x);
//		}
//		printf("\n");
////	}
////}
//
//#include <stdio.h>
//struct book
//{
//	float height;
//	char name[20];
//}b;
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//	struct book b;
//};
//int main()
//{
//	struct stu a = { "bobo",18,"2021520",{15.8,"free"} };
//
//	printf("%s\n", a.name);
//	printf("%d\n", a.age);
//	printf("%.1f\n", a.b.height);
//	return 0;
//}

//#include <stdio.h>
//struct book
//{
//	float height;
//	char name[20];
//}b;
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//	struct book b;
//};
//int main()
//{
//	struct stu a = { "bobo",18,"2021520",{15.8,"free"} };
//
//	/*printf("%s\n", a.name);
//	printf("%d\n", a.age);
//	printf("%.1f\n", a.b.height);*///若访问结构体中的结构体中的一个成员，先访问到内部的结构体，再访问内部结构体中的成员
//
//	struct stu* pa = &a;
//	printf("%s\n", pa->name);
//	printf("%d\n", pa->age);
//	printf("%.1f\n", pa->b.height);
//}

#include <stdio.h>
struct book
{
	float height;
	char name[20];
}b;
struct stu
{
	char name[20];
	int age;
	char id[20];
	struct book b;
};
void print(struct stu p)
{
	printf("%s %d %s %.1f %s", p.name, p.age, p.id, p.b.height, p.b.name);
}
int main()
{
	struct stu a = { "bobo",18,"2021520",{15.8,"free"} };

	//写一个函数打印a的内容
	print(a);
	return 0;
}