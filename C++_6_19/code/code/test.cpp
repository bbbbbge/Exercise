#define _CRT_SECURE_NO_WARNINGS 1


 //串

//#include <stdio.h>
//#include <string>
//#define MAXLEN 255
//
//typedef struct
//{
//	char ch[MAXLEN];
//	int length;
//}SString;
//
//typedef struct StringNode
//{
//	char ch;
//	struct String *next;
//}StringNode,*Stirng;
//
//typedef struct StringNode
//{
//	char ch[4];
//	struct String *next;
//}StringNode, *Stirng;
//
////求子串
//bool SubString(SString &Sub, SString S, int pos, int len)
//{
//	if (pos + len - 1 > S.length) return false;
//	for (int i = pos, j = 1; i < len + pos; i++, j++)
//	{
//		Sub.ch[j] = S.ch[i];
//	}
//	Sub.length = len;
//	return true;
//}
//
////比较操作.
//int StrCompare(SString S, SString T)
//{
//	for (int i = 1; i <= S.length && i <= T.length; i++)
//	{
//		if (S.ch[i] != T.ch[i])
//			return S.ch[i] - T.ch[i];
//	}
//	return S.length - T.length;
//}
//
//int Index(SString S, SString T)
//{
//	for (int i = 1; i <= S.length - T.length + 1; i++)
//	{
//		SString A;
//		SubString(A, S, i, T.length);
//		if (!StrCompare(A, T)) return i;
//	}
//	return 0;
//}
//
//void get_next(SString T, int next[])
//{
//	int i = 1, j = 0;
//	next[1] = 0;
//	while (i < T.length)
//	{
//		if(j==0||T.ch[i]==T.ch[j])
//	}
//}
////KMP算法_定位
//int Index_KMP(SString S, SString T)
//{
//	int i = 1, j = 1;
//	int next[T.length];
//	get_next(T, next);
//	while (i <= S.length&&j <= T.length)
//	{
//		if (j == 0 || S.ch[i] == T.ch[j])
//		{
//			i++;
//			j++;
//		}
//		else j = next[j];
//	}
//	if (j > T.length) return i - T.length;
//	else return 0;
//}
//int main()
//{
//
//
//	return 0;
//}


#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> sub(vector<int> &A, vector<int> &B)
{
	if (A.size() < B.size()) return sub(B, A);
	if (A.size == B.size())
	{
		for (int i = A.size() - 1; i >= 0; i--)
		{
			if (A[i] > B[i]) break;
			else if (A[i] < B[i]) return sub(B, A);
		}
	}
	vector<int> C;
	int t = 0;
	for (int i = 0; i < A.size(); i++)
	{
		t += A[i];
		if (i < B.size()) t -= B[i];
		C.push_back((t + 10) % 10);
		if (t < 0) t = -1;
		else t = 0;
	}
	return C;
}
int main()
{
	string a, b;
	cin >> a >> b;
	vector<int> A, B;
	for (int i = a.length() - 1; i >= 0; i--) A.push_back(a[i] - '0');
	for (int i = b.length() - 1; i >= 0; i--) B.push_back(b[i] - '0');
	auto C = sub(A, B);
	int al = stoi(A);
	int b1 = stoi(B);
	if()
	


	return 0;
}