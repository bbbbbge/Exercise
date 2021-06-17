#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <stdlib.h>
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//}LNode,*LinkList;
//
//bool InitList(LinkList &L)//不带头结点
//{
//	L = NULL;//空表，暂时还没有任何结点
//	return true;
//}
//
//bool InitList(LinkList &L)//带头结点
//{
//	L = (LNode*)malloc(sizeof(LNode));
//	if (L == NULL)
//		return false;
//	L->next = NULL;
//	return true;
//}
//
//bool ListInsert(LinkList &L, int i, int e)//不带头节点
//{
//	if (i < 1) return false;
//	LNode* p;
//	int j = 0;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p = p -> next;
//		j++;
//	}
//	if (p = NULL) return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//
//bool ListInsert(LinkList &L, int i, int e)
//{
//	if (i < 1) return false;
//	if (i == 1)
//	{
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = e;
//		s->next = L;
//		L = s;
//		return true;
//	}
//	LNode* p;
//	int j = 1;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL) return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//}
//
////后插，在p结点之后插入元素e
//bool InsertNextNode(LNode* p, int e)
//{
//	if (p == NULL) return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL) return false;
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//
////后插与第i位置插入元素e结合
//bool ListInsert(LinkList &L, int i, int e)
//{
//	if (i < 1) return false;
//	LNode* p;
//	int j = 0;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	return InsertNextNode(p, e);
//}
//
////在p结点前插入结点s
//bool InsertPriorNode(LNode* p, LNode* s)
//{
//	if (p == NULL || s == NULL) return false;
//	s->next = p->next;
//	p->next = s;
//	int tmp = p->data;
//	p->data = s->data;
//	s->data = tmp;
//	return true;
//}
//
////删除位序为i的结点
//bool ListDelet(LinkList &L, int i, int &e)
//{
//	if (i < 1) return false;
//	LNode* p;
//	int j = 0;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p->next;
//		j++;
//	}
//	if (p == NULL) return false;
//	if (p->next = NULL) return false;
//	LNode* s=p->next;
//	e = s->data;
//	p->next = s->next;
//	free(s);
//	return true;
//}
//
////删除指定结点p
//bool DeletNode(LNode* p)
//{
//	if (p == NULL) return false;
//	LNode* s = p->next;
//	p->data = s->data;
//	p->next = s->next;
//	free(s);
//	return true;
//}
//
////按位查找，返回第i个结点
//LNode* GetElem(LinkList L, int i)
//{
//	if (i < 0) return NULL;
//	LNode* p;
//	int j = 0;
//	p = L;
//	while (p != NULL && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//
////按值查找，找到数据域为e的结点
//LNode* LocateElem(LinkList L, int e)
//{
//	LNode* p = L->next;
//	while (p != NULL && p->data != e) p = p->next;
//	return p;
//}
//
////求表的长度
//int length(LinkList L)
//{
//	LNode* p = L->next;
//	int cnt = 0;
//	while (p != NULL)
//	{
//		cnt++;
//		p - p->next;
//	}
//	return cnt;
//}
//
////尾插法
//LinkList List_TailInsert(LinkList &L)
//{
//	int x;
//	L = (LinkList)malloc(sizeof(LNode));
//	LNode *s, *r = L;
//	scanf("%d", &x);
//	while (x != 9999)
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		r->next = s;
//		r = s;
//		scanf("%d", &x);
//	}
//	r->next = NULL;
//	return L;
//}
//
////头插法
//LinkList List_HeadInsert(LinkList &L)
//{
//	LNode *s;
//	int x;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//	scanf("%d", &x);
//	while (x != 9999)
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		s->next = L->next;
//		L -> next = s;
//		scanf("%d", &x);
//	}
//	return L;
//}
//int main()
//{
//	LinkList L;//声明一个指针指向单链表
//
//	InitList(L);
//
//	ListInsert(L, 5, 3);
//
//
//	return 0;
//}

////双链表
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct DNode
//{
//	int data;
//	struct DNode *prior, *next;
//}DNode, *DLinkList;
//
////初始化
//bool InitDLinkList(DLinkList &L)
//{
//	L = (DNode*)malloc(sizeof(DNode));
//	if (L == NULL) return false;//内存不足，分配失败
//	L->prior = NULL;
//	L->next = NULL;
//	return true;
//}
//
//bool Empty(DLinkList L)
//{
//	if (L->next == NULL) return true;
//	else return false;
//}
//
////在p结点之后插入s结点
//bool InsertNextDNode(DNode *p, DNode *s)
//{
//	if (p == NULL || s == NULL) return false;
//	s->next = p->next;
//	if (p->next != NULL)
//		p->next->prior = s;
//	s->prior = p;
//	p->next = s;
//	return true;
//}
//
////删除p的后继结点
//bool DeletNextDNode(DNode *p)
//{
//	if (p == NULL) return false;
//	DNode *q = p->next;
//	if (q == NULL) return false;
//	p->next = q->next;
//	if (q->next != NULL)
//		q->next->prior = p;
//	free(q);
//	return true;
//}
//
////后向遍历
//void testDListLink()
//{
//	DLinkList L;
//	InitDLinkList(L);
//}
//
//int main()
//{
//
//	return 0;
//}

////循环单链表
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct LNode
//{
//	int data;
//	struct LNode *next;
//}LNode, *LinkList;
//
////初始化
//bool InitList(LinkList &L)
//{
//	L = (LNode*)malloc(sizeof(LNode));
//	if (L == NULL) return false;
//	L->next = L;
//	return true;
//}
//
////判断是否为空
//bool Empty(LinkList &L)
//{
//	if (L->next == L) return true;
//	else return false;
//}
//
////判断结点p是否为循环单链表的表尾结点
//bool isTail(LinkList L, LNode *p)
//{
//	if (p->next == L) return true;
//	else return false;
//}
//
//int main()
//{
//
//
//	return 0;
//}

//静态链表
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MaxSize 10
//struct Node
//{
//	int data;
//	int next;
//};
//int main()
//{
//	struct Node a[MaxSize];
//
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
////二分出x对应的离散化的值
//int find(int x)
//{
//	int l = 0, r = alls.size() - 1;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (alls[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return r + 1;//映射到1,2...n
//}
//int main()
//{
//	//存储所有带离散化的值
//	vector<int> alls;
//	//排序
//	sort(alls.begin(), alls.end());
//	//去掉重复元素
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//	//unique将数组去重，重复元素放置末尾，并返回非重复元素的尾端点
//
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//
//const int N = 300010;
//int n, m;
//int a[N], s[N];
//vector<int> alls;
//vector<PII> add, query;
//
//int find(int x)
//{
//	int l = 0, r = alls.size() - 1;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (alls[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return l + 1;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int x, c;
//		cin >> x >> c;
//		add.push_back({ x,c });
//
//		alls.push_back(x);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		query.push_back({ l, r });
//
//		alls.push_back(l);
//		alls.push_back(r);
//
//	}
//	//去重
//	sort(alls.begin(), alls.end());
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//
//	//处理插入
//	for (auto item : add)
//	{
//		int x = find(item.first);
//		a[x] += item.second;
//	}
//
//	//预处理前缀和
//	for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
//	
//	//处理询问
//	for (auto item : query)
//	{
//		int l = find(item.first), r = find(item.second);
//		cout << s[r] - s[l - 1] << endl;
//	}
//	
//	
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 300010;
//int a[N], s[N];
//typedef pair<int, int> PII;
//vector<int> alls;
//vector<PII> add, query;
//int n, m;
//
//int find(int x)
//{
//	int l = 0, r = alls.size() - 1;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (alls[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return l + 1;
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int x, c;
//		cin >> x >> c;
//		add.push_back({ x,c });
//
//		alls.push_back(x);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		query.push_back({ l,r });
//
//		alls.push_back(l);
//		alls.push_back(r);
//	}
//
//	//去重
//	sort(alls.begin(), alls.end());
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//
//	//处理插入
//	for (auto item : add)
//	{
//		int x = find(item.first);
//		a[x] += item.second;
//	}
//	//预处理前缀和
//	for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
//
//	for (auto a : query)
//	{
//		int l = find(a.first), r = find(a.second);
//		cout << s[r] - s[l - 1] << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////unique去重实现
//vector<int>::iterator unique(vector<int> &a)
//{
//	int j = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (!i || a[i] != a[i - 1])
//			a[j++] = a[i];
//	}
//	return a.begin() + j;
//}
//int main()
//{
//
//
//	return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> PII;//排序时会优先以左端点

vector<PII> a;
int n;
void merge(vector<PII> &a)
{
	vector<PII> b;
	sort(a.begin(), a.end());

	int st = -2e9, ed = -2e9;
	for (auto item : a)
	{
		if (ed < item.first)
		{
			if (st != -2e9) b.push_back({ item.first,item.second });
			st = item.first, ed = item.second;
		}
		else ed = max(ed, item.second);
	}
	if (st != -2e9) b.push_back({ st,ed });
	a = b;
}
int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int l, r;
		cin >> l >> r;
		a.push_back({ l,r });
	}
	merge(a);
	cout << a.size() << endl;

	return 0;
}