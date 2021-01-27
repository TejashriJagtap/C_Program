#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0;
    up:
    printf("\n\n Enter Integer Number =");
    scanf("%d",&n1);

    if(n1==0)
    {
        printf("\n\tGiven Number Is Neutral.\n\tEnter Other Number");
        goto up;
    }

    if(n1%2==0)
    {
         printf("\n\t %d is Even Number",n1);
    }
    else
    {
         printf("\n\t %d is Odd Number.",n1);
    }
    getch();
    printf("\n Thanks For Interacting");

    getch();

    return 0;
}
