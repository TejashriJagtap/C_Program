#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dig=0,Ecnt=0,Ocnt=0,Zcnt=0,Temp=0;

    printf("\n Enter Number To Calculate to Count Even,Odd,Zero Digit in it=");
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
        else if(dig%2==1)
        {
            Ocnt++;
        }
        else
        {
            Zcnt++;
        }

        Temp=Temp/10;
    }

    printf("\n Count Of Even Digits In Given Number %d = %d",No,Ecnt);
    printf("\n Count Of Odd Digits In Given Number %d = %d",No,Ocnt);
    printf("\n Count Of Zeros In Given Number %d = %d",No,Zcnt);

    printf("\n Thanks");

    getch();
    return 0;
}

