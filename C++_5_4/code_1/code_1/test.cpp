#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//using namespace std;
//bool F(int num)
//{
//	int cnt = 0;
//	for (int i = 1; i < num; i++)
//	{
//		if (num%i == 0) cnt += i;
//	}
//	if (cnt == num) return true;
//	else return false;
//}
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int sum = 0;
//	for (int i = m; i <= n; i++)
//		if (F(i)) sum += i;
//	printf("20~50之间的所有完数之和为：%d", sum);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "To iterate is human, to recurse divine.";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, k, m;
//	cin >> n >> k >> m;
//	cout << n - k * m;
//	return 0;
//}

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n % 10000 != n) cout << n / 100 << "-" << (n - n % 10) / 10 % 10 << n % 10;
	else
	{
		if(n/100<22) cout<<20<<n
	}

	return 0;
}