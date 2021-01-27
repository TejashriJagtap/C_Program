#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,min=0,cnt=0;

    printf("\n Enter 10 Numbers=");
    for(cnt=1;cnt<=10;cnt++)
    {
        printf("\n\t Enter Number %d=",cnt);
        scanf("%d",&n);

        if(cnt==1)
        {
            min=n;
            continue;
        }
         if(n<min)
        {
            min=n;
        }
    }
    printf("\n Press Any Key To Get Minimum Number");
    getch();
    printf("\nMinimumNumber From Given Number=%d",min);
    printf("\n\n Thanks");
    getch();
    return 0;
}
