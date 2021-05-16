#define _CRT_SECURE_NO_WARNINGS 1


//冒泡排序
//#include <stdio.h>
//void bubble_sort(int q[], int len)
//{
//	for (int i = 0; i < len - 1; i++)//趟数
//	{
//		for (int j = 0; j < len - 1 - i; j++)//每趟比较的次数
//		{
//			if (q[j] > q[j + 1])
//			{
//				int tmp = q[j];
//				q[j] = q[j + 1];
//				q[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int q[] = { 4,9,0,2,4 };
//	int len = sizeof(q) / sizeof(int);
//	bubble_sort(q, len);
//	for (int i = 0; i < len; i++) printf("%d ", q[i]);
//	return 0;
//}