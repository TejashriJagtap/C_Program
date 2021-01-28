#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dcnt=0,Temp=0;

    printf("\n Enter Number To Calculate Its Digit Count=");
    scanf("%d",&No);

    Temp=No;
    if(No<0)
    {
        printf("\n Invalid Number.");
        return -1;
    }
    while(Temp>0)
    {

        Dcnt++;
        Temp=Temp/10;
    }
    getch();
    printf("\n Count Of Digits In Given Number %d=%d",No,Dcnt);
    printf("\n Thanks");

    getch();
    return 0;
}
