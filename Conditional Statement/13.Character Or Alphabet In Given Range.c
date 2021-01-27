#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0',sch='\0',ech='\0';
    printf("\n Enter Starting Character=");
    sch=getche();

    printf("\n Enter Ending Character=");
    ech=getche();
     if(sch<ech)
     {
         for(ch=sch;ch<=ech;ch++)
         {
             printf("\n %c",ch);
         }
     }
     else
     {
         for(ch=sch;ch>=ech;ch--)
         {
             printf("\n %c",ch);
         }

     }

    getch();
    return 0;
}
