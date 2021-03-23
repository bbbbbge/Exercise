#include<stdio.h>
int main()
{
int n;
while(scanf("%d",&n)!=EOF)
{
int i,a[53],count=0;
for(i=2;i<=n;i=i+2)
{
count++;
printf("%d ",i);
}
if(count==n-2)
{
printf("\n1 3\n");
continue;
}
for(i=3;i<=n;i=i+4)
{
count++;
printf("%d ",i);
}
if(count==n-2)
{
printf("\n1 5\n");
continue;
}
for(i=5;i<=n;i=i+8)
{
count++;
printf("%d ",i);
}
if(count==n-2)
{
printf("\n1 9\n");
continue;
}
for(i=9;i<=n;i=i+16)
{
count++;
printf("%d ",i);
}
if(count==n-2)
{
printf("\n1 17\n");
continue;
}
for(i=17;i<=n;i=i+32)
{count++;
printf("%d ",i);
}
if(count==n-2)
{

printf("\n1 33\n");
continue;
}
}
return 0;
}

