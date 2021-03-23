#include<stdio.h>
int main()
{
	int i,j,n;
	while((scanf("%d",&n))!=EOF)
	{
		int arr[50];
		for(i=0;i<n;i++)
		{
			arr[i]=i+1;
		}
		int count=0;
		for(j=0;count==n-2;j++)
		{
			if(arr[(j%n)]==0)
				continue;
			else
				for(i=j;;i++)
				{
					if(arr[i%n+1]!=0)
					{
						count++;
						break;
					}
				}
		}
		for(i=0;i<n;i++)
		{
			if(arr[i]==0)
				printf("%d ",i+1);
		}
		printf("\n");
		for(i=0;i<n;i++)
		{
			if(arr[i]!=0)
				printf("%d ",i+1);
		}
		printf("\n");
	}
	return 0;
} 
