#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n Enter Number =");
    scanf("%d",&No);

    (No==0)?printf("\n You Have Entered Zero ,Which Is Neutral."):((No>0)?printf("\n Welcome You Have Entered Positive Number. "):printf("\n Welcome You Have Entered Negative Number. "));

    printf("\n Thanks For Interacting");

    getch();

    return 0;
}
