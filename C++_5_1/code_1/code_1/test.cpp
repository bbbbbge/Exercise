#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str, substr;
//	cin >> str >> substr;
//	for (int i = 0; i < str.size()-1; i++)
//	{
//		for (int j = i+1; j < str.size(); j++)
//		{
//			if (str[i] < str[j])
//			{
//				cout << str[i];
//				break;
//			}
//			if (j == str.size()) cout << str[i] << substr;
//			
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main() 
//{
//	string s;
//	cin >> s;
//	pri
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string a, b;
//	while (cin >> a >> b)
//	{
//		int p = 0;
//		for (int i = 1; i < a.size(); i++)
//		{
//			if (a[i] > a[p]) p = i;
//		}
//		cout << a.substr(0, p + 1) << b << a.substr(p + 1) << endl;
//	}
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		int j = 0;
		for (j = 0; j < s.size(); j++)
		{
			if (s[i] == s[j]&&j!=i) break;
		}
		if (j == s.size()) 
		{
			cout << s[i];
			return 0;
		}
	}
	cout << "no";
	return 0;
}