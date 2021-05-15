#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//using namespace std;
//const int N = 1e6 + 10;
//int q[N];
//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int x = q[l], i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if(i < j) swap(q[i], q[j]);
//	}
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, r);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//	quick_sort(q, 0, n - 1);
//	for (int i = 0; i < n; i++) printf("%d ", q[i]);
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//const int N = 1e6 + 10;
//int q[N];
//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int x = q[l + r >> 1], i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, l);
//
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//	quick_sort(q, 0, n - 1);
//	for (int i = 0; i < n; i++) printf("%d ", q[i]);
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//const int N = 1e6 + 10;
//int q[N], tmp[N];
//void merge_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int mid = l + r >> 1;
//	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//	int k = 0, i = l, j = mid + 1;
//
//	while (i <= mid && j <= r)
//	{
//		if (q[i] < q[j]) tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	for (i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//	merge_sort(q, 0, n - 1);
//	for (int i = 0; i < n; i++) printf("%d ", q[i]);
//	return 0;
//}

#include <iostream>
#include <cstdio>

using namespace std;
const int N = 1e6 + 10;
int q[N];
int n, k;
void quick_sort(int q[], int l, int r)
{
	if (l >= r) return;
	int x = q[l + r >> 1], i = l - 1, j = r + 1;
	while (i < j)
	{
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}
	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}
int main()
{
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
	quick_sort(q, 0, n - 1);
	printf("%d", q[k - 1]);
	return 0;
}