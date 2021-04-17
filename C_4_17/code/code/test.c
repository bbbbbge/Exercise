#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 10;
//	print(n);
//	return 0;
//}

#include <stdio.h>
void Swap(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	Swap(a, b);
	printf("%d %d", a, b);
	return 0;
}