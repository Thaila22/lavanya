#include<stdio.h>
#include<conio.h>
void main()
{
int c;
printf("Enter the character");
scanf("%d",c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("%c is an alphabet");
}
else
{
printf("%c is not an alphabet");
}
}
