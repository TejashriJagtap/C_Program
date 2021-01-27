#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n=0,cnt=0,sum=0;

    printf("\nEnter 10 Numbers To Print It's Summation=");

    for(cnt=1;cnt<=10;cnt++)
    {
        printf("\n\t Enter Number= %d",cnt);
        scanf("%d",&n);
        sum=sum+n;
    }

    printf("\n Print Any Key To Get Summation Of Given Number");
    getch();

    system("cls");
    printf("\n Summation Of Given Numbers= %d",sum);

    return 0;
}
