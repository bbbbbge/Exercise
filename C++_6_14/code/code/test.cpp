#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int a[10], b[10], m;
//	for (int i = 0; i < 10; i++) cin >> a[i];
//	cin >> m;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%4d", a[(i + m) % 10]);
//	}
//	
//
//
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 1010;
//int a[N][N], b[N][N];
//int n, m, q;
//void insert(int x1, int y1, int x2, int y2, int c)
//{
//	b[x1][y1] += c;
//	b[x1][y2 + 1] -= c;
//	b[x2 + 1][y1] -= c;
//	b[x2 + 1][y2 + 1] += c;
//}
//int main()
//{
//	cin >> n >> m >> q;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> a[i][j];
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			insert(i, j, i, j, a[i][j]);
//	while (q--)
//	{
//		int x1, y1, x2, y2, c;
//		cin >> x1 >> y1 >> x2 >> y2 >> c;
//		insert(x1, y1, x2, y2, c);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			b[i][j] += b[i][j - 1] + b[i - 1][j] - b[i - 1][j - 1];
//			cout << b[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10;
//int q[N], s[N];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> q[i];
//	int ret = 0;
//	for (int i = 0, j = 0; i < n; i++)
//	{
//		s[q[i]]++;
//		while (s[q[i]] > 1)
//		{
//			s[q[j]]--;
//			j++;
//		}
//		ret = max(ret, i - j + 1);
//	}
//	cout << ret;
//	return 0;
//}


//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	char str[1000];
//	fgets(str, 100, stdin);
//
//	for (int i = 0; str[i]; i++)
//	{
//		int j = i;
//		while (str[j] != ' ' && str[j] != '\n')
//		{
//			cout << str[j];
//			j++;
//		}
//		cout << endl;
//		i = j;
//	}
//
//	return 0;
//}

#include <iostream>
using namespace std;
const int N = 1e5 + 10;
long long a[N], b[N];
int n, m, x;
int main()
{
	cin >> n >> m >> x;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	for (int i = 0; i < n; i++)
	{
		int j = i;
		while (a[i] + b[j] != x)
		{
			j++;
		}
		if (a[i] + b[j] == x)
		{
			cout << i << " " << j;
			break;
		}
	}

	return 0;
}