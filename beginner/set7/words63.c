#include<stdio.h>
int main(void)
{
char a[10];
int i,count=1;
scanf("%[^n]s",a);
for(i=0;a[i]='\0';i++)
{
if(a[i]=' ')
{
count++;
}
}
printf("%d",count);
return 0;
}
