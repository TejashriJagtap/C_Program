#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0;

    printf("\n\n Enter Integer Number =");
    scanf("%d",&n1);

    (n1==0)?printf("\n\tGiven Number Is Neutral."):((n1%2==0)?printf("\n\t %d is Even Number",n1):printf("\n\t %d is Odd Number.",n1));

    getch();
    printf("\n Thanks For Interacting");

    getch();

    return 0;
}
