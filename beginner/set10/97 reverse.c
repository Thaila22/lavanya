#include<stdio.h>
int main(void)
{
int i,n,count,b[100];
scanf("%d",&n);
if(n<=1000)
{
while(n>0)
{
rem=n%10;
n=n/10;
b[i]=rem;
i++;
count++;
}
for(i=0;i<count;i++)
{
printf("%d",b[i]);
}
}
return 0;
}
