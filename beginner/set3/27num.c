#include<stdio.h>
#include<ctype.h>
int main(void)
{
char a;
scanf("%s",&a);
if(isdigit(a)==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
