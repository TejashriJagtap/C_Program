#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;

    printf("\n Enter Column Value for H pattern= ");
    scanf("%d",&c);
    printf("\n=================***==============\n\n");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        if(j==1||j==c||i==(c+1)/2)
        {
            printf(" *");
        }
        else
        {
            printf("  ");
        }
        printf("\n");
    }
    printf("\n=================***==============\n");
    getch();
    printf("Thanks");
    return 0;
}
