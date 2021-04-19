#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello World";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello World";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	return 0;
//}


//#include <stdio.h>
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}


//#include <stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}


//#include <stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}

//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//
//ตÝน้
//#include <stdio.h>
//int fac(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fac(n - 1) + fac(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret=fac(n);
//	printf("%d", ret);
//	return 0;
//}


//#include <stdio.h>
//int fac(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "Hello World";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "Hello World";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

#include <stdio.h>
void reverse_string(char * string)
{

}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}
















