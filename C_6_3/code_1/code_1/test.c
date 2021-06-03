#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	int n;
//	scanf("%d", &n);
//	if (n >= 0 && n <= 3 + 5 - 2)
//		printf("exit\n");
//	else
//		printf("not exist\n");
//
//	return 0;
//}

//杨氏矩阵
//#include <stdio.h>
//int findnum(int arr[3][3], int row, int col, int num)
//{
//	int i = 0, j = col - 1;
//	while (i < row && j >= 0)
//	{
//		if (arr[i][j] > num)
//			j--;
//		else if (arr[i][j] < num)
//			i++;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,5,7},{3,7,9},{5,9,11} };
//	int a=findnum(arr, 3, 3, 12);
//	if (a)
//		printf("exist!\n");
//	else
//		printf("not exist!\n");
//	return 0;
//}


//#include <stdio.h>
//int findnum(int(*p)[5], int row, int col, int num)
//{
//	int i = 0, j = col - 1;
//	while (i < row&&j >= 0)
//	{
//		if (*(*(p + i) + j) > num)
//			j--;
//		else if (*(*(p + i) + j) < num)
//			i++;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	if (findnum(arr, 3, 5, 14))
//		printf("exist!\n");
//	else
//		printf("not exist!\n");
//	return 0;
//}


//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//		printf(">\n");
//	else
//		printf("</n");
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000000000; i++)
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
//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
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

#include <stdio.h>
int main()
{
	int arr[] = { 1,5,8,9,3,6,2,7,4,7 };
	int len = sizeof(arr) / sizeof(int);
	int i = -1, j = len;
	while (i < len)
	{
		do i++; while ((i < len) && arr[i] % 2 != 0);//为什么要再加i<len因为怕全偶或者全奇的数，导致数组越界
		do len--; while ((i < len) && arr[len] % 2 == 0);
		if (i < len)
		{
			int tmp = arr[i];
			arr[i] = arr[len];
			arr[len] = tmp;
		}
	}
	for (i = 0; i < j; i++)
		printf("%d ", arr[i]);
	return 0;
}


