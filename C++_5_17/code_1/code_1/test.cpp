#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	string str[] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
//	int sum = 0;
//	for (int i = 0; i < s.size(); i++)	sum += s[i] - '0';
//	string num = to_string(sum);
//	for (int i = 0; i < num.size(); i++)
//	{
//		cout << str[num[i] - '0'];
//		if (i != num.size() - 1) cout << " ";
//	}
//	return 0;
//}
//

//规律：开头A的个数*中间A的个数=结尾A的个数 
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		string s;
//		cin >> s;
//		int begin = 0, mid = 0, end = 0, tmp = 0, i = 0;
//		while (i < s.size() && s[i] == 'A') {
//			begin++;
//			i++;
//		}
//		if (s[i] == 'P') {
//			tmp++;
//			i++;
//		}
//		while (i < s.size() && s[i] == 'A')
//		{
//			mid++;
//			i++;
//		}
//		if (s[i] == 'T')
//		{
//			tmp++;
//			i++;
//		}
//		while (i < s.size() && s[i] == 'A')
//		{
//			end++;
//			i++;
//		}
//
//		if (tmp == 2 && begin*mid == end && mid > 0) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		string s;
//		cin >> s;
//		map<char, int> m;
//		int p, t;
//		for (int i = 0; i < s.length(); i++)
//		{
//			m[s[i]]++;
//			if (s[i] == 'P') p = i;
//			if (s[i] == 'T') t = i;
//		}
//		if (m.size() == 3 && m['P'] == 1 && m['T'] == 1 && t - p > 1 && p*(t - p - 1) == s.length() - t - 1) 
//			cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//const int N = 1e6;
//struct stu
//{
//	string name;
//	string id;
//	int score;
//}a[N];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)	
//		cin >> a[i].name >> a[i].id >> a[i].score;
//	int MAX = 0, MIN = 100, p, q;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (a[i].score > MAX)
//		{
//			MAX = a[i].score;
//			p = i;
//		}
//		if (a[i].score < MIN)
//		{
//			MIN = a[i].score;
//			q = i;
//		}
//	}
//	cout << a[p].name << " " << a[p].id << endl;
//	cout << a[q].name << " " << a[q].id;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//string name;
//string id;
//int score;
//int main()
//{
//
//	int n, MAX = -1, MIN = 101;
//	string maxname, minname, maxid, minid;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> name >> id >> score;
//		if (score > MAX)
//		{
//			MAX = score;
//			maxname = name;
//			maxid = id;
//		}
//		if (score < MIN)
//		{
//			MIN = score;
//			minname = name;
//			minid = id;
//		}
//	}
//	cout << maxname << " " << maxid << endl;
//	cout << minname << " " << minid;
//	return 0;
//}

#include <iostream>

using namespace std;
int main()
{
	int n, cnt = 0;
	cin >> n;
}