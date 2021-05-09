#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <string>
//using namespace std;
//string s;
//class Solution
//{
//public:
//	int strToInt(string str)
//	{
//		int k = 0;
//		while (k < str.size() && str[k] == ' ') k++;
//		int minus = 1;
//		if (k < str.size())
//		{
//			if (str[k] == '-')
//			{
//				minus = -1;
//				k++;
//			}
//			else if (str[k] == '+') k++;
//		}
//		long long res = 0;
//		while (k < str.size() && str[k] >= '0'&&str[k] <= '9')
//		{
//			res = res * 10 + str[k] - '0';
//			k++;
//		}
//		res = minus * res;
//		if (res > INT_MAX) return INT_MAX;
//		if (res < INT_MIN) return INT_MIN;
//		return res;
//	}
//};
//int main()
//{
//	Solution a;
//	getline(cin, s);
//	cout << a.strToInt(s);
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& p = a;
//	cout << p + 5;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//struct Node
//{
//	int val;
//	Node* next;
//	Node(int _val) :val(_val), next(NULL) {}
//};
//int main()
//{
//	Node* p = new Node(2);
//	Node* q = new Node(3);
//	Node* o = new Node(4);
//	p->next = q;
//	q->next = o;
//	Node* head = p;
//	//添加节点
//	Node* u = new Node(5);
//	u->next = head;
//	head = u;
//	//删除节点
//	head->next = head->next->next;
//	//链表的遍历
//	for (Node* i = head; i; i = i->next)
//		cout << i->val << endl;
//	return 0;
//}

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	/*vector<int> a = { 1,2,3 };
	for (int i = 0; i < a.size(); i++) cout<<a[i]<<endl;*/
	/*vector<int> b({ 4,5,6 });
	cout << b[1];*/
	vector<int> a;
	for (int i = 0; i < 5; i++) cin >> a[i];
	for (int i = 0; i < a.size(); i++) cout << a[i] << endl;


	return 0;
}