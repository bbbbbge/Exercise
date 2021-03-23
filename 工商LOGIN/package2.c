#include <stdio.h>
int main()
{
	int a1,a2,a3,a4,a5,a6;
	
	scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6);
	while(a1+a2+a3+a4+a5+a6!=0){
		int x,y,count;
		count=a6+a5+a4+(a3+3)/4;
		if(a3%4==0)
			x=5*a4;
		else if(a3%4==1)
			x=5+5*a4;
		else if(a3%4==2)
			x=3+5*a4;
		else if(a3%4==3)
			x=1+5*a4;
			
		if(a2>x)
			count+=(a2-x+8)/9; 
		y=36*count-36*a6-25*a5-16*a4-9*a3-4*a2;
		if(a1>y)
			count+=(a1-y+35)/36;
			
		printf("%d\n",count);	
		scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6);		
	}
	return 0;
}
