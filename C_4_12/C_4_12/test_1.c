#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <windows.h>
int main()
{
	//数组数组名本来就是地址。所以%s，后面password前面不加&
	//char password[20] = { 0 };
	//printf("请输入密码>:");
	//scanf("%s", password);
	//printf("请确认密码(Y/N)>:");
	//int tmp = 0;
	//while ((tmp = getchar()) != '\n')
	//{
	//	;
	//}
	//int ch = getchar();
	///*getchar();*/
	//if ('Y' == ch)
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("确认失败\n");
	//}
	//int ch = 0;
	//while ((ch=getchar() )!= EOF)
	//{
	//	putchar(ch);//输出字符
	//}
	/*int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
		i = 5;
	}*/
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right = sz - 1;
	////int mid = (left + right) / 2;
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else if(arr[mid] > k) 
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("找到了，下标为%d", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("找不到！");
	//}
	//char arr1[] = "weclome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	//int right = strlen(arr1) - 1;

	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	printf("%s\n", arr2);
	//	Sleep(1000);//睡眠，单位，毫秒
	//	system("cls");//清空屏幕-----为了打印成一行
	//}
	//printf("%s", arr2);
	return 0;
}