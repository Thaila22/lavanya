#include<stdio.h>
int main(void)
{
int i,j,temp,a[20],n,max;
scanf("%d\t%d",&i,&j);
for(i=o;i<n;i++)
{
 scanf("%d",&a[i]);
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
for(i=0;i<n;i++)
{
max=a[0];
}
printf("%d",max);
return 0;
}
