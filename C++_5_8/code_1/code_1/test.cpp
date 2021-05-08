#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <string>
//using namespace std;
//const int N = 200;
//int n;
//string str[N];
//int main()
//{
//	while (cin >> n, n)
//	{
//		int len = 1000;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> str[i];
//			if (len > str[i].size()) len = str[i].size();
//		}
//		while (len)
//		{
//			bool success = true;
//			for (int i = 1; i < n; i++)
//			{
//				bool is_same = true;
//				for (int j = 1; j <= len; j++)
//					if (str[0][str[0].size() - j] != str[i][str[i].size() - j])
//					{
//						is_same = false;
//						break;
//					}
//				if (!is_same)
//				{
//					success = false;
//					break;
//				}
//			}
//			if (success) break;
//			len--;
//		}
//		cout << str[0].substr(str[0].size() - len) << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int n;
//int ans = 0;
//void f(int k)
//{
//	if (k == n) ans++;
//	else if (k < n)
//	{
//		f(k + 1);
//		f(k + 2);
//	}
//}
//int main()
//{
//	cin >> n;
//	f(0);
//	cout << ans << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int n, m;
//int ans = 0;
//void f(int x, int y)
//{
//	if (x == n && y == m) ans++;
//	else if (x < n&&y < m)
//	{
//		f(x + 1, y);
//		f(x, y + 1);
//	}
//	else if (x == n && y < m)
//	{
//		f(x, y + 1);
//	}
//	else if (x < n&&y == m)
//	{
//		f(x + 1, y);
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	f(0, 0);
//	cout << ans << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int n, m;
//int ans = 0;
//void f(int x, int y)
//{
//	if (x == n && y == m) ans++;
//	else
//	{
//		if (x < n) f(x + 1, y);
//		if (y < m) f(x, y + 1);
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	f(0, 0);
//	cout << ans << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int n;
//void print(int k)
//{
//	if(k==(1+n)*n/2) 
//	else
//	{
//		cout << 1 << " ";
//		print(2);
//	}
//}
//int main()
//{
//	cin >> n;
//	print(1);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 10;
//int n;
//void dfs(int a, int num[], bool st[])
//{
//	if (a > n)
//	{
//		for (int i = 1; i <= n; i++) cout << num[i] << " ";
//		cout << endl;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (!st[i])
//			{
//				num[a] = i;			//a表示第几个数 i表示第几个数数字的大小
//				st[i] = true;
//				dfs(a + 1, num, st);
//				st[i] = false;		//恢复现场
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	int num[N];
//	bool st[N] = { 0 };
//	dfs(1, num, st);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int N = 10;
//int n;
//void dfs(int a, int nums[], bool st[])
//{
//	if (a > n)
//	{
//		for (int i = 1; i <= n; i++) cout << nums[i] << " ";
//		cout << endl;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (!st[i])
//			{
//				nums[a] = i;
//				st[i] = true;
//				dfs(a + 1, nums, st);
//				st[i] = false
//					;
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	int nums[N];
//	bool st[N] = { 0 };
//	dfs(1, nums, st);
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//class person
//{
//	private:
//	int age = 18;
//	double weight;
//	char id[100];
//
//public:
//	string name;
//	int get_age()
//	{
//		return age;
//	}
//};
//int main()
//{
//	person a;
//	cin >> a.name;
//	cout << a.name;
//	cout << a.get_age() << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//struct person
//{
//	int age;
//	double weight;
//	string name;
//	//person(int _age, double _weight, string _name) :age(_age), weight(_weight), name(_name){}
//};
//int main()
//{
//	person a;
//	cout << a.age;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//class person
//{
//	
//	public:
//		int a = 0;
//		int b = 1;
//		int c;
//		int get_fac(int n)
//		{
//			while (n--)
//			{
//				c = a + b;
//				a = b;
//				b = c;
//			}
//			return a;
//		}
//};
//int main()
//{
//	person soul;
//	int n;
//	cin >> n;
//	cout << soul.get_fac(n);
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//class Solution 
//{
//public:
//	string replaceSpaces(string &str)
//	{
//		string b;
//		for (auto &c : str)
//		{
//			if (c == ' ') b += "%20";
//			else b += c;
//		}
//		return b;
//	}
//};
//int main()
//{
//	Solution a;
//	string s, str;
//	getline(cin, s);
//	str = a.replaceSpaces(s);
//	cout << str << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//const int N = 10;
//class Solution
//{
//public:
//	int getsum(int n)
//	{
//		char arr[n][n + 1];
//		return sizeof(arr) >> 1;// 求n*（n+1） >>1 除2
//	}
//};
//int main()
//{
//	Solution a;
//	cout << a.getsum(N) << endl;
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//class Solution
//{
//public:
//	int getsum(int n)
//	{
//		int ret = n;
//		(n > 0) && (ret += getsum(n - 1));
//		return ret;
//	}
//};
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	cout << s.getsum(n) << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int n;
//string s;
//class Solution
//{
//public:
//	string leftRotateString(string str, int n)
//	{
//		return str.substr(n) + str.substr(0, n);
//	}
//};
//int main()
//{
//	Solution a;
//	cin >> s >> n;
//	cout << a.leftRotateString(s, n);
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;
string s;
class Solution
{
public:
	int strToInt(string str)
	{
		int num = 0;
		for (auto c : str)
		{
			if(c>='0'&&c<='9')
				num = c - '1' + 1 + num * 10;
		}
		return num;
	}
};
int main()
{
	Solution a;
	getline(cin, s);
	cout << a.strToInt(s);
	return 0;
}