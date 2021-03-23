#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t,i,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		char a[10],b[10];
		scanf("%s %s",a,b);
		x=abs(a[0]-b[0]);
		y=abs(a[1]-b[1]);
		if(x==0&&y==0)
			printf("0 0 0 0\n");
		else{
			if(x>y)
				printf("%d ",x);
			else
				printf("%d ",y);
		if(x==0||y==0||x==y)
			printf("1 ");
		else
			printf("2 ");
		if(x==0|y==0)
			printf("1 ");
		else
			printf("2 ");
		if(abs(x-y)%2!=0)
			printf("Inf\n");
		else if(x==y)
			printf("1\n");
		else
			printf("2\n");
		}
	}
	return 0;
}
