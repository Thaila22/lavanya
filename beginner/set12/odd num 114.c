#include"stdio.h"
int main(void)
{
  int n,k,i,j,a[50],count;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2!=0)
    {
      count++;
      if(count==2)
      {
        printf("%d",a[i]);
      }
    }
  }
}
