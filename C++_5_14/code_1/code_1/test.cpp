#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int N = 100010;
//int arr[N];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
//	sort(arr, arr + n);
//	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//	return 0;
//}

#include <iostream>
#include <cstdio>
#include <algorithm>
const int N = 1e6 + 10;
int arr[N];
using namespace std;
void quick_sort(int arr[], int l, int r)
{
	if (l >= r) return;
	int x = arr[l], i = l - 1, j = r + 1;
	while (i < j)
	{
		do i++; while (arr[i] < x);
		do j--; while (arr[j] > x);
		if (i < j) swap(arr[i], arr[j]);
	}
	quick_sort(arr, l, j);
	quick_sort(arr, j + 1, r);
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	quick_sort(arr,0,n-1);
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	return 0;
}