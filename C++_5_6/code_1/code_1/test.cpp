#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	int max = 0;
//	string str;
//	for (int i = 0; i < s.size(); i++)
//	{
//		int j = i, cnt = 0;
//		while (j < s.size() && s[j] != ' '&&s[j] != '.')
//		{
//			j++;
//			cnt++;
//		}
//		if (cnt > max)
//		{
//			max = cnt;
//			str = s.substr(i, cnt);
//		}
//		i = j;
//	}
//	cout << str;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string res, str;
//	while (cin >> str)
//	{
//		if (str.back() == '.') str.pop_back();
//		if (str.size() > res.size()) res = str;
//	}
//	cout << res;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str[100];
//	int n = 0;
//	while (cin >> str[n]) n++;
//	for (int i = n - 1; i >= 0; i--) cout << str[i] << " ";
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str, res;
//	cin >> str >> res;
//	for (int i = 0; i < str.size(); i++)
//	{
//		for (int j = i; j < str.size(); j++)
//		{
//
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	if (a.size() < b.size()) swap(a, b);
//	for (int i = 0; i < a.size(); i++)
//	{
//		a = a.substr(1) + a[0];
//		for (int j = 0; j + b.size() <= a.size(); j++)
//		{
//			int k = 0;
//			for (; k < b.size(); k++)
//			{
//				if (b[k] != a[j + k]) break;
//			}
//			if (k == b.size())
//			{
//				cout << "true";
//				return 0;
//			}
//		}
//	}
//	cout << "false";
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	while (cin >> a, a != ".")
	{
		string b;
		for (int i = 0; i < a.size(); i++)
		{
			b += a[i];
			int j = i + 1;
			int cnt = 1;
			while (j < a.size() && a.substr(i, cnt) != b.substr(i, cnt))
			{
				cnt++;

			}
	}
	return 0;
}