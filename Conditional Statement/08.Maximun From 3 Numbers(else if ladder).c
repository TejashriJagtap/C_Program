#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0,No3=0;

    printf("\n Enter three Numbers=>");
    scanf("%d%d%d",&No1,&No2,&No3);

    if((No1 == No2)&&(No2 == No3 ))
    {
        printf("\n Numbers Are Equal");
        goto dwn;
    }
    if(No1>No2)
    {
        if(No1>No3)
        {
            Printf("\n %d Is The Maximum Number",No1);
        }
        else
        {
            printf("\n %d Is The Maximum Number",No3);
        }
    }
    else if(No2>No3)
    {
        Printf("\n %d Is The Maximum Number",No2);
    }
    else
    {
        printf("\n %d Is The Maximum Number",No3);
    }
    dwn:
     printf("\n Thanks For Interacting");

     getch();
     return 0;
}
