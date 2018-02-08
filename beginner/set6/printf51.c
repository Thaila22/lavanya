#include<stdio.h>
int main(void)
{
int n.i,rem,count=0,a[10];
scanf("%d",&n);
while(n>0)
{
rem=n%10;
n=n/10;
a[i]=rem;
i++;
count++;
}
for(i=count-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
