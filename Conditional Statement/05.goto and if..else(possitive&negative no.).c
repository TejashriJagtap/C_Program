#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n Enter Number =");
    scanf("%d",&No);

    if(No==0)
    {
        printf("\n You Have Entered Zero ,Which Is Neutral.");
        goto down;
    }

    else if(No>0)
    {
        printf("\n Welcome You Have Entered Positive Number. ");
    }
    else
    {
         printf("\n Welcome You Have Entered Negative Number. ");
    }
    down:
        getch();
        printf("\n Thanks For Interacting");

        getch();

        return 0;
}
