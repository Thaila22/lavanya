#include<stdio.h>
int main(void)
{
int n;
scanf("%d",n);
while((n%10)!=0)
{
n++;
}
printf("%d",n);
}
