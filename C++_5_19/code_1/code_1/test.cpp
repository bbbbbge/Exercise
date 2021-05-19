#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//
//using namespace std;
//const int N = 1e6 + 10;
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
//		if (q[i] <= q[j])  tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	for (int i = l, j = 0; i <= r; j++, i++) q[i] = tmp[j];
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
//
//using namespace std;
//const int N = 1e6 + 10;
//int q[N];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> q[i];
//	int cnt = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (q[i] > q[j]) cnt++;
//		}
//	}
//	cout << cnt;
//}

//#include <iostream>
//
//using namespace std;
//typedef long long LL;
//const int N = 100010;
//int q[N], tmp[N];
//int n;
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
//			tmp[k++] = q[j++];
//			cnt += mid - i + 1;
//		}
//	}
//
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[k];
//	return cnt;
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> q[i];
//	cout << merge_sort(q, 0, n - 1);
//	return 0;
//
//}

#include <iostream>

using namespace std;
const int N = 100010;
int q[N];
int n;
void bubble_sort(int q[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (q[j] > q[j + 1])
			{
				swap(q[j], q[j + 1]);
				flag = 0;
			}
		}
		if (flag) break;
	}

}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) cin >> q[i];
	bubble_sort(q, n);
	for (int i = 0; i < n; i++) cout << q[i] << " ";
	return 0;
}