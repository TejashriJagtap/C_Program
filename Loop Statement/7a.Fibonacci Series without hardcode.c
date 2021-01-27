#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=1,n2=0,n3=0,cnt=0;

    printf("\nEnter the Count For Fibonacci Series=");
    scanf("%d",&cnt);

    printf("\n\n Fibonacci Series=");

    while(cnt>0)
    {
        printf("\t%d",n3);
        n3=n1+n2;

        n1=n2;
        n2=n3;
        cnt--;
    }
    getch();
    return 0;
}
