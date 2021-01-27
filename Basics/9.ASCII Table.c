#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0;
    printf("\n ASCII Values \n\n");

    for(n=0;n<=127;n++)
    {
        printf("\n\t %d = %c",n,n);
    }
    getch();
    return 0;
}
