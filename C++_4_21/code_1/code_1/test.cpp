#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, x;
//	cin >> a >> b;
//	x = a * b;
//	cout << "PROD = " << x;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int id1, num1, id2, num2;
//	double much1, much2;
//	cin >> id1 >> num1 >> much1;
//	cin >> id2 >> num2 >> much2;
//	printf("VALOR A PAGAR: R$ %.2lf", num1*much1 + num2 * much2);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	double a, b, c, max;
//	cin >> a >> b >> c;
//	max = (a + b + fabs(a - b)) / 2;
//	max = (max + c + fabs(max - c)) / 2;
//	cout << max << " eh o maior";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int id;
//	cin >> id;
//	switch (id)
//	{
//	case 61:
//		cout << "Brasilia";
//		break;
//	case 71:
//		cout << "Salvador";
//		break;
//	case 11:
//		cout << "Sao Paulo";
//		break;
//	case 21:
//		cout << "Rio de Janeiro";
//		break;
//	case 32:
//		cout << "Juiz de Fora";
//		break;
//	case 19:
//		cout << "Campinas";
//		break;
//	case 27:
//		cout << "Vitoria";
//		break;
//	case 31:
//		cout << "Belo Horizonte";
//		break;
//	default:
//		cout << "DDD nao cadastrado";
//		break;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	double x, y;
//	cin >> x >> y;
//	if (x == 0 && y == 0)
//		cout << "Origem";
//	else if (x > 0 && y > 0)
//		cout << "Q1";
//	else if (x < 0 && y>0)
//		cout << "Q2";
//	else if (x < 0 && y < 0)
//		cout << "Q3";
//	else if (x > 0 && y < 0)
//		cout << "Q4";
//	else if (y == 0)
//		cout << "Eixo X";
//	else
//		cout << "Eixo Y";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	double a, b, c,tmp;
//	cin >> a >> b >> c;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (a >= b + c)
//		cout << "NAO FORMA TRIANGULO"<<endl;
//	else
//	{
//		if (a*a == b * b + c * c)
//			cout << "TRIANGULO RETANGULO" << endl;
//		if (a*a > b*b + c * c)
//			cout << "TRIANGULO OBTUSANGULO" << endl;
//		if (a*a < b*b + c * c)
//			cout << "TRIANGULO ACUTANGULO" << endl;
//		if (a == b && b == c)
//			cout << "TRIANGULO EQUILATERO";
//		if (b == a && c != a || a == c && a != b||b==c&&b!=a)
//			cout << "TRIANGULO ISOSCELES";
//	}
//	return 0;
//}


#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d,time;
	cin >> a >> b >> c >> d;
	if (c >= a)
		time = (c - a) * 60 + d - b;
	else
		time = (24 - a + c) * 60 + d - b;
	cout << "O JOGO DUROU "<<time/60<<" HORA(S) E " << time - time / 60 * 60 << " MINUTO(S)";
	return 0;
}











