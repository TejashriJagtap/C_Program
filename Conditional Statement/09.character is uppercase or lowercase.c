#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter The Character=");
    ch=getche();

    if((ch>='A')&&(ch<='Z'))
    {
        printf("\n Given Character Is In Uppercase Letter");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("\n Given Character Is In Lowercase Letter");
    }
    else
    {
        printf("\n Invalid Input");
    }
     printf("\nThanks...");
     getch();
     return 0;
}
