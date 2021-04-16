#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "hello bit";
	memset(arr, 'X', 5);
	printf("%s", arr);
	return 0;
}