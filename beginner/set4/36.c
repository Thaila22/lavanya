#include<stdio.h>
int main(void)
{
char str[30];
int i,count=0;
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0'&&str[i]<='9')
{
count++;
}
}
printf("\n the numeric num is %d",count);
return 0;
}
