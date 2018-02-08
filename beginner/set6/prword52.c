#include<stdio.h>
int main(void)
{
int ch;
printf("enter the number");
scanf("%d",&ch);
if(ch<=5)
{
   switch(ch)
   {
   case 1:
         printf("\none");
         break;
  case 2:
         printf("\ntwo");
         break;
 case 3:
         printf("\nthree");
         break;
 case 4:
         printf("\nfour");
         break;
 case 5:
        printf("\nfive");
        break;
        default:
        break;
   }
}
return 0;
}
