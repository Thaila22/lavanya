#include<stdio.h>
int main(void)
{
int a,b,t;
printf("enter the twonumbers");
scanf("%d\t%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("%d\t%d",a,b);
return 0;
}
