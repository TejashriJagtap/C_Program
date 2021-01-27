#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0,n2=0;

    printf("\n Enter Two Number =");
    scanf("%d%d",&n1,&n2);

    if(n1==n2)
    {
        printf("\n Both Numbers Are Equal.");
        goto down;
    }
    if(n1>n2)
    {
         printf("\n %d is Maximum.",n1);
    }
     else
    {
         printf("\n %d is Maximum.",n2);
    }
    down:
    printf("\n Thanks For Interacting");

    getch();

    return 0;
}
