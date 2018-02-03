#include<stdio.h>
int main(void);
{
char str[100];
int i,count;
printf("enter the str");
scanf("%d",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0'&&str[i]<='9')
{
count++;
}
printf("%d",count);
}
return 0;
}
