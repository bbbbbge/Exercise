#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//void print(int* p, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(int);
//	print(arr, len);
//	return 0;
//}

//#include <stdio.h>
//void print(int n)
//{
//	int i = 0, t = 0;
//	for (i = 0; i < 5; i++)//趟数
//	{
//		int j = 0, s = 0;
//		for (j = 0; j <= i; j++)
//		{
//			s = s * 10 + n;
//		}
//		t += s;
//	}
//	printf("%d", t);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int cnt = 0, sum = 0, a, n = i, m = i;
//		while (n)
//		{
//			cnt++;
//			n /= 10;
//		}
//		while (m)
//		{
//			a = m % 10;
//			m /= 10;
//			sum += pow(a, cnt);
//		}
//		if (sum == i) printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void reverse(char* str, int n)
//{
//	int i = 0;
//	while (i < n)
//	{
//		char tmp = *(str + i);
//		*(str + i) = *(str + n);
//		*(str + n) = tmp;
//		i++;
//		n--;
//	}
//}
//int main()
//{
//	char arr[110];
//	gets_s(arr);
//	int len = strlen(arr);
//	reverse(arr, len - 1);
//	puts(arr);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0, x = n / 2, y = n / 2;;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (abs(x - i) + abs(y - j) <= n / 2) printf("*");
//			else printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 20, cnt = 20, a = 0;
//	while (n != 1)
//	{
//		cnt += n / 2;
//		if (n % 2 == 0)
//		{
//			n /= 2;
//		}
//		else
//		{
//			n = n / 2 + 1;
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,5,8,9,3,6,2,7,4,7 };
//	int len = sizeof(arr) / sizeof(int);
//	int i = -1,j = len;
//	while (i < len)
//	{
//		do i++; while (arr[i] % 2 != 0);
//		do len--; while (arr[len] % 2 == 0);
//		if (i < len)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[len];
//			arr[len] = tmp;
//		}
//	}
//	for (i = 0; i < j; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//size_t my_strlen(char* str)
//{
//	char* start = str;
//	while (*str++)
//	{
//		;
//	}
//	return str - start - 1;
//}
//int main()
//{
//	char arr[] = "l;fdasfjk";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* sin)
//{
//	assert(sin != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *sin++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a[20] = "uuuuuuuuuuu";
//	char b[] = "i like you";
//	printf("%s", my_strcpy(a, b));
//	return 0;
//}
//
//int main()
//{
//	printf("%d", 2);
//}
//#include <stdio.h>

//最小公倍数
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	/*for (i = a; i <= a * b; i++)
//	{
//		if (i%a == 0 && i%b == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}*/
//	for (i = 1; i <= b; i++)
//	{
//		if (a*i%b == 0)
//		{
//			printf("%d", i*a);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void reverse(char* str, int len)
//{
//	int i = 0;
//	while (i <= len)
//	{
//		char tmp = *(str + i);
//		*(str + i) = *(str + len);
//		*(str + len) = tmp;
//		i++;
//		len--;
//	}
//}
//int main()
//{
//	char s[110];
//	gets(s);
//	int len = strlen(s) - 1;
//	reverse(s, len);
//	int i = 0, cnt = 0;
//	for (i = 0; i <= len + 1; i++)
//	{
//		if (s[i] == ' '|| s[i] == '\0')
//		{
//			reverse(&s[cnt], i - cnt - 1);
//			cnt = i + 1;
//		}
//	}
//	puts(s);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char a[110];
	gets(a);
	int len = strlen(a);
	reverse(a, a + len - 1);
	char* start = a;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	puts(a);
	return 0;
}