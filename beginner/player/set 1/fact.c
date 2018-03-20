#include "stdio.h"

int main(void) 
{
  int i,n,fact;
  scanf("%d",&fact);
  for(i=fact-1;i>0;i--)
  {
    fact=fact*i;
  }
  printf("%d",fact);
  return 0;
}
