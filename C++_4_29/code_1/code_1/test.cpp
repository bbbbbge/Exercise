#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//const int N = 100;
//int n, m;
//int arr[N][N];
//int main()
//{
//	cin >> n >> m;
//	int dx[] = { 0,1,0,-1 }, dy[] = { 1,0,-1,0 };
//	int x = 0, y = 0, d = 0;
//	for (int i = 1; i <= n*m; i++)
//	{
//		arr[x][y] = i;
//		int a = x + dx[d], b = y + dy[d];
//		if (a < 0 || b < 0 || a >= n || b >= m || arr[a][b])
//		{
//			d = (d + 1) % 4;
//			a = x + dx[d], b = y + dy[d];
//		}
//		x = a, y = b;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//scanf cout 不是读入一行 而是遇 空格 回车 结束符就结束

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	char str[100];
//	cin >> str + 1;			//如果想从数组下标为一的值输入
//	cout << str + 1 << endl;
//	printf("%s", str + 1);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	char str[100];
//	scanf("%s", str);
//	cout << str << endl;
//	printf("%s\n", str);
//	puts(str);
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//	cout<<strcmo("a")
//
//	return 0;
//}