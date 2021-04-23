#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fac1(int x,int y)
{
	int j = 0;
	int b = 1;
	for (j = x; y>0; y--)
	{
		b *= j;
	}
	int c = 1;
	for (j = y; y > 0; j--)
	{
		c *= j;
	}
	return b/c;
}
int steps_way(int n)
{
	int sum = 1;
	int i = 0;
	for (i = 1; i <= n / 2; i++)
	{
		int a = 0;
		a = n - i * 2+i;
		sum += fac1(a, i);
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d", &n);
	int count = 0;
	count = steps_way(n);
	printf("%d", count);
	return 0;
}