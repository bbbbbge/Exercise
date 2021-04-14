//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//typedef struct
//{
//	double realpart;
//	double imagpart;
//}complex;
//void assign(complex* A, double Real, double Imag)
//{
//	A->realpart = Real;
//	A->imagpart = Imag;
//}
//void add(complex* C, complex A, complex B)
//{
//	C->realpart = A.realpart + B.realpart;
//	C->imagpart = A.imagpart + B.imagpart;
//}
//void multiply(complex* C, complex A, complex B)
//{
//	C->realpart = A.realpart*B.realpart-A.imagpart*B.imagpart;
//	C->imagpart = A.imagpart*B.realpart+A.realpart*B.imagpart;
//}
//double divide(complex* C, complex A, complex B)
//{
//	C->realpart = (A.realpart*B.realpart + A.imagpart*B.imagpart) / (pow(B.realpart, 2) - pow(B.imagpart, 2));
//	C->imagpart = (A.imagpart*B.realpart - A.realpart*B.imagpart) / (pow(B.realpart, 2) - pow(B.imagpart, 2));
//	return (pow(B.realpart, 2) - pow(B.imagpart, 2));
//}
//int main()
//{
//	complex z1, z2, z3, z4, z;
//	double Realpart, Imagpart;
//	assign(&z1, 8.0, 6.0);
//	assign(&z2, 4.0, 3.0);
//	add(&z3, z1, z2);
//	multiply(&z4, z1, z2);
//	if (divide(&z, z4, z3))
//	{
//		Realpart = z.realpart;
//		Imagpart = z.imagpart;
//		printf("%lf\n", Realpart);
//		printf("%lf\n", Imagpart);
//	}
//	
//	return 0;
//}

//时间特性分析
//事后统计---事前分析
//O是数量级符号


//#include <stdio.h>
//#include <math.h>
//void isPrime()
//{
//	int i = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	isPrime();
//	return 0;
//}






