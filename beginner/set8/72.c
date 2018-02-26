#include<stdio.h>
int main(void)
{
int i,j,count=0;
char a[50];
char b[10]={'a','e','i','o','u'};
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
for(j=0;j<=5;j++)
{
if(a[i]==b[j])
{
count++;
}
}
}
if(count>0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
