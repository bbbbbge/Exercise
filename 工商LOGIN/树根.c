#include <stdio.h>
#include <string.h> 
int main()
{
	char arr[1000]={0};
	int i,count;
	count=0;
	scanf("%s",arr);
	for(i=0;i<strlen(arr);i++)
	{
		count+=arr[i]-'0';
	}
	if(count<10)
		printf("%d",count);
	else
	{
		while(count>=10)
		{
		int m,n;
		m=0;
		n=0;
		while(count>0)
		{
			m=count%10;
			n+=m;
			count/=10;
		}
		count=n;
		if(count<10)
			printf("%d",count);	
		}
	}
	return 0;
 } 
