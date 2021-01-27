#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,cnt=0;

    printf("\nEnter A Number To Print It's Table=");
    scanf("%d",&n);

    for(cnt=1;cnt<=10;cnt++)
    {
        printf("\n %3d * %3d = %3d",n,cnt,(n*cnt));
    }
    getch();
    return 0;
}
