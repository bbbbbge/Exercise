#include <stdio.h>
int main()
{
	int L,M,i,j,sum;
	sum=0;
	int a[10001];
	
	scanf("%d %d",&L,&M);
	for(i=0;i<=L;i++)
		a[i]=1;
	for(i=0;i<M;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		for(j=x;j<=y;j++)
			a[j]=0;
	}
	for(i=0;i<=L;i++){
		if(a[i]==1)
		sum++;
	}
	printf("%d\n",sum);
	return 0;
}
