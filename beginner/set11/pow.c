#include<stdio.h>
int main(void)
{
int N,K,pow=1,i;
scanf("%d%d",&N,&K);
for(i=0;i<=K;i++)
{
pow=i*N;
}
printf("%d",pow);
return 0;
}

