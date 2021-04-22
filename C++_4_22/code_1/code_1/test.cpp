#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, d, time;
//	cin >> a >> b >> c >> d;
//	if (a > c)
//		time = (24 - a + c) * 60 + d - b;
//	else if (a < c)
//		time = (c - a) * 60 + d - b;
//	else
//	{
//		if (b == d)
//			time = 24 * 60;
//		else if (b < d)
//			time = d - b;
//		else
//			time = 24 * 60 + d - b;
//	}
//	cout << "O JOGO DUROU " << time / 60 << " HORA(S) E " << time - time / 60 * 60 << " MINUTO(S)";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, d, time,hour,minute;
//	cin >> a >> b >> c >> d;
//	time = (c - a) * 60 + d - b;
//	if (time == 0)
//	{
//		hour = 24;
//		minute = 0;
//	}
//	else
//	{
//		if (time < 0)
//		{
//			time += 24 * 60;
//		}
//		hour = time / 60;
//		minute = time%60;
//	}
//	cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, d, time;
//	cin >> a >> b >> c >> d;
//	time = c * 60 + d - a * 60 - b;
//	time = (time + 24 * 60) % (24 * 60);
//	time = time ? time : (24 * 60);
//	cout << "O JOGO DUROU " << time/60 << " HORA(S) E " << time%60 << " MINUTO(S)";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	double salary;
//	cin >> salary;
//	if (salary <= 2000)
//		cout << "Isento";
//	else if (salary <= 3000)
//		printf("R$ %.2lf", (salary - 2000)*0.08);
//	else if (salary <= 4500)
//		printf("R$ %.2lf", 1000 * 0.08 + (salary - 3000)*0.18);
//	else
//		printf("R$ %.2lf", 1000 * 0.08 + 1500 * 0.18 + (salary - 4500)*0.28);
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int x = a, y = b, z = c;
//	if (c < b) swap(c, b);
//	if (c < a) swap(a, c);
//	if (b < a) swap(b, a);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("\n%d\n", x);
//	printf("%d\n", y);
//	printf("%d\n", z);
//
//	return 0;
//}

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int x = max(a, max(b, c));

	return 0;
}