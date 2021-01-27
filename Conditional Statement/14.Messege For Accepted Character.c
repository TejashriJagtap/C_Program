#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter The Character To View Corresponding Message=");
    ch=getche();

    if((ch>='A')&&(ch<='a'))
    {
        printf("\n\n Welcome");
    }
    else if((ch>='B')&&(ch<='b'))
    {
        printf("\n\n Good Bye");
    }
    else if((ch>='C')&&(ch<='c'))
    {
        printf("\n\n Have A Nice Day");
    }
    else if((ch>='D')&&(ch<='d'))
    {
        printf("\n\n Good Day");
    }
    else
    {
        printf("\n\nNo Message For Such Character");
    }
     printf("\nThanks...");
     getch();
     return 0;
}
