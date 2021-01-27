//Accept character to display is ASCII Value
#include<stdio.h>
#include<conio.h>

int main()
{
    char c='\0';

    printf("Enter Character to display it's ASCII value=");
    c=getch();

    printf("\n ASCII Value Of %c is %d",c,c);
    getch();
    return 0;
}
