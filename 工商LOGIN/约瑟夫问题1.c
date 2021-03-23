#include <stdio.h>
int main()
{
	int n,m,i;
	scanf("%d %d",&n,&m);
	while(n!=0&&m!=0)
	{
		if(m==1)
			printf("%d\n",n);
		else
		{
		int arr[301]={0};
		int x,count;
		x=n;
		count=0;
		do{
			for(i=1;i<=n;i++)
			{
				if(arr[i]==0)
					count++;
				if(count==m)
				{
					arr[i]=1;
					x--;
					count=0;
				}
			}
		}while(x>1);
		for(i=1;i<=n;i++)
		{
			if(arr[i]==0)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
		scanf("%d %d",&n,&m);
	}
	return 0;
 } 
