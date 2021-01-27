#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,max=0,cnt=0;

    printf("\n Enter 10 Numbers=");
    for(cnt=1;cnt<=10;cnt++)
    {
        printf("\n\t Enter Number %d=",cnt);
        scanf("%d",&n);

        if(cnt==1)
        {
            max=n;
            continue;
        }
         if(n>max)
        {
            max=n;
        }
    }
    printf("\n Press Any Key To Get Maximum Number");
    getch();
    printf("\nMaximum Number From Given Number=%d",max);
    printf("\n\n Thanks");
    getch();
    return 0;
}
