#include<stdio.h>
int main(void)
{
int i,min,a[20];
for(i=0;i<=6;i++)
{
scanf("%d",&a[i]);
min=a[0];
}
for(i=0;i<=6;i++)
{
  if(a[i]<min)
  {
    min=a[i];
  }
}
printf("%d",min);
return 0;
}
