#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int x, y, sum=0;
//	cin >> x >> y;
//	if (x > y) swap(x, y);
//	for (int i = x + 1; i < y; i++)
//		if (i % 2)
//			sum += i;
//	cout << sum;
//
//	return 0;
//}

//判断可以用(i&1)二进制的方式

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, max=0, cnt=0;
//	for (int i = 1; i <= 100; i++)
//	{
//		cin >> a;
//		if (a > max)
//		{
//			max = a;
//			cnt = i;
//		}
//	}
//	cout << max << endl << cnt;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, max = 0, i=0, cnt=0;
//	while (cin >> a)
//	{
//		i++;
//		if (a > max)
//		{
//			max = a;
//			cnt = i;
//		}
//	}
//	cout << max << endl << cnt;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int x, cnt = 0;
//	while (cin >> x)
//	{
//		if (cnt) cout << endl;
//		else cnt = 1;
//		for (int i = 1; i <= x; i++)
//			cout << i << " ";
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, n, sum=0;
//	cin >> a >> n;
//	while (n<=0) cin >> n;
//	for (int i = 0; i < n; i++)
//		sum += a+i;
//	cout << sum;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, n, sum=0;
//	cin >> a;
//	while (cin >> n, n <= 0);//逗号表达式
//	for (int i = 0; i < n; i++)
// 		sum += a+i;
//		cout << sum;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		if (n%i == 0)
//			if (n != 0) cout << i << endl;
//			else cout << i;
//	return 0;
//}
//

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n*m; i++)
//	{
//		if (i%m == 0) cout << "PUM" << endl;
//		else cout << i << " ";
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= 10; i++)
//		cout << i << " x " << n << " = " << i * n << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, cnt1=0, cnt2=0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		if (x >= 10 && x <= 20)
//			cnt1++;
//		else
//			cnt2++;
//	}
//	cout << cnt1 << " in" << endl;
//	cout << cnt2 << " out";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int sum = 0;
//		int x, y;
//		cin >> x >> y;
//		if (x > y) swap(x, y);
//		for (int j = x+1; j < y; j++)
//			if (j % 2 != 0) sum += j;
//		cout << sum << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a = 0, b = 1;
//	for (int i = 0; i < n; i++)
//	{
//		cout << a << " ";
//		int tmp = a + b;
//		a = b;
//		b = tmp;
//	}
//
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int m, n;
//	while (cin >> m >> n,m>0&&n>0)
//	{
//		int sum = 0;
//		if (m > n) swap(m, n);
//		for (int i = m; i <= n; i++)
//		{
//			cout << i << " ";
//			sum += i;
//		}
//		cout <<"Sum="<<sum<<endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n)
//	{
//		int x,sum=0;
//		cin >> x;
//		for (int i = 1; i <= sqrt(x); i++)
//			if (x%i == 0)
//			{
//				if (i == x / i)
//					sum += i;
//				else sum += i + x / i;
//			}
//		if (sum == 2*x)
//			cout << x << " is perfect" << endl;
//		else
//			cout << x << " is not perfect" << endl;
//		n--;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int x;
//		cin >> x;
//		int i = 0;//为什么在外面定义i，因为这样i的值不仅限于循环内可用
//		for (i = 2; i < x; i++)
//			if (x%i == 0) break;
//		if (i == x) cout << x << " is prime" << endl;
//		else cout << x << " is not prime" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if ((abs(j - n / 2) + abs(i - n / 2)) <= n/2)
//				cout << "*";
//			else cout << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
//bool isPrime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//		if (n%i == 0) return false;
//	return true;
//}
//int prime(int n)
//{
//	int cnt = 0;
//	int i = 2;
//	while (n != cnt)
//	{
//		if (isPrime(i)) cnt++;
//		i++;
//	}
//	return i - 1;
//}
//int main()
//{
//	int m, n, a=0;
//	cin >> m >> n;
//	for (int i = m; i <= n; i++)
//	{
//		if (a == 10)
//		{
//			cout << endl;
//			a = 0;
//		}
//		if (a == 0) cout << prime(i);
//		else cout << " " << prime(i);
//		a++;
//	}
//
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n)
{
	for (int i = 2; i*i <= n; i++)
		if (n%i == 0) return false;
	return true;
}
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> prime;
	int cnt = 0;
	int num = 2;
	while (cnt != m)
	{
		if (isPrime(num))
		{
			cnt++;
			if (cnt >= n) prime.push_back(num);
		}
		num++;
	}
	cnt = 1;
	for (unsigned int i = 0; i < prime.size(); i++)
	{
		cout << prime[i];
		if (cnt % 10 != 0) cout << " ";
		if (cnt % 10 == 0) cout << endl;
		cnt++;
	}
	return 0;
}

cnt = 0;
for (unsigned int i = 0; i < prime.size(); i++)
{
	cnt++;
	if (cnt % 10 != 1) cout << " ";
	cout << prime[i];
	if (cnt % 10 == 0) cout << endl;

}