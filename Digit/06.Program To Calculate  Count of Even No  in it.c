#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dig=0,Ecnt=0,Temp=0;

    printf("\n Enter Number To Calculate to Count Even Digit in it=");
    scanf("%d",&No);

    Temp=No;
    if(No<0)
    {
        printf("\n Invalid Number.");
        return -1;
    }
    while(Temp>0)
    {
        dig=Temp%10;
        if(dig%2==0 && dig != 0)
        {
            Ecnt++;
        }

        Temp=Temp/10;
    }
    getch();
    printf("\n Count Of Even Digits In Given Number %d=%d",No,Ecnt);
    printf("\n Thanks");

    getch();
    return 0;
}
