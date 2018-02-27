#include<stdio.h>
int main(void)
{
int ,i=0,n,rem,b[i];
scanf("%d",&n);
if(n<=10000000)
{
while(n>0)
{
rem=n%10;
n=n/10;
if(rem%2!=0)
{
b[i]=rem;
i++;
count++;
}
}
for(i=count-1;i>=0;i--)
{
printf("%d",b[i]);
}
return 0;
}
