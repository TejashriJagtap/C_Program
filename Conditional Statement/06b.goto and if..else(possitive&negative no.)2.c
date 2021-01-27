#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0;

    printf("\n Enter Two Number =");
    scanf("%d",&n1);

    if(n1==0)
    {
        printf("\n Given Number Is Neutral.");
    }

    else if(n1%2==0)
    {
         printf("\n %d is Even Number",n1);
    }
    else
    {
         printf("\n %d is Odd Number.",n1);
    }
    getch();
    printf("\n Thanks For Interacting");

    getch();

    return 0;
}
