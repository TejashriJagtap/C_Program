#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0;
    char ch='A';

    printf("\n Enter  Value For Pattern= ");
    scanf("%d",&c);
    printf("\n=================***==============\n\n");

    for(i=1;i<=c;i++)
    {
        for(ch='A',j=1;j<=c;j++,ch++)
        {
            if(i>=j)
            {
                printf("%c",ch);

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n=================***==============\n");
    getch();
    printf("Thanks");
    return 0;
}
