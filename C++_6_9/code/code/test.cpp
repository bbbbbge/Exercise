#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <string>
//using namespace std;
//bool is_natnum(long long num, int n)
//{
//	string snum = to_string(num);
//	string sn = to_string(n);
//	string str = snum.substr(snum.length() - sn.length());
//	if (str == sn)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int m;
//	cin >> m;
//	while (m--)
//	{
//		int n;
//		cin >> n;
//		int i = 0;
//		for (i = 1; i < 10; i++)
//		{
//			long long num = i * n * n;
//			if (is_natnum(num, n))
//			{
//				cout << i << " " << i * n * n << endl;
//				break;
//			}
//		}
//		if(i==10) cout << "No" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	string sc = to_string(a * b);
//	reverse(sc.begin(), sc.end());
//	printf("%d", stoi(sc));//将字符串转化为数字
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int row;
//	char c;
//	cin >> row >> c;
//	int col = (row + 1) / 2;
//	for (int i = 0; i < col; i++)
//	{
//		for (int j = 0; j < row; j++)
//		{
//			if (i == 0 || j == 0 || i == col - 1 || j == row - 1)
//				cout << c;
//			else cout << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//vector<int> Add(vector<int> &A, vector<int> &B)
//{
//	vector<int> C;
//	int t = 0;
//	for (int i = 0; i < A.size() || i < B.size(); i++)
//	{
//		if (i < A.size()) t += A[i];
//		if (i < B.size()) t += B[i];
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	if (t) C.push_back(t);
//	return C;
//}
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	vector<int> A, B;
//	for (int i = a.length() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//	for (int i = b.length() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//	auto sum = Add(A, B);
//	for (int i = sum.size() - 1; i >= 0; i--) cout << sum[i];
//	return 0;
//}
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//vector<int> Add(vector<int> &A, vector<int> &B)
//{
//	if (A.size() < B.size()) return Add(B, A);
//	vector<int> C;
//	int t = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		t += A[i];
//		if (i < B.size()) t += B[i];
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	if (t) C.push_back(t);
//	return C;
//}
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	vector<int> A, B;
//	for (int i = a.length() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//	for (int i = b.length() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//	auto sum = Add(A, B);
//	for (int i = sum.size() - 1; i >= 0; i--) cout << sum[i];
//	return 0;


//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//bool cmp(vector<int> &A, vector<int> &B)
//{
//	if (A.size() != B.size()) return A.size() > B.size();
//	else
//	{
//		for (int i = A.size() - 1; i >= 0; i--)
//		{
//			if (A[i] != B[i])
//				return A[i] > B[i];
//		}
//	}
//	return true;
//}
//vector<int> sub(vector<int>& A, vector<int> &B)
//{
//	vector<int> C;
//	int t = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		t = A[i] - t;
//		if (i < B.size()) t -= B[i];
//		C.push_back((t + 10) % 10);
//		if (t < 0) t = 1;
//		else t = 0;
//	}
//	while (C.size() > 1 && C.back() == 0) C.pop_back();
//	return C;
//}
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	vector<int> A, B;
//	for (int i = a.length() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//	for (int i = b.length() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//	if (cmp(A, B))
//	{
//		auto C = sub(A, B);
//		for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	}
//	else
//	{
//		auto C = sub(B, A);
//		cout << "-";
//		for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//bool cmp(vector<int> &A, vector<int> &B)
//{
//	if (A.size() != B.size()) return A.size() > B.size();
//	else
//	{
//		for (int i = A.size() - 1; i >= 0; i--)
//		{
//			if (A[i] != B[i]) return A[i] > B[i];
//		}
//	}
//	return true;
//}
//vector<int> sub(vector<int> &A, vector<int> &B)
//{
//	vector<int> C;
//	int t = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		t = A[i] - t;
//		if (i < B.size()) t -= B[i];
//		C.push_back((t + 10) % 10);
//		if (t < 0) t = 1;
//		else t = 0;
//	}
//	while (C.size() > 1 && C.back() == 0) C.pop_back();
//	return C;
//}
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	vector<int> A, B;
//	for (int i = a.length() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//	for (int i = b.length() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//	if (cmp(A, B))
//	{
//		auto C = sub(A, B);
//		for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	}
//	else
//	{
//		cout << "-";
//		auto C = sub(B, A);
//		for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	}
//
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//vector<int> mul(vector<int> &a, int b)
//{
//	int t = 0;
//	vector<int> C;
//	for (int i = 0; i < a.size() || t; i++)
//	{
//		if(i<a.size()) t += a[i] * b;
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	while (C.size() > 1 && C.back() == 0) C.pop_back();
//	return C;
//}
//int main()
//{
//	string A;
//	int b;
//	cin >> A >> b;
//	vector<int> a;
//	for (int i = A.length() - 1; i >= 0; i--) a.push_back(A[i] - '0');
//	auto C = mul(a, b);
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> div(vector<int> &S, int a, int &r)
//{
//	vector<int> C;
//	r = 0;
//	for (int i = S.size() - 1; i >= 0; i--)
//	{
//		r = r * 10 + S[i];
//		C.push_back(r / a);
//		r %= a;
//	}
//	reverse(C.begin(), C.end());
//	while (C.size() > 1 && C.back() == 0) C.pop_back();
//	return C;
//}
//int main()
//{
//	string s;
//	int a;
//	cin >> s >> a;
//	vector<int> S;
//	for (int i = s.length() - 1; i >= 0; i--) S.push_back(s[i] - '0');
//	int r;
//	auto C = div(S, a, r);
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	cout << endl << r;
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int score[110];
//	int ans[110];
//	for (int i = 0; i < m; i++) cin >> score[i];
//	for (int i = 0; i < m; i++) cin >> ans[i];
//	while (n--)
//	{
//		int arr[110];
//		int cnt = 0;
//		for (int i = 0; i < m; i++)
//		{
//			cin >> arr[i];
//			if (ans[i] == arr[i]) cnt += score[i];
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	while (n--)
//	{
//		string s;
//		getline(cin, s);
//		if (s.length() < 6) cout << "Your password is tai duan le." << endl;
//		else
//		{
//
//		}
//	}
//
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//const int N = 20010;
//int arr[N];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> arr[i];
//	int min=1e6, max=1, mincnt = 0, maxcnt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			mincnt = 1;
//		}
//		else if (arr[i] == min)
//		{
//			mincnt++;
//		}
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			maxcnt = 1;
//		}
//		else if (arr[i] == max)
//		{
//			maxcnt++;
//		}
//	}
//	cout << min << " " << mincnt << endl;
//	cout << max << " " << maxcnt << endl;
//	return 0;
//}

#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	while (n--)
	{
		double p;
		cin >> p;
		if (p < m) printf("On Sale! %.1lf\n", p);
	}


	return 0;
}