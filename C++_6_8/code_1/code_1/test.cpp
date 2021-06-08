#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//
//using namespace std;
//const int N = 10e6;
//int arr[N];
//int n;
//void quick_sort(int arr[], int l, int r)
//{
//	if (l >= r) return;
//	int x = arr[l + r >> 1];
//	int i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		do i++; while (arr[i] < x && i < j);
//		do j--; while (arr[j] > x && i < j);
//		if (i < j) swap(arr[i], arr[j]);
//	}
//	quick_sort(arr, l, j);
//	quick_sort(arr, j + 1, r);
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> arr[i];
//	quick_sort(arr, 0, n - 1);
//	for (int i = 0; i < n; i++) cout << arr[i] << " ";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 1e6;
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
//	printf("%d", q[k - 1]);
//	return 0;
//}

//#include <iostream>
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
//using namespace std;
//typedef long long LL;
//const int N = 1e6 + 10;
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
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
//	return cnt;
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> q[i];
//	LL ret=merge_sort(q, 0, n - 1);
//	cout << ret;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int n, q;
//int arr[N];
//int main()
//{
//	cin >> n >> q;
//	for (int i = 0; i < n; i++) cin >> arr[i];
//	while (q--)
//	{
//		int num;
//		cin >> num;
//
//		int l = 0, r = n - 1;
//		while (l < r)//结果是l==r时的数
//		{
//			int mid = l + r >> 1;
//			if (arr[mid] >= num) r = mid;
//			else l = mid + 1;
//		}
//		if (arr[l] != num) cout << "-1 -1" << endl;
//		else
//		{
//			cout << l << " ";
//			int l = 0, r = n - 1;
//			while (l < r)
//			{
//				int mid = l + r + 1 >> 1;
//				if (arr[mid] <= num) l = mid;
//				else r = mid - 1;
//			}
//			cout << l << endl;
//		}
//	}
//	return 0;
//}

//求一个数的平方根

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	double x;
	cin >> x;
	double l = 0, r = max(x,1.0);//x不能小于1，应该为max（1，x），因为x为0.01，开平方就为0.1
	while (r - l > 1e-8)
	{
		double mid = (r + l) / 2;
		if (mid*mid >= x) r = mid;
		else l = mid;
	}
	printf("%lf", l);

	return 0;
}

//#include <iostream>
//using namespace std;
//int main()
//{
//	double x;
//	cin >> x;
//	double l = -10000, r = 1000;
//	while (r - l > 1e-8)
//	{
//		double a = (l + r) / 2;
//		if (a*a*a >= x) r = a;
//		else l = a;
//	}
//	printf("%lf", r);
//	return 0;
//}