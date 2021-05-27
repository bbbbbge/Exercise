#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//#include <float.h>
//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;



#include <stdio.h>
int main()
{
	int n = 9;
	float* pf = (float*)&n;
	printf("n的值为:%d\n",n);
	printf("*p的值为:%f\n", *pf);

	*pf = 9.0;
	printf("n的值为:%d\n", n);
	printf("*p的值为:%f\n", *pf);
	return 0;
}