#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	while (cin >> s, s != ".")
//	{
//		int len = s.size();
//		for (int n = len; n; n--)
//		{
//			string str;
//			if (len%n == 0)
//			{
//				for (int i = 0; i < n; i++) str += s.substr(0, len / n);
//			}
//			if (str == s)
//			{
//				cout << n << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char a;
//	string s, s1, s2;
//	  
//	int len1 = s1.size(), len2 = s2.size();
//	int x, y;
//	for (int i = 0; i + len1 <= s.size(); i++)
//	{
//		if (s.substr(i, len1) == s1)
//		{
//			x = i + len1 - 1;
//			break;
//		}
//	}
//	for (int j = 0; j + len2 <= s.size(); j++)
//	{
//		if (s.substr(j, len2) == s2) y = j;
//	}
//	if (x >= y) cout << -1;
//	else cout << y - x - 1;
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		string s;
//		cin >> s;
//		int cnt = 0;
//		for (int i = 1; i < n; i++)
//		{
//			string str;
//			cin >> str;
//			int j = 0;
//			for (j = 0; j < min(str.size(), s.size()); j++)
//			{
//				if (str[str.size() - 1 - j] != s[s.size() - 1 - j])
//				{
//					s = str;
//					break;
//				}
//			}
//			cnt = j + 1;
//		}
//		if (cnt == 0) cout << endl;
//		else cout << s.substr(s.size() - cnt) << endl;
//	}
//	
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string S, S1, S2;
//	int i = 0;
//	char a;
//	while (cin >> a)
//	{
//		if (a != ',')
//		{
//			if (i == 0) S += a;
//			else if (i == 1) S1 += a;
//			else S2 += a;
//		}
//		else i++;
//	}
//	cout << S;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char a;
//	string s;
//	while (scanf("%c",a)) cout<<a<<endl;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s, s1, s2;
//	char a;
//	while (cin >> a, a != ',') s += a;
//	while (cin >> a, a != ',') s1 += a;
//	while (cin >> a, a) s2 += a;
//	if (s.size() < s1.size() || s.size() < s1.size()) cout << -1;
//	else
//	{
//		int x, y;
//		int len1 = s1.size();
//		for (int i = 0; i + len1 <= s.size(); i++)
//		{
//			int k = 0;
//			for (; k < len1; k++)
//				if (s[k + i] != s1[k]) break;
//			if (k == len1)
//			{
//				x = i + k - 1;
//				break;
//			}
//		}
//		int j = s.size() - s2.size();
//		int len2 = s2.size();
//		for (; j ; j--)
//		{
//			int k = 0;
//			for (; k < len2; k++)
//				if (s[k + j] != s2[k]) break;
//			if (k == len2)
//			{
//				y = j;
//				break;
//			}
//		}
//		if (x >= y) cout << -1;
//		else cout << y - x - 1;
//	}
//	return 0;
//}

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
//		int len=1000;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> str[i];
//			if (str[i].size() < len) len = str[i].size();
//		}
//		while (len)
//		{
//			bool succeed = true;
//			for (int i = 1; i < n; i++)
//			{
//				bool is_same = true;
//				for (int j = 1; j <= len; j++)
//				{
//					if (str[0][str[0].size() - j] != str[i][str[i].size() - j])
//					{
//						is_same = false;
//						break;
//					}
//				}
//				if (!is_same)
//				{
//					succeed = false;
//					break;
//				}
//			}
//			if (succeed) break;
//			len--;
//		}
//		cout << str[0].substr(str[0].size() - len) << endl;
//	}
//	return 0;
//}