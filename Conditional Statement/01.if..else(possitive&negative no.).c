#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0;

    printf("\n Enter Number =");
    scanf("%d",&n);

    if(n>0)
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
