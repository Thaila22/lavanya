#include<stdio.h>
int main(void)
{
int i,n,count=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count<=1)
{
printf("no");
}
else
{
printf("yes");
}
return 0;
}
