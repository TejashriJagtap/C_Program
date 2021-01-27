#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,r=0,c=0;

    printf("\n Enter Row And Column Value= ");
    scanf("%d%d",&r,&c);
    printf("\n=================***==============\n\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n=================***==============\n");
    getch();
    printf("Thanks");
    return 0;
}
