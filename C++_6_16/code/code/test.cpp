#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int a[N], b[N];
//int n, m;
//int main()
//{
//	cin >> n >> m;
//	int max = 0;
//	while (n--)
//	{
//		long long x;
//		int c;
//		cin >> x >> c;
//		a[x] += c;
//		if (x > max) max = x;
//	}
//	for (int i = 1; i <= max; i++)
//	{
//		b[i] = b[i - 1] + a[i];
//	}
//	while (m--)
//	{
//		long long l, r;
//		cin >> l >> r;
//		if (r <= max) cout << b[r] - b[l-1] << endl;
//		else if (l <= max && r > max) cout << b[max] - b[l-1] << endl;
//		else cout << 0 << endl;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void InitList(SqList &L)
//{
//	L.length = 0;
//}
//
//bool ListInsert(SqList &L, int i, int e)
//{
//	if (i<1 || i>L.length + 1) return false;
//	if (L.length >= MaxSize) return false;
//	for (int j = L.length; j >= i; j--)
//		L.data[j] = L.data[j - 1];
//	L.data[i - 1] = e;
//	L.length++;
//	return true;
//}
//
//bool ListDelet(SqList &L, int i, int &e)
//{
//	if (i<1 || i>L.length + 1) return false;
//	e = L.data[i - 1];
//	for (int j = i - 1; j < L.length; j++)
//		L.data[j] = L.data[j + 1];
//	L.length--;
//	return true;
//}
//int main()
//{
//	SqList L;
//	InitList(L);
//	ListInsert(L, 3, 3);
//	int e = -1;
//	if (ListDelet(L, 3, e))
//		printf("已删除第3个元素%d\n", e);
//	else
//		printf("位序i不合法\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define InitSize 10//默认最大长度
//typedef struct
//{
//	int* data;
//	int MaxSize;//顺序表的最大容量
//	int length;//顺序表的当前长度
//}SeqList;
//
//void InitList(SeqList &L)
//{
//	//用malloc函数申请一片连续的空间
//	L.data = (int*)malloc(InitSize * sizeof(int));
//	L.length = 0;
//	L.MaxSize = InitSize;
//}
//
//void IncreaseSize(SeqList &L, int len)
//{
//	int* p = L.data;
//	L.data = (int*)malloc((len + L.MaxSize) * sizeof(int));
//	for (int i = 0; i < L.length; i++) L.data[i] = p[i];
//	L.MaxSize += len;
//	free(p);
//}
//
//int LocateElem(SeqList L, int e)
//{
//	for (int i = 0; i < L.length; i++)
//		if (L.data[i] == e) return i + 1;
//	return 0;
//}
//int main()
//{
//	SeqList L;
//	InitList(L);
//
//	IncreaseSize(L, 5);
//	if(LocateElem(L,3))
//		
//	return 0;
//}

#include <stdio.h>
struct LNode
{
	int a;
	struct LNode* next; 
};
int main()
{


	return 0;
}