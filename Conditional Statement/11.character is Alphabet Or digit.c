#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter The Character=");
    ch=getche();

    if(((ch>='A')&&(ch<='Z')) || ((ch>='a')&&(ch<='z')))
    {
        printf("\n Given Character Is Alphabet");
    }
    else if((ch>='0')&&(ch<='9'))
    {
        printf("\n Given Character Is Digit");
    }
    else
    {
        printf("\nGiven Character Is Special Symbol");
    }
     printf("\nThanks...");
     getch();
     return 0;
}
