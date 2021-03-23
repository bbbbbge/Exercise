#include<stdio.h>
#include<string.h>
int main()
{
	char num[61];
	while(scanf("%s",num)!=EOF)
	{
	int i,j,m,count;
	count=0;
	m=strlen(num);
	int arr[m];
	memset(arr,0,sizeof(arr));
	for(i=0;i<m;i++)
	{
		int n=0;
		for(j=i;n<m;n++)
		{
			arr[i]=num[j]-'0'+arr[i]*10;
			j=(j+1)%m;
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=0;j<m;j++)	
		{
			if(arr[0]*i==arr[j])
			{
				count++;				
				break;
			}
		}
	}
	if(count==m)
		printf("%s is cyclic\n",num);
	else
		printf("%s is not cyclic\n",num);
	}
	return 0;
 } 
