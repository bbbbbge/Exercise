#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//		if (arr[i] <= 0) arr[i] = 1;
//		printf("X[%d] = %d\n", i, arr[i]);
//	}
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int v, arr[10] = { 0 };
//	cin >> v;
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = v * (int)pow(2, i);
//		printf("N[%d] = %d\n", i, arr[i]);
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	double arr[100] = { 0 };
//	for (int i = 0; i < 100; i++)
//	{
//		cin >> arr[i];
//		if (arr[i] <= 10)
//			printf("A[%d] = %.1lf\n", i, arr[i]);
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	double sum=0,arr[12][12] = { 0 };
//	int L;
//	char ch;
//	cin >> L >> ch;
//	for (int i = 0; i < 12; i++)
//	{
//		for (int j = 0; j < 12; j++)
//		{
//			cin >> arr[i][j];
//			if (i == L) sum += arr[i][j];
//		}
//	}
//	if (ch == 'S') printf("%.1lf", sum);
//	if (ch == 'M') printf("%.1lf", sum / 12);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	double m, sum=0;
//	char ch;
//	cin >> ch;
//	for (int i = 0; i < 12; i++)
//	{
//		for (int j = 0; j < 12; j++)
//		{
//			cin >> m;
//			if (j > i) sum += m;
//		}
//	}
//	printf("%.1lf", ch == 'S' ? sum : (sum / 66));
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	cin >> ch;
//	double x, sum = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		for (int j = 0; j < 12; j++)
//		{
//			cin >> x;
//			if (j > i && (i + j) < 11) sum += x;
//		}
//	}
//	printf("%.1lf", ch == 'S' ? sum : (sum / 30));
//	return 0;
//}


//回文矩阵
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n, n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				int up = i, down = n - i + 1, left = j, right = n - j + 1;
//				cout << min(min(up, down), min(left, right)) << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n, n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				int up = i, down = n - i + 1, left = j, right = n - j + 1;//求某一点到各边的最短距离
//				cout << min(min(up, down), min(left, right)) << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int arr[20] = { 0 };
//	for (int i = 0; i < 20; i++)
//		cin >> arr[i];
//	int left = 0, right = 19;
//	while (left < right)
//	{
//		int tmp;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (int i = 0; i < 20; i++)
//		printf("N[%d] = %d\n", i, arr[i]);
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int n, min,index;
//	cin >> n;
//	int arr[1000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	min = arr[0];
//	index = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			index = i;
//		}
//	}
//	cout << "Minimum value: " << min << endl;
//	cout << "Position: " << index;
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n, n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << abs(i - j) + 1 << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n, n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << (int)pow(2, i + j) << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}

#include <iostream>

using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	for(in)
	return 0;
}