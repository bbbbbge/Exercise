#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main()
//{
//	int n;
//	vector<int> a;
//	for (int i = 0; i < 10; i++) a.push_back(i);
//	cout << a[4];
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> a;
//	
//	//vector(v.begin(1), v.end(7));
//
//	int arr[] = { 1,2,3,4,5 };
//	/*vector<int> v(arr, arr + sizeof(arr) / sizeof(int));*/
//	
//	/*vector<int> v(5, 1);*/
//
//	vector<int> v;
//	/*v.assign(5, 1);*/
//
//	//v.assign(, arr[4]);
//
//	/*vector& operator=(const vector &vec);
//	swap(vec);*/
//	//for (int i = 0; i < 5; i++) cout << v[i];
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	vector<int> a;
//	a.push_back(7);//是在末尾插入元素
//	a.push_back(2);
//	a.push_back(9);
//	//cout << a.size() << endl;
//
//	//a.clear();//清空元素并不会清空内存占用
//
//	//cout << a.size();
//
//	//a.empty()//非空0 空1
//	//cout << a.front() << endl;//返回第一个元素
//	//cout << a.back() << endl;//返回最后一个元素
//
//	/*a.pop_back();
//	for (int i = 0; i < a.size(); i++) cout << a[i] << endl;*/
//
//	vector<int>::iterator it;//定义一个类型为vector<int>的迭代器
//	
//	sort(a.begin(), a.end());//排序
//
//	//a.clear();
//	{
//		vector<int> x;
//		a.swap(x);
//	}
//	for (it = a.begin(); it != a.end(); it++)//前闭后开，end是最后一个元素后面的边界
//		cout << *it << endl;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int main()
//{
//	vector<int> a;
//	a.push_back(1);
//	a.push_back(9);
//	a.push_back(4);
//	a.push_back(3);
//
//	cout << a.size() << endl;
//	cout << a.front() << endl;
//	cout << a.back() << endl;
//	a.pop_back();
//	cout << a.back() << endl;
//
//	/*cout << a.empty() << endl;
//	for (int i = 0; i < a.size(); i++) cout << a[i] << endl;
//
//	vector<int>::iterator it;
//	
//	sort(a.begin(), a.end());
//	for (it = a.begin(); it != a.end(); it++) cout << *it << endl;
//
//	a.clear();
//	cout << a.empty() << endl;*/
//	return 0;
//}

#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<int> a;
	a.push(3);
a.push(1);
	a.push(2);
	
	/*cout << a.front() << endl;
	a.pop();
	cout << a.front() << endl;*/
	
	/*while (!a.empty())
	{
		cout << a.front() << endl;
		a.pop();
	}*/
	cout << a.back();
	return 0;
}