#include<stdio.h>
int main(void)
{
int i,n,temp,a[20],max;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
for(j=o;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d",a[0]);
return 0;
}
