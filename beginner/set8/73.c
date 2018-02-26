#include<stdio.h>
int main(void)
{
int i,count=0,a,b,n;
  scanf("%d",&n);
  scanf("%d\t%d",&a,&b);
  for(i=a;i<=b;i++)
  {
    if(i==n)
    {
      count++;
    }
    if(count>0)
    {
      printf("yes");
    }
    else
    {
      printf("no");
    }
    return 0;
  }
