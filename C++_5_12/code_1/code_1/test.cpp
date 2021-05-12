#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
//bool cmp(int a, int b)//a是否排在b的前面
//{
//	return a < b;
//}
struct rec
{
	int x, y;
}a[5];
bool cmp(rec a, rec b)
{
	return a.x > b.x;
}
int main()
{
	/*vector<int> a({ 1,1,2,2,3,3,4 });

	a.erase(unique(a.begin(), a.end()), a.end());

	for (auto x : a) cout << x << " ";*/

	/*vector<int> a({1,9,3,8,0,5});

	sort(a.begin(), a.end());
	
	for (int x : a)
		cout << x << " ";
	sort(a.begin(), a.end(), greater<int>());

	cout << endl;
	for (int x : a)
		cout << x << " ";

	cout << endl;
	sort(a.begin(), a.end(), cmp);*/

	for (int i = 0; i < 5; i++)
	{
		a[i].x = i;
		a[i].y = -i;
	}
	sort(a, a + 5, cmp);
	for (int i = 0; i < 5; i++) printf("(%d,%d)", a[i].x, a[i].y);
	cout << endl;

	return 0;
}