#define _CRT_SECURE_NO_WARNINGS 1


#include "SeqList.h"
SL s1;
void TestSeqList1()
{
	SeqListInit(&s1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 6);
	SeqListPushBack(&s1, 7);
	SeqListPushBack(&s1, 8);
	SeqListPushBack(&s1, 9);
	SeqListPushBack(&s1, 10);
	SeqListPushBack(&s1, 11);
	SeqListPushFront(&s1, 1);
	SeqListInsert(&s1, 1, 10);
	SeqListPrint(&s1);
	SeqListErase(&s1, 1);
	SeqListPrint(&s1);
	SeqListDestroy(&s1);
}

int main()
{
	TestSeqList1();
	
	return 0;
}