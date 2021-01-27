#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0;
    printf("\n ASCII Values \n\n");
    n=0;
    while(n<=127)
    {
        printf("\n\t %d = %c",n,n);
        n++;
    }
    getch();
    return 0;
}
