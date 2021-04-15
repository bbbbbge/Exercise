#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//模板
//#define LIST_INIT_SIZE 100
//ElemType---自定义类型
//1.直接换需要类型
//2.typedef int ElemType
//3.有较多之可以自定义一个结构体类型

//typedef struct
//{
//	ElemType elem[LIST_INIT_SIZE];
//	int length;//因为数组长度不可变，故定义一个长度
//}SqList;


//多项式
//#define MAXSIZE 1000
//typedef struct
//{
//	float p;		//系数
//	int e;			//指数
//}Polynomial;		//多项式
//typedef struct
//{
//	Polynomial* elem;		//存储空间的基地址
//	int length;				//多项式中的个数
//}SqList;					//多项式的顺序存储结构类型为SqList


//图书表
//#define MAXSIZE 1000
//typedef struct
//{
//	char no[20];		//图书编号
//	char name[50];		//图书名字
//	float price;		//图书价格
//}Book;
//typedef struct
//{
//	Book* elem;			//存储空间的基地址
//	int length;			//图书表中当前图书的个数
//}SqList;				//图书表的顺序存储结构类型为SqList


//typedef struct
//{
//	ElemType* data;
//	int length;
//}SqList;			//顺序表类型
//
//SqList L;
//L.data = (ElemType*)malloc(sizeof(ElemType)*MaxSize);		//动态分配
//
//malloc(m)函数：开辟m字节长度的地址空间，并返回这段空间的首地址
//
//free(p)函数：释放指针p所致变量的存储空间
//
//需要加载头文件：<stdlib.h>


