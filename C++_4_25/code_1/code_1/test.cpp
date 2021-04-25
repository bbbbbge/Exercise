#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int x = a, y = b, z = c;
//	if (c < b)
//		swap(c, b);
//	if (c < a)
//		swap(c, a);
//	if (b < a)
//		swap(b, a);
//	cout << a << endl << b << endl << c << endl;
//	cout << endl << x <<endl<< y <<endl<< z;
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int Max, Mid, Min;
//	Max = max(a, max(b, c));
//	Min = min(a, min(b, c));
//	Mid = a + b + c - Max - Min;
//	cout << Min << endl << Mid << endl << Max << endl;
//	cout << endl << a << endl << b <<endl<< c;
//	return 0;
//}

//#include <iostream>
//#include <cstdio>
//#include <cmath>
//using namespace std;
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	double x1, x2, p;
//	p = b * b - 4 * a*c;
//	if (p < 0||a==0)
//		cout << "Impossivel calcular";
//	else
//	{
//		x1 = (-b + sqrt(p)) / (2 * a);
//		x2 = (-b - sqrt(p)) / (2 * a);
//		printf("R1 = %.5lf\n", x1);
//		printf("R2 = %.5lf\n", x2);
//	}
//
//	return 0;
//}

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	double x = n1 * 0.2 + n2 * 0.3 + n3 * 0.4 + n4 * 0.1;
	if (x >= 7.0)
		cout << "Aluno aprovado.";
	else if (x < 5.0)
		cout << "Aluno reprovado.";
	else
	{
		cout << "Aluno em exame."<<endl;
		double y;
		cin >> y;
		cout << "Nota do exame: Y" << endl;
		double z = (x + y) / 2;
		if (z >= 5.0)
			cout << "Aluno aprovado.";
		else
			cout << "Aluno reprovado.";
		printf("Media final: %.1lf", z);
	}
	return 0;
}