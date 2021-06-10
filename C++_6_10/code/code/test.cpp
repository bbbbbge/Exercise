#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int a, b, n;
//	cin >> a >> b >> n;
//	int c[1010] = { 0 };
//	c[0] = a;
//	c[1] = b;
//	int i = 0;
//	int j = 1;
//	while (j < n)
//	{
//		int p = c[i] * c[i + 1];
//		if (p)
//		{
//			int z = j+1;
//			while (p)
//			{
//				j++;
//				int m = p % 10;
//				c[j] = m;
//				p /= 10;
//			}
//			reverse(c+z,c+j+1);
//		}
//		else
//		{
//			j++;
//			c[j] = p;
//		}
//		i++;
//	}
//	for (int i = 0; i < n; i++) cout << c[i] << " ";
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	int n;
//	cin >> n;
//	string s = a + b;
//	int i = 0;
//	while (s.size() <= n)
//	{
//		s += to_string((s[i] - '0')*(s[i + 1] - '0'));
//		i++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << s[i];
//		if (i != n) cout << " ";
//	}
//
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int mood[24];
//	for (int i = 0; i < 24; i++) cin >> mood[i];
//	int time;
//	while (cin >> time, time >= 0 && time < 24)
//	{
//		cout << mood[time] << " ";
//		if (mood[time] > 50)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	if (s.length() == 6)
//		cout << s.substr(0, 4) << "-" << s.substr(4);
//	else if (s.length() == 4)
//	{
//		if ((s[0] - '0')*10+(s[1] - '0') < 22)
//			cout << "20" << s.substr(0, 2) << "-" << s.substr(2);
//		else
//			cout << "19" << s.substr(0, 2) << "-" << s.substr(2);
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	int year, month;
//	if (s.length() == 6)
//	{
//		year = stoi(s.substr(0, 4));
//		month = stoi(s.substr(4));
//	}
//	else if (s.length() == 4)
//	{
//		year = stoi(s.substr(0, 2));
//		month = stoi(s.substr(2));
//		if (year < 22) year += 2000;
//		else year += 1900;
//	}
//	printf("%04d-%02d", year, month);
//
//
//
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//string s[31];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	getchar();
//	for (int i = 0; i < n; i++) getline(cin, s[i]);
//	int j = 0;
//	while (j < n)
//	{
//		int i = 0;
//		for (i = 0; i < s[j].length(); i++)
//		{
//			if (s[j].substr(i, 4) == "easy" || s[j].substr(i, 7) == "qiandao")
//				break;
//		}
//		if (i == s[j].length()) m--;
//		
//		if (m == -1) break;
//		j++;
//	}
//	if (m>=0) cout << "Wo AK le";
//	if (m == -1) cout << s[j];
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	getchar();
//	string str;
//	while (n--)
//	{
//		getline(cin, str);
//		if (str.find("easy") != -1 || str.find("qiandao") != -1)
//			continue;
//		if (!m)
//		{
//			cout << str;
//			return 0;
//		}
//		m--;
//	}
//	cout << "Wo AK le";
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//const int N = 1e5;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int arr[N];
//	for (int i = 0; i < n; i++) cin >> arr[i];
//	while (m--)
//	{
//		int l, r, sum = 0;
//		cin >> l >> r;
//		for (int i = l - 1; i <= r - 1; i++) sum += arr[i];
//		cout << sum << endl;
//	}
//
//	return 0;
//}\

#include <iostream>

using namespace std;
const int N = 100010;
int q[N], s[N];//s[0]ҪΪ0
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> q[i];
	for (int i = 1; i <= n; i++) s[i] = s[i - 1] + q[i];
	while (m--)
	{
		int l, r;
		cin >> l >> r;
		cout << s[r] - s[l - 1] << endl;
	}

	return 0;
}