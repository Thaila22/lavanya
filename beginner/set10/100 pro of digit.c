#include<stdio.h>
int main()
{
int n,rem,sum=1;
scanf("%d",&n);
if(n<=10000000000)
{
while(n>0)
{
rem=n%10;
n=n/10;
sum=sum*rem;
}
}
printf("%d",sum);
return 0;
}
