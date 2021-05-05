#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//int main()
//{
//	string s, a, b;
//	getline(cin, s);
//	cin >> a >> b;
//	string str;
//	stringstream ssin(s);
//	while (ssin >> str)
//	{
//		if (str == a) cout << b << " ";
//		else cout << str << " ";
//	}
//	return 0;
//}

//#include <iostream>
//#include <sstream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s, a, b, str;
//	getline(cin, s);
//	cin >> a >> b;
//	stringstream ssin(s);
//	while (ssin >> str)
//	{
//		if (str == a) cout << a << " ";
//		else cout << str << " ";
//	}
//	return 0;
//}


//Ë«·ÖÖ§
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
//		int max = 0, p;
//		for (int i = 0; i < s.size(); i++)
//		{
//			int j = i;
//			int cnt = 0;
//			while (s[j] == s[i] && s[j] < s.size()) 
//			{
//				cnt++;
//				j++;
//			}
//			if (cnt > max)
//			{
//				max = cnt;
//				p = s[i];
//			}
//			i = j;
//		}
//		cout << p << " " << max << endl;
//	}
//	return 0;
//}

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
//		int max = 0;
//		char p;
//		for (int i = 0; i < s.size(); i++)
//		{
//			int j = i + 1;
//			int cnt = 1;
//			while (s[j] == s[i] && j < s.size())
//			{
//				cnt++;
//				j++;
//			}
//			if (cnt > max)
//			{
//				max = cnt;
//				p = s[i];
//			}
//			i = j - 1;
//		}
//		cout << p << " " << max << endl;
//	}
//	return 0;
//}

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	int i = 0;
	string s;w
	getline(cin, s);
	string str, max;
	int maxn = 0;
	stringstream ssin(s);
	while (ssin >> str)
	{
		if (str.size() > maxn)
		{
			maxn = str.size();
			max = str;
		}
	}
	cout << max;
	return 0;
}