#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'm';
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* pc = "hello world!";
//
//	printf("%c\n", *pc);
//	printf("%s\n", pc);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10] = { 2,4,1,5,3,7,98,0,31,10 };
//	int b[10] = { 2,1,3,89,9,8,5,7,0,6 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (b[i] == a[j])
//				break;
//		}
//		if (j == 10)
//		{
//			printf("%4d", b[i]);
//		}
//	}
//}

//#include <iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	cout << "2020112966谢昕哲" << endl;
//	const int N = 100;
//	int num1, num2;
//	int a[N], b[N];
//	cout << "请输入集合a的元素个数：";
//	cin >> num1;
//	cout << "请输入" << num1 << "个整数：" << endl;
//	for (int i = 0; i < num1; i++)
//	{
//		cin >> a[i];
//	}
//	cout << "请输入集合b的元素个数：";
//	cin >> num2;
//	cout << "请输入" << num2 << "个整数：" << endl;
//	for (int j = 0; j < num2; j++)
//	{
//		cin >> b[j];
//	}
//	cout << "集合a和b的并集为：" << endl;
//	for (int i = 0; i < num1; i++)
//	{
//		cout << setw(4) << a[i];
//	}
//	for (int i = 0; i < num1; i++)
//	{
//		int j;
//		for (j = 0; j < num1; j++)
//		{
//			if (b[i] == a[j])
//				break;
//		}
//		if (j <= num2)
//		{
//			cout << setw(4) << b[i];
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j || j == 0) printf("1");
//			else printf("%d", i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int murder[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		murder[i] = 1;
//		if ((murder[0] != 1) + (murder[2] == 1) + (murder[3] == 1) + (murder[3] != 1) == 3)
//			break;
//		else murder[i] = 0;
//	}
//	putchar('A' + i);
//
//	return 0;
//}

#include <stdio.h>
int a[2], b[2], c[2], d[2], e[2];
int main()
{
	int i = 0;
	for (i = 0; i < 2; i++)
	{

	}
	return 0;
}