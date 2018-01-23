#include<stdio.h>
int main()
{
int i,j,n,temp,a[200];
printf("enter the number \n");
scanf("%d",&n);
printf("enter the array of n numbers");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("min number is a[0]",\d\t);
}
}

