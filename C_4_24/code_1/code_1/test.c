#define _CRT_SECURE_NO_WARNINGS 1

//	 递归求汉诺塔移动次数
#include <stdio.h>
#include <math.h>
int Tower(int n)
{
	if (n > 0)
		return (int)pow(2, n - 1) + Tower(n - 1);
	else
		return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	int count = Tower(n);
	printf("%d", count);
	return 0;
}

//	求汉诺塔步骤
//#include <stdio.h>
//void print_tower(int n)
//{
//	int A = n;
//	int B = 0;
//	int C = 0; 
//	if (A % 2 == 0)
//	{
//		printf("A->B\n");
//		A--;
//	}
//	else
//	{
//		printf("A->C\n");
//		A--;
//	}
//
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print_tower(n);
//	return 0;
//}




//递归求青蛙跳台阶
//#include <stdio.h>
//int combination_num(int x, int y)		// 求组合数
//{
//	int i = 0;
//	int b = 1;
//	int z = y;
//	for (i = x; y > 0; y--, i--)			// 求组合数分子的值
//	{
//		b *= i;
//	}
//	int j = 0;
//	int c = 1;
//	for (j = z; j > 0; j--)				//	求组合数分母的值
//	{
//		c *= j;
//	}
//	return b / c;
//}
//int steps_way(int n,int i)					//青蛙跳台阶方法
//{
//	if ( i <= n/2 )
//	{
//		int a = 0;
//		a = n - i * 2 + i;
//		return combination_num(a, i) + steps_way(n,i+1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	int i = 0;
//	count = steps_way(n,i);
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int f(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	return f(n - 1) + f(n - 2);
//}
//int main()
//
//{
//	int n;
//	scanf("%d", &n);
//	int ret = f(n);
//	printf("%d", ret);
//	return 0;
//}



//#include <stdio.h>
//int fac(int m)
//{
//	int i = 0;
//	int count = 1;
//	for (i = 1; i <= m; i++)
//	{
//		count *= i;
//	}
//	return count;
//}
//int f(int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= n / 2; i++)
//	{
//		int a = 0;
//		a = n - i * 2 + i;
//		sum += fac(a) / (fac(i)*fac(a - i));
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = f(n);
//	printf("%d", ret);
//	return 0;
//}

//#include <stdio.h>
//int f(int n)
//{
//	if (n == 1)
//		return 1;
//	return 2*f(n - 1);
//}
//int main()
//
//{
//	int n;
//	scanf("%d", &n);
//	int ret = f(n);
//	printf("%d", ret);
//	return 0;
//}

//#include <stdio.h>
//int f(int n,int m)
//{
//	if (n > m)
//		return 2 * f(n - 1, m) - f(n - 1 - m, m);
//	else
//	{
//		if (n == 1)
//			return 1;
//		return 2 * f(n - 1, n);
//	}
//}
//int main()
//
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int ret = f(n,m);
//	printf("%d", ret);
//	return 0;
//}