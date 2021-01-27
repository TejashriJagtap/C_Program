#include<stdio.h>
#include<conio.h>
 int main()
 {
     int i=0;

     for(i=0;i<=5;i++)
     {
         printf("\n %d.Hello",i);
         if(i==2)
         {
             continue;
         }
         printf("\n   Welcome To This Program..!!\n");
     }

     getch();
     printf("\n\n\t\tThank You....\n");

     getch();
     return 0;
 }
