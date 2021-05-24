#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{ 
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char a[20] = "flkhjsfasd";
//	char b[20] = "hello";
//	my_strcpy(a, b);
//	printf("%s", a);
//	return 0;
//}
#include <assert.h>
#include <stdio.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(src!=NULL);//断言，只要你满足某个条件不能
//	while (*dest++ = *src++)//既copy了\0，又使得循环停止
//	{
//		;
//	}
//}
//void my_strcpy(char* dest, const char* src)
//{
//	assert(*src != NULL);
//	assert(*dest != NULL);
//	while (*src++ = *dest++)
//	{
//		;
//	}
//}
//int main()
//{
//	char a[20] = "flkhjsfasd";
//	char b[20] = "hello";
//	my_strcpy(a, b);
//	printf("%s", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const int num = 10;//修饰变量，不能被修改，但本质还是变量
//	int* p = &num;
//	*p = 20;
//	printf("%d", num);
//	return 0;
//}


//模拟strlen
//#include <stdio.h>
//#include <assert.h>
//size_t my_strlen(const char* str)//size_t就是unsigned int
//{
//	assert(str != NULL);
//	size_t cnt = 0;
//	while (*str++)
//	{
//		cnt++;
//	}
//	return cnt;
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d", my_strlen(a));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++) *(p + i) = 0;
//	for (i = 0; i < 5; i++) printf("%d ", arr[i]);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x", a);
	return 0;
}