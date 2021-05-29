#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#define N 100
//int main()
//{
//	char ch;
//	char s[N];
//	scanf("%c", &ch);
//	gets(s);
//	printf("%c\n", ch);
//	printf("%s", s);
//	return 0;
//}

#/*include<stdio.h>
#define N 100
void del_char(char *s, char ch)
{
	char *current = s;
	while (*s != '\0')
	{
		if (*s == ch)
		{
			s++;
			continue;
		}
		*current = *s;
		current++;
		s++;
	}
	*current = '\0';
}
int main()
{
	char ch;
	char s[N];
	scanf("%c", &ch);
	getchar();
	gets(s);
	del_char(s, ch);
	puts(s);
	return 0;
}*/


#include <stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	const char* str3 = "hello bit.";
	const char* str4 = "hello bit.";

	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if(str3==str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");


	return 0;
}