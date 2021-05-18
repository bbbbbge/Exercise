#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j <= n - i) printf("%3d", j);
//			else printf("%3d", n-i+1);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int is_num(int n)
//{
//	int x, sum=0,num=n;
//	while (n)
//	{
//		x = n % 10;
//		n = n / 10;
//		sum += x * x* x;
//	}
//	if (sum == num) return 1;
//	else return 0;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int a = is_num(n);
//	cout << a;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int a, n;
//	int sum = 0, t=0;
//	cin >> a >> n;
//	for (int i = 0; i < n; i++)
//	{
//		t = t * 10 + a;
//		sum += t;
//	}
//	cout << sum;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int n, sum=0;
//	cin >> n;
//	if (n >= 0)
//	{
//		for (int i = n; i <= 2 * n; i++) sum += i;
//	}
//	else
//	{
//		for (int i = n * 2; i <= n; i++) sum += i;
//	}
//	cout << sum;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char a;
//	while (cin >> a)
//	{
//		char b,c;
//		float m,n;
//		int cnt = 0;
//		if (a == '*' || a == '/')
//		{
//			b = a;
//			cnt++;
//		}
//		else if (a == '+' || a == '-')
//		{
//			c = a;
//			cnt++;
//		}
//		else
//		{
//			m = a - '0';
//			cnt++;
//		}
//		if(cnt==3)
//	}
//	return 0;
//}


//#include <iostream>
//#include <string>
//struct AB
//{
//	int l, t, w, h;
//}q[10000];
//using namespace std;
//int main()
//{
//	int r, n;
//	cin >> r >> n;
//	int k;
//	int L=0, T=0, W=0, H=0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> q[i].l >> q[i].t >> q[i].w >> q[i].h;
//	}
//	int min = r * r;
//	for (int i = r - 1; i >= 0; i--)
//	{
//		int s1 = 0, s2 = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (i >= q[j].l&&i <= q[j].l + q[j].h)
//			{
//				s1 += q[j].w*i - q[j].w*q[j].l;
//				s2 += q[j].h*q[j].w - q[j].w*i + q[j].l*q[j].w;
//			}
//		}
//		if (s1 - s2 == 0)
//		{
//			cout << i;
//			break;
//		}
//		else if (abs(s1 - s2) < min)
//		{
//			min = abs(s1 - s2);
//			k = i;
//		}
//	}
//	cout << k;
//	return 0;
//}

#include <iostream>
using namespace std;
int a = 1;
void test()
{
	a += 1;
}
int main()
{
	test();
	cout << a;
}