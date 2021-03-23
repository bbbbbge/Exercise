#include <stdio.h>
#include <math.h>
int main()
{
	float  a,b,c,p;
	
	scanf("%f %f %f",&a,&b,&c);
	p=b*b-4*a*c;
	if(p>0){
		/*if(b==0)
			printf("x1=%.3lf x2=%.3lf",-sqrt(-4*a*c)/(2*a),sqrt(-4*a*c)/(2*a));
		else if(c==0){
			if(b>0)
				printf("x1=%.3lf x2=0",-b/a);
			else
				printf("x1=0 x2=%.3lf",-b/a);
		}
		else*/
			printf("x1=%.3f x2=%.3f",(-b-sqrt(p))/(2*a),(-b+sqrt(p))/(2*a));
	}
	else if(p==0){
		printf("x1=%.3f x2=%.3f",-b/(2*a),-b/(2*a));
	}
	else
		printf("x1=%.3f+%.3fi x2=%.3f-%.3fi",-b/(2*a),sqrt(-p)/(2*a),-b/(2*a),sqrt(-p)/(2*a));
	return 0;
}
