//Accept ASCII Value to display it's Corresponding character
#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0;

    printf("ASCII Value To Character Conversion");
    printf("\n\nEnter ASCII Value To Get it's Corresponding Character=");
    scanf("%d",&n);

    printf("\n Character for Given ASCII Value  %d is |%c|",n,n);
    getch();
    return 0;
}
