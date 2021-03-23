#include<stdio.h>
#include<math.h>
int main(){
	int i,y1,r1,n1,y2,r2,d=0; 
	scanf("%d",&i);
	for(;i>0;i--)
	{
		double n2;
		scanf("%d%d%d%d%d",&y1,&r1,&n1,&y2,&r2);
		for(;y1<y2;y1++)
		{
			switch(y1)
			{
				case 1:case 3:case 5:case 7:case 8:case 10:case 12: d=d+31-r1;break;
				
				case 4:case 6:case 9:case 11:d=d+30-r1;break;
				
				case 2:d=d+28-r1;break;
			}
			r1=0;
		}
		d+=r2-r1;
		n2=pow(2,d)*n1;
		printf("%d",(int)n2);
	}
	
	return 0;
}
