#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <string>
//
//using namespace std;
//int main()
//{
//	string s1;
//	getline(cin, s1);
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] >= 'A'&&s1[i] <= 'Z') s1[i] = 65 + (s1[i] - 'A' + 1) % 26;
//		if (s1[i] >= 'a'&&s1[i] <= 'z') s1[i] = 97 + (s1[i] - 'a' + 1) % 26;
//	}
//	cout << s1;
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	for (char &c : s)
//	{
//		if (c >= 'A'&&c <= 'Z') c = (c - 'A' + 1) % 26 + 'A';
//		else if (c >= 'a'&&c <= 'z') c = (c - 'a' + 1) % 26 + 'a';
//	}
//	cout << s;
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
//	for (int i = 0;i<s.size(); i++) cnt++;
//	cout << cnt;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char arr[100];
//	fgets(arr, 100, stdin);
//	int cnt = 0;
//	for (int i = 0; arr[i]; i++) cnt++;
//	cout << cnt;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	cout << s.size();
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//
//{
//	string s;
//	getline(cin, s);
//	int cnt = 0;
//	for (int i = 0; i < s.size(); i++)
//		if (s[i] >= '0'&&s[i] <= '9') cnt++;
//	cout << cnt;
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t)
//	{
//		string p1, p2;
//		cin >> p1 >> p2;
//		if (p1 == p2) cout << "Tie" << endl;
//		else
//		{
//			if (p1 == "Hunter"&&p2 == "Gun" || p1 == "Bear"&&p2 == "Hunter" || p1 == "Gun"&&p2 == "Bear")
//				cout << "Player1" << endl;
//			else cout << "Player2" << endl;
//		}
//		t--;
//	}
//	return 0;
//}

#/*include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n)
	{
		string p1, p2;
		cin >> p1 >> p2;
		int len1 = p1.size(), len2 = p2.size();
		if (len1 == len2) cout << "Tie" << endl;
		else if (len1 - len2 == 3 || len1 - len2 == -2 || len1 - len2 == -1) cout << "Player" << endl;
		else cout << "Player2";
		n--;
	}
	return 0;
}*/

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//
//	while (n--)
//	{
//		string s1, s2;
//		cin >> s1 >> s2;
//		int x, y;
//		if (s1 == "Hunter") x = 0;
//		else if (s1 == "Bear") x = 1;
//		else x = 2;
//		if (s2 == "Hunter") y = 0;
//		else if (s2 == "Bear") y = 1;
//		else y = 2;
//		if (x == (y + 1) % 3) cout << "Player1" << endl;
//		else if (x == y) cout << "Tie" << endl;
//		else cout << "Player2" << endl;
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
//	for (int i = 0; s[i]; i++)
//	{
//		if (s[i + 1] != '\0') cout << s[i] << " ";
//		else cout << s[i];
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
//	for (auto c : s)
//	{
//		if (c != '\0') cout << c << " ";
//		else cout << c;
//	}
//}

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	char ch;
	cin >> ch;
	for (auto &c : s) if (c == ch) c = '#';
	cout << s;
	return 0;
}