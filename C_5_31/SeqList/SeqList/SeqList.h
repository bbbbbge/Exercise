#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_SIZE 10
typedef int SQDataType;


//静态顺序表：问题：不能灵活控制，给少了不够用，给多了，太浪费
//typedef struct SeqList
//{
//	SQDataType a[MAX_SIZE];
//	int size;
//}SL;

//动态顺序表
typedef struct SeqList
{
	SQDataType* a;
	int size;		//有效数据的个数
	int capacity;	//容量
}SL;



//增删查改等接口函数

//第一步初始化
void SeqListInit(SL* ps);

//尾插
void SeqListPushBack(SL* ps, SQDataType x);

//头插
void SeqListPushFront(SL* ps, SQDataType x);

//尾删
void SeqListPopBack(SL* ps);

//头删
void SeqListPopFront(SL* ps);

//任意插入
void SeqListInsert(SL* ps, int pos, SQDataType x);

//任意删除
void SeqListErase(SL* ps, int pos);

//打印
void SeqListPrint(SL* ps);

//检查容量，扩容
void SeqListCheckCapacity(SL* ps);

//销毁空间
void SeqListDestroy(SL* ps);

//查找
int SeqListFind(SL* ps, SQDataType x);

//修改
void SeqListModify(SL* ps, int pos, SQDataType x);