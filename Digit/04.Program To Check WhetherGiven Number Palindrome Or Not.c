#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,RevNum=0,Dig=0,Temp=0;

    printf("\n Enter Positive Integer Number To Check Whether It Is Palindrome Number:");
    scanf("%d",&No);

    Temp=No;
    if(No<0)
    {
        printf("\n Invalid Number");
        return -1;
    }

    while(Temp>0)
    {
        Dig=Temp%10;
        RevNum=(RevNum*10)+Dig;
        Temp=Temp/10;
    }
    if(No==RevNum)
    {
        printf("\n As Given Number %d == Revers Number %d.",No,RevNum);
        printf("\n Given Number %d Is Palindrome.",No);
    }
    else
    {
        printf("\nGiven Number %d != Revers Number %d.",No,RevNum);
        printf("\n Given Number %d Is Not Palindrome.",No);
    }

    getch();
    printf("\n\n Thanks");
    getch();
    return 0;
}
