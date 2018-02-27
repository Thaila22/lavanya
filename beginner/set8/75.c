#include<stdio.h>
#include<string.h>
int main(void)
{
int n,i,b;
char a[50];
gets(a);
n=strlen(a);
{
b=n/2;
a[b]='*';
}
puts(a);
return 0;
}
