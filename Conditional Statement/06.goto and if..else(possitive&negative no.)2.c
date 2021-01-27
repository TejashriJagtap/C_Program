#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;
    up:
    printf("\n Enter Number =");
    scanf("%d",&No);

    if(No==0)
    {
        printf("\n You Have Entered Zero ,Which Is Neutral.");
        printf("\n Please Enter Valid number.");
        goto up;
    }

    else if(No>0)
    {
        printf("\n Welcome You Have Entered Positive Number. ");
    }
    else
    {
         printf("\n Welcome You Have Entered Negative Number. ");
    }

    getch();
    printf("\n Thanks For Interacting");

    getch();

    return 0;
}
