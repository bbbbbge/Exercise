#include <stdio.h>
int main()
{
    int s,i,j,k;
    char m[8];
    while((scanf("%d%s",&s,&m),s!=0))
    {
        for(i = 0;i<2*s+3;i++) 
        {
            for(j=0;m[j];j++)
            {
                for(k=0;k<2+s;k++)
                {
                    if(k>0&&k<=s&&i==0) 
                    {
                        if(m[j]=='1'||m[j]=='4') 
                            printf(" ");
                        else
                            printf("-");
                    }else if(k>0&&k<=s&&i==s+1) 
                    {
                        if(m[j]=='0'||m[j]=='1'||m[j]=='7')
                            printf(" ");
                        else
                            printf("-");
                    }else if(k>0&&k<=s&&i==2*s+2) 
                    {
                        if(m[j]=='1'||m[j]=='4'||m[j]=='7')
                            printf(" ");
                        else
                            printf("-");
                    }else if(k==0&&i>=1&&i<=s) 
                    {
                        if(m[j]=='1'||m[j]=='2'||m[j]=='3'||m[j]=='7')
                            printf(" ");
                        else
                            printf("|");
                    }else if(k==s+1&&i>=1&&i<=s) 
                    {
                        if(m[j]=='5'||m[j]=='6')
                            printf(" ");
                        else
                            printf("|");
                    }else if(k==0&&i>=s+2&&i<=2*s+1) 
                    {
                        if(m[j]=='0'||m[j]=='2'||m[j]=='6'||m[j]=='8')
                            printf("|");
                        else
                            printf(" ");
                    }else if(k==s+1&&i>=s+2&&i<=2*s+1) 
                    {
                        if(m[j]=='2')
                            printf(" ");
                        else
                            printf("|");
                    }else
                        printf(" ");
                }
                if(m[j+1]) 
                    printf(" ");
            }
            printf(" "); 
            printf("\n");
        }
        printf("\n");
    }
    return 0;   
}

