#include<stdio.h>
int main(void)
{
int N,A,D;
int sum=0;
scanf("%d\t%d\t%d",&N,&A,&D);
if(A<=100000&&D<=100000)
{
for(1=A;i<=N;i=i+D)
{
sum=sum+i;
N--;
}
printf("%d",sum);
}
  return 0;
 
}

