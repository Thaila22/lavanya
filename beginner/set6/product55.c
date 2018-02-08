#include<stdio.h>
int main(void)
{
int a,b,n;
scanf("%d%d",&a,&b);
n=a*b;
if(n%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
