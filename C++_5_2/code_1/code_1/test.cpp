#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <string>
//
//using namespace std;
//int main()
//{
//	string s;
//	int a[26] = { 0 };
//	cin >> s;
//	for (int i = 0; i < s.size(); i++) a[s[i] - 'a']++;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (a[s[i] - 'a'] == 1)
//		{
//			cout << s[i];
//			return 0;
//		}
//	}
//	cout << "no";
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a, b;
//	double k,cnt=0;
//	cin >> k >> a >> b;
//	for (int i = 0; i < a.size(); i++)
//		if (a[i] == b[i]) cnt++;
//	if (cnt / (a.size()) >= k) cout << "yes";
//	else cout << "no";
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a, b;
//	getline(cin, a);
//	getline(cin, b);
//	int i = 0;
//	for (i = 0; a[i]&&b[i]; i++)
//	{
//		if (a[i] - b[i] == 0 || a[i] - b[i] == 32 || a[i] + 32 == b[i])
//			continue;
//		else if (a[i] - b[i] > 0 || a[i] - b[i] > 32 || a[i] + 32 > b[i])
//		{
//			cout << ">";
//			return 0;
//		}
//		else if (a[i] - b[i] < 0 || a[i] - b[i] < 32 || a[i] + 32 < b[i])
//		{
//			cout << "<";
//			return  0;
//		}
//	}
//	if (a[i - 1] == '\0' && b[i - 1] == '\0') cout << "=";
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a, b;
//	getline(cin, a);
//	getline(cin, b);
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] >= 'A'&&a[i] <= 'Z') a[i] += 32;
//	}
//	for (int i = 0; i < b.size(); i++)
//	{
//		if (b[i] >= 'A'&&b[i] <= 'Z') b[i] += 32;
//	}
//	if (a==b) cout << "=";
//	else if (a>b) cout << ">";
//	else cout<<"<";
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//int main()
//{
//	string a, b;
//	getline(cin, a);
//	getline(cin, b);
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] >= 'A'&&a[i] <= 'Z') a[i] += 32;
//	}
//	for (int i = 0; i < b.size(); i++)
//	{
//		if (b[i] >= 'A'&b[i] <= 'Z') b[i] += 32;
//	}
//	int d = strcmp(a.c_str() , b.c_str());
//	if (d == 0) cout << "=";
//	else if (d > 0) cout << ">";
//	else cout << "<";
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	int cnt = 0;
//	for (int i=0;i<s.size();i++)
//	{
//		if (s[i] != ' ')
//		{
//			cout << s[i];
//			cnt = 0;
//		}
//		else
//		{
//			if (cnt == 0) cout << s[i];
//			cnt++;
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a;
//	while (cin >> a)
//	{
//		cout << a << " ";
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] != 0 || s[i + 1] != 0) cout << s[i];
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a;
//	getline(cin, a);
//	string b;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] != ' ') b += a[i];
//		else
//		{
//			b += ' ';
//			int j = i + 1;
//			while (a[j] == ' '&&j<a.size()) j++;
//			i = j - 1;
//		}
//	}
//	cout << b;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a, b;
//	getline(cin, a);
//	for (int i = 0; i < a.size(); i++)
//	{
//		b += a[i%a.size()] + a[(i + 1)%a.size()];
//	}
//	cout << b;
//	return 0;
//}


#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, a, b;
	getline(cin, s);
	cin >> a >> b;
	for (int i = 0; i < s.size(); i++)
	{
		int len = 0;
		int j = i+1;
		while (j < s.size() && s[j] != ' ') j++;
		if (s.substr(s[i], j) == a) cout << b <<' ';
		else cout << s.substr(s[i],j);
		i = j - 1;
	}
	return 0;
}