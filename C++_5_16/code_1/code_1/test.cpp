#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <cstdio>
//using namespace std;
//const int N = 1e6 + 10;
//int q[N], tmp[N];
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
//	int n, k;
//	scanf("%d%d", &n, &k);
//	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//	merge_sort(q, 0, n - 1);
//	printf("%d", q[k - 1]);
//	return 0;
//}

//#include <iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	cout << "2020112966谢昕哲" << endl;
//	cout << "请输入15个实型数：" << endl;
//	const int N = 16;
//	double sum = 0;
//	double a[N];
//	for (int i = 0; i < 15; i++)
//	{
//		cin >> a[i];
//	}
//	for (int j = 0; j < 15; j++)
//	{
//		cout << setw(10);
//		cout << a[j];
//		if ((j + 1) % 5 == 0)cout << endl;
//	}
//	cout << "调整后的数据为：" << endl;
//	for (int i = 0; i < 15; i++)
//	{
//		sum += a[i];
//	}
//	a[15] = sum / 15;
//	for (int m = 0, n = 14; m <= n; )
//	{
//
//		if (a[m] < a[15] && a[n] > a[15])
//		{
//			double temp;
//			temp = a[m];
//			a[m] = a[n];
//			a[n] = temp;
//			m++;
//			n--;
//		}
//		if (a[m] >= a[15] && a[n] <= a[15])
//		{
//			m++;
//			n--;
//		}
//		else if (a[m] >= a[15] && a[n] >= a[15])
//		{
//			m++;
//
//		}
//		else if (a[m] <= a[15] && a[n] <= a[15])
//		{
//			n--;
//		}
//	}
//	for (int k = 0; k < 15; k++)
//	{
//		cout << setw(10);
//		cout << a[k];
//		if ((k + 1) % 5 == 0)cout << endl;
//	}
//	cout << setw(10);
//	cout << a[15] << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//const int N = 1e6 + 1;
//int main()
//{
//
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <iomanip>
//using namespace std;
//int prime(int num)
//{
//	int m;
//	for (m = 2; m < num; m++)
//	{
//		if (num % m == 0) return 0;
//	}
//	if(m==num) return 1;
//	return 0;
//}
//int main()
//{
//	cout << "2020112966谢昕哲" << endl;
//	cout << "请输入10个正整数：" << endl;
//	const int N = 10;
//	int a[N],b[N];
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	cout << "数组中最大值为：" << *max_element(a, a + 10) << ",其下标为" << max_element(a, a + 10) - a << endl;
//	cout << "数组中最小值为：" << *min_element(a, a + 10) << ",其下标为" << min_element(a, a + 10) - a << endl;
//	cout << "素数为：";
//	int n = 0;
//	for (int j = 0; j < 10; j++)
//	{
//		if (prime(a[j]))
//		{
//			b[n++] = a[j];
//		}
//	}
//	for (int i = n - 1; i >= 0; i--) printf("%4d", b[i]);
//	cout << endl;
//	system("pause");
//	return 0;
//}