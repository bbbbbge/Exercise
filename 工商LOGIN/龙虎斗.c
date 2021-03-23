#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long s1,s2,p1,p2,n,m,z,i;
	long long arr[100001];
	long long left=0;
	long long right=0;
	long long min=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	scanf("%lld %lld %lld %lld",&m,&p1,&s1,&s2);
	for(i=0;i<m-1;i++)
	{
		left+=arr[i]*(m-1-i);
	}
	for(i=m;i<n;i++)
	{
		right+=arr[i]*(1+i-m);
	}
	if(p1<m)
	{
		left+=s1*(m-p1);
	}
	
	if(p1>m)
	{
		right+=s1*(p1-m);
	}
	if(left==right)
		printf("%lld",m);
	else if(left<right)
	{
		min=abs(s2*(m-1)+left-right);
		z=1;
		for(i=1;i<m-1;i++)
		{
			if(abs(s2*(m-1-i)+left-right)<min)
			{
				min=abs(s2*(m-1-i)+left-right);
				z=i+1;
			}
		}
		printf("%lld",z);
	}
	else
	{
		min=abs(s2-left+right);
		z=m+1;
		for(i=m+1;i<n;i++)
		{
			if(abs(s2*(1+i-m)-left+right)<min)
			{
				min=abs(s2*(1+i-m)-left+right);
				z=i+1;
			}
		}
		printf("%lld",z);
	}
	return 0;
 } 
