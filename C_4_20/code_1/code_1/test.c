#define _CRT_SECURE_NO_WARNINGS 1
//µİ¹é ÄæĞòÅÅÁĞ
//#include <stdio.h>
//void reverse_string(char * string)
//{
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include <stdio.h>
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
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
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
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
//int DigitSum(int n)
//{
//	if (n > 0)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//double my_pow(double n, int k)
//{
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	else if (k < 0)
//	{
//		return 1.0 / n * my_pow(n, -k - 1);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	double n;
//	int k;
//	scanf("%lf %d", &n, &k);
//	double ret=my_pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}


//µİ¹é ÄæĞòÅÅÁĞ(µÚÒ»°æ£©
//#include <stdio.h>
//void reverse_string(char * string)
//{
//	int count = 0;
//	while (*(string+count) != '\0')
//	{
//		count++;
//	}
//	if (count>1)
//	{
//		char tmp = *string;
//		*string = *(string + count - 1);
//		*(string + count - 1) ='\0';
//		reverse_string(string + 1);
//		*(string + count - 1) = tmp;
//	}
//	
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}



//(µÚ¶ş°æ)
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
//void reverse_string(char* string)
//{
//	int left = 0;
//	int right = my_strlen(string) - 1;
//	while (left < right)
//	{
//		int tmp = string[left];
//		string[left] = string[right];
//		string[right] = tmp;
//		left++;
//		right--;
//	}
//}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}












