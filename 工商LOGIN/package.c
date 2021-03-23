#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,a5,a6;
	
	scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6);
	while(a1+a2+a3+a4+a5+a6!=0){
		int x,y,z,count;
		count=a6+a5+a4;
		if(a3%4==0)
			count+=a3/4;
		else
			count+=a3/4+1;
		if(a3%4==1)
			x=5+5*a4;
		if(a3%4==2)
			x=3+5*a4;
		if(a3%4==3)
			x=1+5*a4;
		if(a2<=x){
			y=a5*9+(a4*20+(4-(a3%4))*9-4*a2);
			if((a1-y)%36==0)
				count+=(a1-y)/36;
			else
				count+=(a1-y)/36+1;
		}
		else{
			if((a2-x)%9==0){
				count+=(a2-x)/9;
				if(a1%36==0)
					count+=a1/36;
				else
					count+=a1/36+1;
			}
			else
				count+=(a2-x)/9+1;
				z=36-((a2-x)%9)*4;
				if((a1-z)%36==0)
					count+=(a1-z)/36;
				else
					count+=(a1-z)/36+1;
			}	
		printf("%d¸ö\n",count);	
		scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6);		
	}
	return 0;
}
