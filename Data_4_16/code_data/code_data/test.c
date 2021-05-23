#define _CRT_SECURE_NO_WARNINGS 1

//函数结果状态代码
//#define TRUE 1
//#define FALSE 0
//#define OK 1
//#define ERROR 0
//#define INFEASIBLE -1			infeasible 不能实现的
//#define OVERFLOW -2				overflow 溢出
//
//Status 是函数的类型，其值是函数结果状态代码
//typedef int Status;
//typedef char ElemType;


//exit:状态值通常设置为0，以指示正常退出，并设置为其他值，以指示错误。



//线性表L的初始化（参数用引用）
//Status InitList_Sq(SqList &L)			//构造一个空的顺序表L
//{
//	L.elem = (ElemType*)malloc(sizeof(ElemType)*MAXSIZE);		//为顺序表分配空间
//	if (!L.elem) exit(OVERFLOW);		//存储分配失败
//	L.length = 0;						//空表长度为0
//	return OK;
//}

//销毁线性表L
//void DestroyList(SqList &L)
//{
//	if (L.elem) delete L.elem;			//释放寻存储空间
//}

//清空线性表L
//void ClearList(SqList &L)
//{
//	L.length = 0;
//}

//求线性表长度
//int Getlength(SqList L)
//{
//	return (L.length);
//}

//判断线性表是否为空
//int IsEmpty(SqList L)
//{
//	if (L.length == 0) return 1;
//	else return 0;
//}

//顺序表的取值（根据位置i获取相对应位置数据元素的内容）
//int GetElem(SqList L, int i, ElemType &e)
//{
//	if (i<i || i>L.length) return ERROR;
	/*e = L.elem[i - 1];
	return OK;*/
//}

//顺序表的查找
//int LocateElem(SqList L, ElemType e)
//{
//	for (i = 0; i < L.length; i++)
//	{
//		if (L.elem[i] == e) return i + 1;
//	}
//	return 0;
//}





//#include <stdio.h>
//int get_max(int a, int b, int c)			//求三者的最大值，运用三目运算符，条件表达式
//{
//	return a > b ? (a > c ? a : c) : (b > c ? b : c);
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d", get_max(a, b, c));
//	return 0;
//}

//#include <stdio.h>
//int is_leap_year1(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int is_leap_year2(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int is_leap_year(int y)
//{
//	return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
//}
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	if (is_leap_year(y))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//void Swap(int* x, int* y)
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//#include <stdio.h>
//void print(int n)
//{
//	int col = n;
//	int row = n;
//	int i = 0;
//	for (i = 1; i <= col; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, j*i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}