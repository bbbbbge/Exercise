#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2020112966谢昕哲" << endl;
//	double w, r, s, d;
//	int num = 1;
//	s = 0;
//	cout << "请输入第" << num << "位职工的工资（负数结束）：";
//	cin >> w;
//	while (w > 0)
//	{
//		d = w - 5000;
//		if (d <= 0)
//		{
//			r = 0;
//			cout << "第" << num << "位职工的工资为：" << w << "，纳税额为：" << r << endl;
//		}
//		else if (d <= 3000)
//		{
//			r = d * 0.03;
//			cout << "第" << num << "位职工的工资为：" << w << "，纳税额为：" << r << endl;
//		}
//		else if (d <= 12000)
//		{
//			r = 3000 * 0.03 + (d - 3000) * 0.10;
//			cout << "第" << num << "位职工的工资为：" << w << "，纳税额为：" << r << endl;
//		}
//		else if (d <= 25000)
//		{
//			r = 3000 * 0.03 + 9000 * 0.10 + (d - 12000) * 0.20;
//			cout << "第" << num << "位职工的工资为：" << w << "，纳税额为：" << r << endl;
//		}
//		else if (d > 25000)
//		{
//			cout << "不予考虑!" << endl;
//		}
//		else
//		{
//			cout << "第" << num << "位职工的工资为：" << w << "，纳税额为：" << r << endl;
//		}
//		num++;
//		s = s + r;
//		cout << "***************************************" << endl;
//		cout << "请输入第" << num << "位职工的工资（负数结束）：";
//		cin >> w;
//	}
//	cout << "\n";
//	cout << "职工总人数为：" << num - 1 << ",总缴税额为：" << s << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	a = 1;
//	b = 1;
//	int n;
//	cin >> n;
//	int i = 0;
//	int c;
//	while (i < n - 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i++;
//	}
//	cout << b << endl;
//	return 0;
//}

//打印棱形
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int cx = n / 2, cy = n / 2;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (abs(i - cx) + abs(j - cy) <= n / 2)
//			{
//				cout << '*';
//			}
//			else
//			{
//				cout << ' ';
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//一元多项式求导（系数和指数）
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int count = 0;
	while (a!='\n')
	{
		if (b == 0 && count == 0)
		{
			cout << a << " " << b << endl;
			break;
		}
		else if( b==0 )
		{
			cout << 0;
		}
		else
		{
			cout << a << " " << b;
		}
		cin >> a >> b;
	}
	
	return 0;
}







