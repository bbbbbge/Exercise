#include <math.h>
void gz(float a,float b,float m){
		printf("x1=%.3f x2=%.3f",(-b+sqrt(m))/(2*a),(-b-sqrt(m))/(2*a));
	}
void ez(float a,float b){
		printf("x1=%.3f x2=%.3f",-b/(2*a),-b/(2*a));
	}
void sz(float a,float b,float m){
		printf("x1=%.3f+%.3fi x2=%.3f-%.3fi",-b/(2*a),sqrt(-m)/(2*a),-b/(2*a),sqrt(-m)/(2*a));
}
int main()
{
	float a,b,c,p; 
	scanf("%f %f %f",&a,&b,&c);
	p=b*b-4*a*c;
	if(p>0)
		gz(a,b,p);
	else if(p==0)
		ez(a,b);
	else
		sz(a,b,p);
	return 0;
}
