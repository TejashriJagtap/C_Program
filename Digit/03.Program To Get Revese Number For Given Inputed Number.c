#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,RevNum=0,Dig=0,Temp=0;

    printf("\n Enter Positive Integer Number To Get Its Revers Number:");
    scanf("%d",&No);

    Temp=No;
    if(Temp<0)
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

    printf("\n Revers Number Of Given Positive Number %d = %d",No,RevNum);
    getch();
    printf("\n Thanks");
    getch();
    return 0;
}
