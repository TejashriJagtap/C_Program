//Calculate SumOf Given No. Till User Enter zero or -ve(goto)
#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,cnt=1,sum=0;
    printf("Enter Numbers To Calculate Their sum\n(Will Stop Summation After Zero Or Negative Input)== ");

   up:
        printf("\n\tEnter A Number %d=",cnt);
        scanf("%d",&n);

        if(n<=0)
        {
            goto down;
        }
        sum=sum+n;
        cnt++;

        goto up;

    down:

        printf("\n\nSummation Of Given Numbers Is = %d",sum);
        getch();
        printf("\n Thanks");
        return 0;
}
