#include<stdio.h>
int main(){
int s,i,j,k;
char num[11];
char n1[11] = {"- -- -----"};
char n2[11] = {"| ||| ||"};
char n3[11] = {"||||| |||"};
char n4[11] = {" ----- --"};
char n5[11] = {"| | | | "};
char n6[11] = {"|| |||||||"};
char n7[11] = {"- -- -- --"};
while(1){
scanf("%d",&s);
scanf("%s",num);
if(s==0&&num[0]=='0')
break;
for(i=0;num[i+1]!='\0';i++){
printf(" ");
for(j=0;j<s;j++){
printf("%c",n1[num[i]-'0']);
}
printf(" ");
}
printf(" ");
for(j=0;j<s;j++)
printf("%c",n1[num[i]-'0']);
printf(" \n");
for(j=0;j<s;j++){
for(i=0;num[i+1]!='\0';i++){
printf("%c",n2[num[i]-'0']);
for(k=0;k<s;k++){
printf(" ");
}
printf("%c",n3[num[i]-'0']);
printf(" ");
}
printf("%c",n2[num[i]-'0']);
for(k=0;k<s;k++){
printf(" ");
}
printf("%c",n3[num[i]-'0']);
printf("\n");
}
for(i=0;num[i+1]!='\0';i++){
printf(" ");
for(j=0;j<s;j++){
printf("%c",n4[num[i]-'0']);
}
printf(" ");
}
printf(" ");
for(j=0;j<s;j++)
printf("%c",n4[num[i]-'0']);
printf(" \n");//end of 4
for(j=0;j<s;j++){
for(i=0;num[i+1]!='\0';i++){
printf("%c",n5[num[i]-'0']);
for(k=0;k<s;k++){
printf(" ");
}
printf("%c",n6[num[i]-'0']);
printf(" ");
}
printf("%c",n5[num[i]-'0']);
for(k=0;k<s;k++){
printf(" ");
}
printf("%c",n6[num[i]-'0']);
printf("\n");
}
for(i=0;num[i+1]!='\0';i++){
printf(" ");
for(j=0;j<s;j++){
printf("%c",n7[num[i]-'0']);
}
printf(" ");
}
printf(" ");
for(j=0;j<s;j++)
printf("%c",n7[num[i]-'0']);
printf(" \n");
printf("\n");
}
return 0;
} 
