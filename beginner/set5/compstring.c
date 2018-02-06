#include<stdio.h>
#include<string.h>
void main()
{
int a,b;
char x1[10],x2[10];
scanf("%s%S",&x1,&x2);
a=strlen(x1);
b=strlen(x2);
if(a>=b)
{
printf("%s",x1);
}
else
{
printf("%s",x2);
}
}
