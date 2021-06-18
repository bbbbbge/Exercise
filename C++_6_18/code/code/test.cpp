#define _CRT_SECURE_NO_WARNINGS 1

////栈
//#include <stdio.h>
//
//#define MaxSize 10
//
//typedef struct
//{
//	int data[MaxSize];
//	int top;
//}SqStack;
//
////初始化
//void InitStack(SqStack &s)
//{
//	s.top = -1;
//}
//
////判断栈空
//bool StackEmpty(SqStack s)
//{
//	if (s.top == -1) return true;
//	else return false;
//}
//
////新元素入栈
//bool Push(SqStack &s, int x)
//{
//	if (s.top == MaxSize - 1) return false;
//	//s.top += 1;
//	//s.data[s.top] = x;
//	s.data[++s.top] = x;
//	return true;
//}
//
////出栈操作
//bool Pop(SqStack &s, int &x)
//{
//	if (s.top == -1) return false;
//	x = s.data[s.top--];
//	return true;
//}
//
////读栈顶元素
//bool GetTop(SqStack s, int &x)
//{
//	if (s.top == -1) return false;
//	x = s.data[s.top];
//	return true;
//}
//
////共享栈
//typedef struct
//{
//	int data[MaxSize];
//	int top0;
//	int top1;
//
//}ShStack;
//
////初始化共享栈
//void InitStack(ShStack &s)
//{
//	s.top0 = -1;
//	s.top1 = MaxSize;
//}
//
////共享栈满的条件:top0 + 1 == top1
//int main()
//{
//	SqStack s;
//
//	InitStack(s);
//	return 0;
//}
//


//链栈

//#include <stdio.h>
//
//typedef struct Linknode
//{
//	int data;
//	struct Linknode *next;
//}*LiStack;
//
//int main()
//{
//
//
//
//	return 0;
//}


////队列
//
//#include <stdio.h>
//#include <stdlib.h>
//#define MaxSize 10
//
//typedef struct
//{
//	int data[MaxSize];
//	int front, rear;//对头指向第一个元素，队尾指向最后一个元素后一个元素
//}SqQueue;
//
////初始化队列
//void InitQueue(SqQueue &q)
//{
//	q.rear = q.front = 0;
//}
//
////判断队列是否为空
//bool QueueEmpty(SqQueue q)
//{
//	if (q.rear == q.front) return true;
//	else return false;
//}
//
////入队
//bool EnQueue(SqQueue &q, int x)
//{
//	if ((q.rear+1)%MaxSize==q.front) return false;
//	q.data[q.rear] = x;
//	q.rear = (q.rear + 1) % MaxSize;
//	return true;
//}
//
////出栈
//bool DeQueue(SqQueue &q, int x)
//{
//	if (q.rear == q.front) return false;
//	x = q.data[q.front];
//	q.front = (q.front + 1) % MaxSize;
//}
//
////获取队头元素的值，用x返回
//bool Gethead(SqQueue q, int &x)
//{
//	if (q.rear == q.front) return false;
//	x = q.data[q.front];
//	return true;
//}
//
////队列的链式实现
//typedef struct LinkNode//链式队列结点
//{
//	int data;
//	struct LinkNode *next;
//}LinkNode;
//
//typedef struct
//{
//	LinkNode *front, *rear;
//}LinkQueue;
//
////初始化队列
//void InitQueue(LinkQueue &q)
//{
//	q.front = q.rear = (LinkNode*)malloc(sizeof(LinkNode));
//	q.front->next = NULL;
//}
//
////判断队列是否为空
//bool IsEmpty(LinkQueue q)
//{
//	if (q.rear == q.front) return false;
//	else return true;
//}
//
////新元素入队（带头结点）
//void EnQueue(LinkQueue &q, int x)
//{
//	LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
//	s->data = x;
//	s->next = NULL;
//	q.rear->next = s;
//
//	q.rear = s;
//}
//
////新元素入队（不带头节点）
//void Enqueue(LinkQueue &q, int x)
//{
//	LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
//	s->data = x;
//	s->next = NULL;
//	if (q.front == NULL)
//	{
//		q.front = s;
//		q.rear = s;
//	}
//	else
//	{
//		q.rear->next = s;
//		q.rear = s;
//	}
//}
//
////出队（带头结点）
//bool DeQueue(LinkQueue &q, int x)
//{
//	if (q.front == q.rear) return false;
//	LinkNode *p = q.front->next;
//	x = p->data;
//	q.front->next = p->next;
//	if (q.rear == p) q.rear = q.front;
//	free(p);
//	return true;
//}
//
////
//int main()
//{
//
//
//	return 0;
//}

////算法实现括号匹配
//#include <stdio.h>
//
//#define MaxSize 10
//typedef struct
//{
//	char data[MaxSize];
//	int top;
//}SqStack;
//
//void InitStack(SqStack s)
//{
//	s.top = -1;
//}
//
//bool Push(SqStack &s, char c)
//{
//	if (s.top == MaxSize - 1) return false;
//	s.data[++s.top] = c;
//	return true;
//}
//
//bool StackEmpty(SqStack s)
//{
//	if (s.top == -1) return true;
//	else return false;
//}
//
//bool Pop(SqStack &s, char &c)
//{
//	if (s.top == -1 ) return false;
//	c = s.data[s.top--];
//	return true;
//}
//
//bool bracketCheck(char str[], int length) 
//{
//	SqStack s;
//	s.top = -1;
//	InitStack(s);
//	for (int i = 0; i < length; i++)
//	{
//		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
//			Push(s, str[i]);
//		else
//		{
//			if (StackEmpty(s)) return false;
//			char topElem;
//			Pop(s, topElem);
//			if (str[i] == ')'&&topElem != '(')
//				return false;
//			if (str[i] == ']'&&topElem != '[')
//				return false;
//			if (str[i] == '}'&&topElem != '{')
//				return false;
//		}
//	}
//	return StackEmpty(s);
//}
//int main()
//{
//	char str[10];
//	int n;
//	scanf("%d", &n);
//	getchar();
//	for (int i = 0; i < n; i++)
//		scanf("%c", &str[i]);
//	if (bracketCheck(str, n))
//		printf("匹配正确\n");
//	else
//		printf("匹配错误\n");
//	return 0;
//}

////后缀表达式转换
//#include <stdio.h>
//
//int main()
//{
//
//
//
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10;
//int q[N];
//int n;
//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int x = q[l + r >> 1];
//	int i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, r);
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> q[i];
//	quick_sort(q, 0, n - 1);
//	for (int i = 0; i < n; i++) cout << q[i] << " ";
//
//
//	return 0;
//}
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//int q[N];
//int n, k;
//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int x = q[l + r >> 1];
//	int i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, r);
//}
//int main()
//{
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) cin >> q[i];
//	quick_sort(q, 0, n - 1);
//	cout << q[k - 1];
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//int q[N], tmp[N];
//int n;
//void merge_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int mid = l + r >> 1;
//	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//	{
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> q[i];
//	merge_sort(q, 0, n - 1);
//	for (int i = 0; i < n; i++) cout << q[i] << " ";
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//typedef long long LL;
//const int N = 1e5 + 10;
//int n;
//int q[N], tmp[N];
//LL merge_sort(int q[], int l, int r)
//{
//	if (l >= r) return 0;
//	int mid = l + r >> 1;
//	LL cnt = merge_sort(q, l, mid) + merge_sort(q, mid + 1, r);
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//	{
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else
//		{
//			cnt += mid - i + 1;
//			tmp[k++] = q[j++];
//		}
//	}
//	while (i <= mid)
//	{
//		//cnt++;
//		tmp[k++] = q[i++];
//	}
//	while (j <= r) tmp[k++] = q[j++];
//	for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
//	return cnt;
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> q[i];
//	LL ret = merge_sort(q, 0, n - 1);
//	cout << ret;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int arr[N];
//int n, q;
//int main()
//{
//	cin >> n >> q;
//	for (int i = 0; i < n; i++) cin >> arr[i];
//	while (q--)
//	{
//		int k;
//		cin >> k;
//		int l = 0, r = n - 1;
//		while (l < r)
//		{
//			int mid = l + r >> 1;
//			if (arr[mid] >= k) r = mid;
//			else l = mid + 1;
//		}
//		if (arr[l] != k) cout << "-1 -1" << endl;
//		else
//		{
//			cout << l << " ";
//			int l = 0, r = n - 1;
//			while (l < r)
//			{
//				int mid = l + r + 1 >> 1;
//				if (arr[mid] <= k) l = mid;
//				else r = mid - 1;
//			}
//			cout << l << endl;
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	double n;
//	cin >> n;
//	double l = -1000, r = 1000;
//	while (r - l > 1e-8)
//	{
//		double mid = (l + r ) / 2;
//		if (mid*mid*mid >= n) r = mid;
//		else l = mid;
//	}
//	printf("%.6lf", l);
//
//
//	return 0;
//}

#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> add(vector<int> &A, vector<int> &B)
{
	vector<int> C;
	if (A.size() < B.size()) return add(B, A);
	int t = 0;
	for (int i = 0; i < A.size(); i++)
	{
		t += A[i];
		if (i < B.size()) t += B[i];
		C.push_back(t % 10);
		t /= 10;
	}
	if (t) C.push_back(t);
	reverse(C.begin(), C.end());
	return C;
}
int main()
{
	string a, b;
	cin >> a >> b;
	vector<int> A, B;
	for (int i = a.length() - 1; i >= 0; i--) A.push_back(a[i] - '0');
	for (int i = b.length() - 1; i >= 0; i--) B.push_back(b[i] - '0');
	auto sum = add(A, B);
	for (int i = 0; i < sum.size(); i++) cout << sum[i];
	return 0;
}