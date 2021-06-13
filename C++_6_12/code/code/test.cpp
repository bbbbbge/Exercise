#define _CRT_SECURE_NO_WARNINGS 1



//#include <iostream>
//
//using namespace std;
//const int N = 1001;
//int arr[N][N], s[N][N];
//int main()
//{
//	int n, m, q;
//	cin >> n >> m >> q;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> arr[i][j];
//			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + arr[i][j];
//		}
//	}
//	while (q--)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		cout << s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1] << endl; 
//	}
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//const int N = 1e5 + 10;
//int q[N];
//int n, m, l, r, c;
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> q[i];
//	while (m--)
//	{
//		cin >> l >> r >> c;
//		for (int i = l; i <= r; i++) q[i] += c;
//	}
//	for (int i = 1; i <= n; i++) cout << q[i] << " ";
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//int a[N], b[N];
//int n, m, l, r, c;
//void insert(int l, int r, int c)
//{
//	b[l] += c;
//	b[r + 1] -= c;
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= n; i++) insert(i, i, a[i]);
//	while (m--)
//	{
//		cin >> l >> r >> c;
//		insert(l, r, c);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		b[i] += b[i - 1];
//		cout << b[i] << " ";
//	}
//	return 0;
//}

#include <iostream>
using namespace std;
const int N = 1010;
int a[N][N], b[N][N];
int n, m, q;
void insert(int x1,int y1,int x2,int y2,int c)
{
	b[x1][y1] += c;
	b[x1][y2 + 1] -= c;
	b[x2 + 1][y1] -= c;
	b[x2 + 1][y2 + 1] += c;
}
int main()
{
	cin >> n >> m>> q;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			insert(i, j, i, j, a[i][j]);
	while (q--)
	{
		int x1, y1, x2, y2, c;
		cin >> x1 >> y1 >> x2 >> y2 >> c;
		insert(x1, y1, x2, y2, c);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}