//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int n,a,b,c,d,e,f,g;
//	cin>>n; 
//	a=n/100;
//	n%=100;
//	b=n/50;
//	n%=50;
//	c=n/20;
//	n%=20;
//	d=n/10;
//	n%=10;
//	e=n/5;
//	n%=5;
//	f=n/2;
//	n%=2;
//	g=n;
//	cout<<a<<" nota(s) de R$ "<<"100,00"<<endl;
//	cout<<b<<" nota(s) de R$ "<<"50,00"<<endl;
//	cout<<c<<" nota(s) de R$ "<<"20,00"<<endl;
//	cout<<d<<" nota(s) de R$ "<<"10,00"<<endl;
//	cout<<e<<" nota(s) de R$ "<<"5,00"<<endl;
//	cout<<f<<" nota(s) de R$ "<<"2,00"<<endl;
//	cout<<g<<" nota(s) de R$ "<<"1,00"<<endl;
//	
//	
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int n,i,a[7]={100,50,20,10,5,2,1};
//	cin>>n;
//	for(i=0;i<7;i++)
//	{
//		printf("%d nota(s) de R$ %d,00\n",n/a[i],a[i]);
//		n%=a[i];
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int N;
//	cin>>N;
//	cout<<N/3600<<':';
//	N%=3600;
//	cout<<N/60<<':';
//	N%=60;
//	cout<<N<<endl;
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int a,b;
//	cin>>a>>b;
//	if(a%b==0||b%a==0)
//		printf("Sao Multiplos\n");
//	else
//		printf("Nao sao Multiplos\n");
//}
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int x,y;
//	cin>>x>>y;
//	switch(x)
//	{
//		case 1:
//			printf("Total: R$ %.2lf",4.00*y);
//			break;
//		case 2:
//			printf("Total: R$ %.2lf",4.50*y);
//			break;
//		case 3:
//			printf("Total: R$ %.2lf",5.00*y);
//			break;
//		case 4:
//			printf("Total: R$ %.2lf",2.00*y);
//			break;
//		case 5:
//			printf("Total: R$ %.2lf",1.50*y);
//			break;
//	}
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	double a;
//	cin>>a;
//	if(a<0||a>100)
//		printf("Fora de intervalo\n");
//	else if(a<=25)
//		printf("Intervalo [0,25]\n");
//	else if(a<=50)
//		printf("Intervalo (25,50]\n");
//
//	else if(a<=75)
//
//		printf("Intervalo (50,75]\n");
//	else
//		printf("Intervalo (75,100]");
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	double a,b,c;
//	cin>>a>>b>>c;
//	if(a+b>c&&a+c>b&&b+c>a)
//	{
//		printf("Perimetro = %.1lf\n",a+b+c);
//	}
//	else
//	{
//		printf("Area = %.1lf\n",(a+b)*c/2);
//	}
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int a,b;
//	cin>>a>>b;
//	if(a==b)
//		printf("O JOGO DUROU 24 HORA(S)\n");
//	else if(a<b)
//		printf("O JOGO DUROU %d HORA(S)\n",b-a);
//	else
//		printf("O JOGO DUROU %d HORA(S)",24-a+b);
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	double salary;
//	cin>>salary;
//	if(salary>=0&&salary<=400.00)
//	{
//		printf("Novo salario: %.2lf\n",salary*1.15);
//		printf("Reajuste ganho: %.2lf\n",salary*0.15);
//		printf("Em percentual: 15 %%\n");
//	}
//	else if(salary>400&&salary<=800.00)
//	{
//		printf("Novo salario: %.2lf\n",salary*1.12);
//		printf("Reajuste ganho: %.2lf\n",salary*0.12);
//		printf("Em percentual: 12 %%\n");
//	}
//	else if(salary>800&&salary<=1200.00)
//	{
//		printf("Novo salario: %.2lf\n",salary*1.10);
//		printf("Reajuste ganho: %.2lf\n",salary*0.10);
//		printf("Em percentual: 10 %%\n");
//	}
//	else if(salary>1200&&salary<=2000.00)
//	{
//		printf("Novo salario: %.2lf\n",salary*1.07);
//		printf("Reajuste ganho: %.2lf\n",salary*0.07);
//		printf("Em percentual: 7 %%\n");
//	}
//	else if(salary>2000.00)
//	{
//		printf("Novo salario: %.2lf\n",salary*1.04);
//		printf("Reajuste ganho: %.2lf\n",salary*0.04);
//		printf("Em percentual: 4 %%\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a,b,c,max;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//	{
//		max=b;
//		b=a;
//		a=max;
//	}
//	if(a<c)
//	{
//		max=c;
//		c=a;
//		a=max;
//	}
//	if(b<c)
//	{
//		max=c;
//		c=b;
//		b=max;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i=0;
//	for(i=3;i<=100;i+=3)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a,b,max,r;
//	scanf("%d%d",&a,&b);
//	if(a<b)
//	{
//		max=b;
//		b=a;
//		a=max;
//	}
//	while(a%b!=0)
//	{
//		r=a%b;
//		a=b;
//		b=r;
//	}
//	printf("%d",b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1000;i<=2000;i++)
//	{
//		if((i%4==0&&i%100!=0)||i%400==0)
//			printf("%d ",i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		int j=0;
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j==i)
//			printf("%d ",i);
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int i=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%2==0)
//			cout<<i<<endl;
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//#include <cstdio>
//int main()
//{
//	int i=0,count=0;
//	double x;
//	for(i=0;i<6;i++)
//	{
//		cin>>x;
//		if(x>0) count++;
//	}
//	printf("%d positive numbers",count);
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout<<14/4<<endl;
//	cout<<14/4*4<<endl;
//	cout<<14%4<<endl;
//	return 0;
//} 
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout<<50000000.0/3<<endl;// cout输出浮点数，默认保留不超过6位有效数字，数字过大或者过小，则使用科学计数法 
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout<<(260+220)/(12+20)<<endl;
//	return 0;
//}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<sqrt(pow(4,2)+pow(3,2))<<endl;
	cout<<sin(3.14/2)<<endl;//3.14及这个精度后面代表pai 
	return 0;
}
































