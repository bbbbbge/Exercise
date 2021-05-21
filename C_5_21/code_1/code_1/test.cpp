#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}

//char  *pc = NULL;	//NULL：空指针，本质就是0
//int   *pi = NULL;
//short *ps = NULL;
//long  *pl = NULL;
//float *pf = NULL;
//double *pd = NULL;

//假设为32位机器
//int* pa;
//char* pc;
//double* pd;
//printf("%d\n", sizeof(pa));//	结果：4
//printf("%d\n", sizeof(pc));//	结果：4
//printf("%d\n", sizeof(pd));//	结果：4

//int a = 0x11223344;// 通过调试，a存着 44 33 22 11
//int* pa = &a;
//*pa = 0;//调试到这一步，a的值变为 00 00 00 00
//
////若将int* pa=&a改成char* pc=&a;
//*pc = 0;//调试到这一步，a的值变为

//int arr[10] = { 0 };
//int* pi = arr;
//char* pc = arr;//因为指针大小一样，可以正常存储地址
//
//printf("%p\n", pi);//调试假设结果为：004FFC40
//printf("%p\n", pi + 1);//结果为：004FFC44
//
//printf("%p\n", pc);//结果为：004FFC40
//printf("%p\n", pc + 1);//结果为：004FFC4100 33 22 11
//
//int main()
//{
//	//这里的p为野指针
//	int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	*p = 20;//非法访问内存
//
//	return 0;
//}
//
//int arr[10] = 0;
//int*p = arr;
//int i = 0;
//for (i = 0; i <= 10; i++)//当i=10时，指针已经越界了，所指向空间不是数组的，故p就是野指针
//{
//	*p = i;
//	p++;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//调用tset函数后，test函数中创建了变量a，并且将a的地址返回出来，但是当return之后，a的生命周期也结束了，a变量被销毁。虽然指针p接收到了一个地址，但是p已经不能通过地址去访问到a
//	*p = 20;
//	return 0;
//}
//
//float a[5];
//float* pa;
//for (pa = &a[0]; pa < &a[5])//pa<&a[5]：指针的关系运算
//{
//	*pa++ = 0;//++优先级高于*，所以指针先++，再解引用（指针加整数）
//}
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//int* p = arr;
//int* pend = arr + 9;
//while (p <= pend)//（指针的关系运算）
//{
//	printf("%d\n", *p);
//	p++;//（指针加整数）
//}
//
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//printf("%d\n", &arr[9] - &arr[0]);//结果为9	（指针-指针）
//
////指针-指针得到的是两个指针之间的元素个数
//
//int my_strlen(char* str)
//{
//	int cnt = 0;
//	while (*str != '\0')
//	{
//		cnt++;
//		str++;
//	}
//	return cnt;
//}
//int main()
//{
//	int len = my_strlen("abc");//传到my_strlen函数中的其实是字符a的地址
//	printf("%d\n", len);
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	char* strat = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
