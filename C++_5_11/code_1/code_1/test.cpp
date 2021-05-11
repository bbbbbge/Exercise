#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <queue>	//普通队列
//
//using namespace std;
//int main()
//{
//	queue<int> a;
//	a.push(1);
//	a.push(2);
//	a.push(3);
//	cout << a.size() << endl;
//	while (!a.empty())
//	{
//		cout << a.front() << endl;
//		a.pop();
//	}
//	cout << a.size();
//	return 0;
//}
//#include <iostream>
//#include <queue>
//using namespace std;
//int main()
//{
//	//priority_queue<int> a;//从大到小，降序
//	//a.push(3);
//	//a.push(1);
//	//a.push(9);
//	////cout << a.size() << endl;;
//	///*while (!a.empty())
//	//{
//	//	cout << a.top() << endl;
//	//	a.pop();
//	//}*/
//	//cout << a.empty() << endl;//不为空，就是0
//	///*a.pop();
//	//cout << a.top() << endl;
//	//cout << a.size() << endl;*/
//
//
//	priority_queue<int, vector<int>, greater<int>> a;
////	priority_queue<int, vector<int>, greater<int>> b;//从小到大，升序
//
//	/*a.push(14);
//	a.push(3);
//	a.push(7);
//	while (!a.empty())
//	{
//		cout << a.top() << endl;
//		a.pop();
//	}*/
//	return 0;
//}

//#include <iostream>
//#include <stack>
//
//using namespace std;
//int main()
//{
//	stack<int> a;
//	a.push(1);
//	a.push(9);
//	a.push(4);
//	a.push(3);
//	a.push(7);
//
//	while (!a.empty())
//	{
//		cout << a.top() << endl;
//		a.pop();
//	}
//	return 0;
//}

//#include <iostream>
//#include <deque>
//
//using namespace std;
//int main()
//{
//	deque<int> a;
//
//	a.push_back(1);
//	a.push_back(2);
//	a.push_back(3);
//	/*while (!a.empty())
//	{
//		cout << a.front() << endl;
//		a.pop_front();
//	}*/
//
//	/*deque<int>::iterator it;//迭代器
//	for (it = a.begin(); it != a.end(); it++)
//		cout << *it << endl;*/
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//	/*int a[] = { 1,2,3,4,5 };
//	reverse(a, a + 5);			//reverse 翻转，左闭右开
//	for (int x: a)
//	{
//		cout << x << endl;
//	}*/
//
//	vector<int>a({ 1,2,3,4,5 });
//	reverse(a.begin(), a.end());
//	for (int x : a) cout << x << endl;
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int a[] = { 1,1,2,2,3 };
//	/*cout << &a[2] - &a[1] << endl;*/
//	printf("%p\n", &a[1]);
//	printf("%p\n", &a[2]);
//	printf("%d", &a[2] - &a[1]);
//	return 0;
//}

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[] = { 1,1,2,2,3,3,4 };
	int sz = unique(arr, arr + 7) - arr;
	for (int i = 0; i < sizeof(arr)/4; i++) cout << arr[i] << endl;
	return 0;
}