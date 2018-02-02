#include<stdio.h>
int main(void)
{
int n,count=0;
scanf("%d",&n);
if(n<=100000000000)
{
while(n>0)
{
n=n/10;
count=count+1;
}
printf("%d",count);
}
return 0;
}
