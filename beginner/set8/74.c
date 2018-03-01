#include<stdio.h>
int main(void)
{
int i;
char num[50];
scanf("%s",num);
for(i=0;num[i]!='\0';i++)
{
if(num[i]=='.')
{
if(num[i+1]>='5')
{
printf("%c",num[0]+1);
}
else
{
printf("%C",num[0]);
}
}
}
return 0;
}
