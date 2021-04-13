#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
//猜对了，恭喜，游戏结束
//猜错了，会告诉你猜大了，还是猜小了，继续猜，直到正确
//游戏会一直进行，除非自动结束

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("***** 1.play   0.exit ****\n");
//	printf("**************************\n");
//}
//void game()
//{
//	//rand函数返回一个0-32767之间的数字
//	//srand设置一个随机数起点
//	//time时间戳：计算机开始时间到调用函数之间的
//	int ret = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else
//		{
//			printf("恭喜你！猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;//不能放在循环里面
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 0:
//				printf("退出游戏！");
//				break;
//			case 1:
//				printf("开始猜数字游戏！");
//				game();
//				break;
//			default:
//				printf("输入错误，请重新选择！");
//				break;
//		}
//	} while (input);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int cout = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int num = i;
//		while (num)
//		{
//			if (num % 10 == 9)
//				cout++;
//			num /= 10;
//		}
//	}
//	printf("%d", cout);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	double a = 1.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += a * 1 / i;
//		a = -a;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int max = 0;
//	scanf("%d", &max);
//	for (i = 0; i < 9; i++)
//	{
//		int b = 0;
//		scanf("%d", &b);
//		if (b > max)
//		{
//			max = b;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, j*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int num = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("该数字下标为:%d", mid);
//			break;
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
flag:
	goto flag;
}











