#include<stdio.h>
#include<conio.h>
 int main()
 {
      int No=0;

     printf("\n Enter Number:");
     scanf("%d",&No);

     if((No%5==0) && (No%7==0))
     {
         printf("\n %d Is Divisible By Both 5 And 7",No);
     }
     else if(No%5==0)
     {
         printf("\n %d Is Divisible By 5",No);
     }
     else if(No%7==0)
     {
         printf("\n %d Is Divisible By 7",No);
     }
     else
     {
         printf("\n %d Is Not Divisible By Both 5 And 7",No);
     }

     getch();
     return 0;
 }
