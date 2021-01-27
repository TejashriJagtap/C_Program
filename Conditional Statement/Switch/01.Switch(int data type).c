#include<stdio.h>
#include<conio.h>

int main()
{
    int Day=0;

    printf("\n Enter Number (1-7) To View Day Text=");
    scanf("%d",&Day);

    switch(Day)
    {
        case 1:
            printf("\n Monday");
            printf("\n Shiv");
            break;
        case 2:
            printf("\n Tuesday");
            break;
        case 3:
            printf("\n Wednesday");
            break;
        case 4:
            printf("\n Thursday");
            break;

        case 5:
            printf("\n Friday");
            break;
        case 6:
            printf("\n Saturday");
            break;
        case 7:
            printf("\n Sunday");
            break;
        default:
            printf("\nInvalid Day");
            break;
    }
    printf("\n Thanks For Interacting");

    getch();

    return 0;
}
