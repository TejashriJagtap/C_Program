//Calculate SumOf Given No. Till User Enter zero or -ve(while)
#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,cnt=1,sum=0;
    printf("Enter Numbers To Calculate Their sum\n(Will Stop Summation After Zero Or Negative Input)== ");

    while(1)        //if value of loop is 1 or true the loop will executed
    {
        printf("\n\tEnter A Number %d=",cnt);
        scanf("%d",&n);

        if(n<=0)
        {
            break;
        }
        sum=sum+n;
        cnt++;
    }
    printf("\n\nSummation Of Given Numbers Is = %d",sum);
    getch();
    printf("\n Thanks");
    return 0;
}
