#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10;
//int a[N], s[N];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	int ret = 0;
//	for (int i = 0, j = 0; i < n; i++)
//	{
//		s[a[i]]++;
//		while (s[a[i]] > 1)
//		{
//			s[a[j]]--;
//			j++;
//		}
//		ret = max(ret, i - j + 1);
//	}
//	cout << ret;
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//const int N = 1e5 + 10;
//long long a[N], b[N];
//int n, m, x;
//int main()
//{
//	cin >> n >> m >> x;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < m; i++) cin >> b[i];
//	int j = 0;
//	int k = n - 1;
//	while (k >= 0&&j < m)
//	{
//		if (a[k] + b[j] == x)
//		{
//			cout << k << " " << j;
//			break;
//		}
//		while (a[k] + b[j] > x) k--;
//		while (a[k] + b[j] < x) j++;
//	}
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//const int N = 1e5 + 10;
//long long a[N], b[N];
//int n, m, x;
//int main()
//{
//	cin >> n >> m >> x;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < m; i++) cin >> b[i];
//	for (int i = 0, j = m - 1; i < n; i++)
//	{
//		while (j >= 0 && b[j] + a[i] > x) j--;
//		if (b[j] + a[i] == x)
//		{
//			cout << i << " " << j;
//			break;
//		}
//	}
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//const int N = 1e5 + 10;
//long long a[N], b[N];
//int n, m;
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < m; i++) cin >> b[i];
//	int i = 0, j = 0;
//	while(i <  n && j < m)
//	{
//		if (a[i] == b[j]) i++;
//		j++;
//	}
//	if (i == n) cout << "Yes";
//	else cout << "No";
//
//	return 0;
//}

#include <iostream>
using namespace std;
const int N = 1e5 + 10;
long long a[N];
int n;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int i = 0;
	while (i<n)
	{
		int cnt = 0;
		while (a[i])
		{
			cnt++;
			a[i] = a[i] & (a[i] - 1);
		}
		cout << cnt << " ";
		i++;
	}
	return 0;
}