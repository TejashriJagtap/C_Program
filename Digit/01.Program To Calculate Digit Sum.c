#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Dig=0,Dsum=0,temp=0;

    printf("\n Enter Number To Calculate Its Digit Sum=");
    scanf("%d",&No);

    temp=No;

    if(No<0)
    {
        printf("\n Invalid Number");
        return -1;
    }
    while(temp>0)
    {
        Dig=temp%10;
        Dsum=Dsum+Dig;
        temp=temp/10;
    }
    getch();
    printf("\n Sum Of Digits In Given Number %d=%d",No,Dsum);
    printf("\n Thanks");

    getch();
    return 0;
}
