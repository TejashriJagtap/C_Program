//Factorial Of Given Number(using for without loop body)
#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,fact=0,temp=0;

    printf("Enter Number To Calculate It's Factorial= ");
    scanf("%d",&n);

    for(fact=1,temp=n;temp>0;fact*=temp,temp--);


    printf("\n\nFactorial Of Given Number Is = %d",fact);
    getch();

    printf("\n\n Thanks");
    return 0;
}
