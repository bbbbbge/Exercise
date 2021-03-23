#include <stdio.h>
#include <math.h>
int main()
{
	int M,N,K,i,j,max,sum,time;
	max=0;
	sum=0;
	time=0;
	int arr[21][21]={0};
	int begin1,begin2,end1,end2;
	scanf("%d %d %d",&M,&N,&K);
	for(i=0;i<M;i++)
	{
		for(j=1;j<=N;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				begin1=i;
				end1=j;
			}
		}
	}
	sum=max;
	time=begin1+1;
	arr[begin1][end1]=0;
	if(time+begin1>K-2)
		printf("0");
	else
	while(1)
	{
		int count=0;
		int t1=0;
		max=0;
		for(i=0;i<M;i++)
		{
			for(j=1;j<=N;j++)
			{
				if(arr[i][j]>max)
				{
					max=arr[i][j];
					begin2=i;
					end2=j;
					count=max;
					t1=abs(begin1-begin2)+abs(end1-end2)+1;
				}
			}	
		}
		time+=t1;
		if((time+begin2>K-2)||max==0)
		{
			printf("%d",sum);
			break;
		}
		else
		{
			sum+=count;
			arr[begin2][end2]=0;
			begin1=begin2;
			end1=end2;
		}
	}
	return 0;
}
