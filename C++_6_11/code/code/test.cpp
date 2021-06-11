#define _CRT_SECURE_NO_WARNINGS 1



//#include <iostream>
//
//using namespace std;
//const int N = 1001;
//int q[N][N], s[N][N];
//int main()
//{
//	int n, m, q;
//	cin >> n >> m >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//			q[i][j] = q[i - 1][j] + q[i][j - 1];
//	}
//
//
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//const int N = 1e5 + 10;
//int q[N], s[N];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> q[i];
//	for (int i = 1; i <= n; i++) s[i] = s[i - 1] + q[i];
//	while (m--)
//	{
//		int l, r;
//		cin >> l >> r;
//		cout << s[r] - s[l - 1] << endl;
//	}
//
//	return 0;
//}

#include <iostream>

using namespace std;
const int N = 1000;
int q[N][N], s[N][N];
int main()
{
	int n, m, q;
	cin >> n >> m >> q;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{

		}
	}
	while (q--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1] << endl;
	}


	return 0;
}