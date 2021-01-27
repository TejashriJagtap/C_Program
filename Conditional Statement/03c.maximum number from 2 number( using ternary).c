//Maximum From Two Number using ternary
#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0,n2=0;
    up:
    printf("\n\n Enter Two Number =");
    scanf("%d%d",&n1,&n2);

    if(n1==n2)
    {
        printf("\n\t Both Numbers Are Equal.\n\n\t Enter Different Number To Compare");
        goto up;
    }

    (n1>n2)?printf("\n\t %d is Maximum.",n1):printf("\n\t %d is Maximum.",n2);

    //(condition)?true statement:false statement.....ternary

    printf("\n\t Thanks For Interacting");

    getch();

    return 0;
}
