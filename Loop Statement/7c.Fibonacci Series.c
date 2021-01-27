#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0,n2=1,n3=0,cnt=0;

    printf("\nEnter the Count For Fibonacci Series=");
    scanf("%d",&cnt);

    printf("\n\n Fibonacci Series=0\t1");

    while(cnt>2)
    {
        n3=n1+n2;
        printf("\t%d",n3);
        n1=n2;
        n2=n3;
        cnt--;
    }
    getch();
    return 0;
}
