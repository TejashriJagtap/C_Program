//27.Factorial Of Given Number(using while)
#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,fact=1,temp=0;

    printf("Enter Number To Calculate It's Factorial= ");
    scanf("%d",&n);

    temp=n;
    while(temp>0)
    {
        fact=fact*temp;
        temp--;
    }

    printf("\n\nFactorial Of Given Number Is = %d",fact);
    getch();

    printf("\n\n Thanks");
    return 0;
}
