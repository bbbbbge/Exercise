#define _CRT_SECURE_NO_WARNINGS 1

//不用新的数交换两个数的值
//#include <stdio.h>
//int main()
//{
//	//1. 加减法
//	//缺点：数字过大会溢出
//	/*int a = 10, b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);*/
//
//	//2. 异或法
//	/*int a = 10, b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);*/
//	return 0;
//}

//求某个数中二进制的1的个数
//#include <stdio.h>
//int main()
//{
//	int n, cnt = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n & 1) cnt++; 
//		n = n >> 1;
//	}
//	printf("%d", cnt);
//	return 0;
//}

//sizeof是一个操作符，不是函数，比如（）可以不用，计算数据长度时

//int arr[10];------->int [10]是数组类型，可以用sizeof(int [10])计算数组长度

//#include <stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int a = m ^ n, cnt = 0;
//	while (a)
//	{
//		if (a & 1) cnt++;
//		a = a >> 1;
//	}
//	printf("%d", cnt);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, cnt = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n & 1) cnt++;
//		n = n >> 1;
//	}
//	printf("%d", cnt);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	//加减法
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//异或法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d %d", a, b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num, odnum, evnum, cnt = 0;
//	scanf("%d", &num);
//	odnum = num;
//	evnum = num;
//	while (cnt <= 32)
//	{
//		if (cnt % 2 == 0)
//		{
//			evnum = evnum & (~(1 << cnt));
//		}
//		else
//		{
//			odnum = odnum & (~(1 << cnt));
//		}
//		cnt++;
//	}
//	printf("%d %d", evnum, odnum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	printf("%d", a);
//	return 0;
//}

