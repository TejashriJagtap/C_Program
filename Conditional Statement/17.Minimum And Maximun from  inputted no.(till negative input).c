#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,min=0,max=0;
    char ch='1';

    printf("\n Enter Numbers=");
    for(;;)
    {
        printf("\n\t Enter Number ");
        scanf("%d",&n);
        if(n<=0)
        {
            break;
        }
        if(ch=='1')
        {
            min=n;
            max=n;
            ch++;
            continue;
        }
        if(n<min)
        {
            min=n;
        }
        if(n>max)
        {
            max=n;
        }
    }
    printf("\n Press Any Key To Get Minimum And Maximum Number");
    getch();
    printf("\nMinimum Number From Given Number=%d",min);
     printf("\nMaximum Number From Given Number=%d",max);
    printf("\n\n Thanks");
    getch();
    return 0;
}
