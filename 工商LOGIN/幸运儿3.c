#include<stdio.h>
int main()
{
	int i,j,n;
	while((scanf("%d",&n))!=EOF)
	{
		int arr[50];
		for(i=0;i<n;i++)
		{
			arr[i]=1;
		}
		int count=0;
		int x=n;
		while(count<n-2)
		{
			for(i=0;i<n;i++)
			{
				if(arr[i]==0)
					continue;
				else
				{
					for(j=i+1;j<n;j++)
					{
						if(arr[j]==0)
							continue;
						else
						{
							arr[j]=0;
							printf("%d ",j+1);
							count++;
							break;
						}
					}
				}
			}
		}
		printf("\n");
		int a=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]!=0)
				{
					printf("%d",i+1);
					a++;
					if(a==1)
						printf(" ");
				}
		}
		printf("\n");
	}
	return 0;
} 
