#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,cnt=0,sum=0;
    printf("Enter Numbers To Calculate Their sum\n(Will Stop Summation After Zero Or Negative Input)== ");

    for(cnt=1;;cnt++)
    {
        printf("\n\tEnter A Number %d=",cnt);
        scanf("%d",&n);

        if(n<=0)
        {
            break;
        }
        sum=sum+n;
    }
    printf("\n\nSummation Of Given Numbers Is = %d",sum);
    getch();
    printf("\n Thanks");
    return 0;
}
